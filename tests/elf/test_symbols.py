#!/usr/bin/env python
import os
import stat
import subprocess
import pytest
from pathlib import Path
from subprocess import Popen

import lief
from utils import get_sample, is_linux, is_x86_64

lief.logging.set_level(lief.logging.LEVEL.INFO)

def test_remove_symbol(tmp_path: Path):
    target = lief.ELF.parse(get_sample("ELF/test_dyn_syms.elf"))

    target.remove_dynamic_symbol("puts")

    output = tmp_path / "test_sym_removed.elf"
    target.write(output.as_posix())

    new = lief.ELF.parse(output.as_posix())

    assert "puts" not in {s.name for s in new.dynamic_symbols}

    if is_linux() and is_x86_64():
        st = os.stat(output)
        os.chmod(output, st.st_mode | stat.S_IEXEC)

        with Popen(output.as_posix(), stdout=subprocess.PIPE, stderr=subprocess.STDOUT) as P:
            stdout = P.stdout.read().decode("utf8")
            print(stdout)
            assert len(stdout) > 0
            assert "Hello world" in stdout

        # Test with bind now
        env = dict(os.environ)
        env["LD_BIND_NOW"] = "1"
        with Popen(output.as_posix(), stdout=subprocess.PIPE, stderr=subprocess.STDOUT, env=env) as P:
            stdout = P.stdout.read().decode("utf8")
            print(stdout)
            assert len(stdout) > 0
            assert "Hello world" in stdout

@pytest.mark.skipif(not lief.__extended__, reason="needs LIEF extended")
def test_demangling():
    elf = lief.ELF.parse(get_sample("ELF/ELF64_x86-64_library_libtriton.so"))

    assert elf.symbols[80].demangled_name == "vtable for std::basic_streambuf<char, std::char_traits<char>>"
    assert elf.symbols[4902].demangled_name == "typeinfo name for triton::smt2lib::smtAstIteNode"
