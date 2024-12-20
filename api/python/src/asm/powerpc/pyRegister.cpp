#include "asm/powerpc/init.hpp"

#include "LIEF/asm/powerpc/registers.hpp"

namespace LIEF::assembly::powerpc::py {
template<>
void create<LIEF::assembly::powerpc::REG>(nb::module_& m) {
  nb::enum_<LIEF::assembly::powerpc::REG> reg(m, "REG");
  reg.value("NoRegister", LIEF::assembly::powerpc::REG::NoRegister)
  .value("BP", LIEF::assembly::powerpc::REG::BP)
  .value("CARRY", LIEF::assembly::powerpc::REG::CARRY)
  .value("CTR", LIEF::assembly::powerpc::REG::CTR)
  .value("FP", LIEF::assembly::powerpc::REG::FP)
  .value("LR", LIEF::assembly::powerpc::REG::LR)
  .value("RM", LIEF::assembly::powerpc::REG::RM)
  .value("SPEFSCR", LIEF::assembly::powerpc::REG::SPEFSCR)
  .value("VRSAVE", LIEF::assembly::powerpc::REG::VRSAVE)
  .value("XER", LIEF::assembly::powerpc::REG::XER)
  .value("ZERO", LIEF::assembly::powerpc::REG::ZERO)
  .value("ACC0", LIEF::assembly::powerpc::REG::ACC0)
  .value("ACC1", LIEF::assembly::powerpc::REG::ACC1)
  .value("ACC2", LIEF::assembly::powerpc::REG::ACC2)
  .value("ACC3", LIEF::assembly::powerpc::REG::ACC3)
  .value("ACC4", LIEF::assembly::powerpc::REG::ACC4)
  .value("ACC5", LIEF::assembly::powerpc::REG::ACC5)
  .value("ACC6", LIEF::assembly::powerpc::REG::ACC6)
  .value("ACC7", LIEF::assembly::powerpc::REG::ACC7)
  .value("BP8", LIEF::assembly::powerpc::REG::BP8)
  .value("CR0", LIEF::assembly::powerpc::REG::CR0)
  .value("CR1", LIEF::assembly::powerpc::REG::CR1)
  .value("CR2", LIEF::assembly::powerpc::REG::CR2)
  .value("CR3", LIEF::assembly::powerpc::REG::CR3)
  .value("CR4", LIEF::assembly::powerpc::REG::CR4)
  .value("CR5", LIEF::assembly::powerpc::REG::CR5)
  .value("CR6", LIEF::assembly::powerpc::REG::CR6)
  .value("CR7", LIEF::assembly::powerpc::REG::CR7)
  .value("CTR8", LIEF::assembly::powerpc::REG::CTR8)
  .value("DMR0", LIEF::assembly::powerpc::REG::DMR0)
  .value("DMR1", LIEF::assembly::powerpc::REG::DMR1)
  .value("DMR2", LIEF::assembly::powerpc::REG::DMR2)
  .value("DMR3", LIEF::assembly::powerpc::REG::DMR3)
  .value("DMR4", LIEF::assembly::powerpc::REG::DMR4)
  .value("DMR5", LIEF::assembly::powerpc::REG::DMR5)
  .value("DMR6", LIEF::assembly::powerpc::REG::DMR6)
  .value("DMR7", LIEF::assembly::powerpc::REG::DMR7)
  .value("DMRROW0", LIEF::assembly::powerpc::REG::DMRROW0)
  .value("DMRROW1", LIEF::assembly::powerpc::REG::DMRROW1)
  .value("DMRROW2", LIEF::assembly::powerpc::REG::DMRROW2)
  .value("DMRROW3", LIEF::assembly::powerpc::REG::DMRROW3)
  .value("DMRROW4", LIEF::assembly::powerpc::REG::DMRROW4)
  .value("DMRROW5", LIEF::assembly::powerpc::REG::DMRROW5)
  .value("DMRROW6", LIEF::assembly::powerpc::REG::DMRROW6)
  .value("DMRROW7", LIEF::assembly::powerpc::REG::DMRROW7)
  .value("DMRROW8", LIEF::assembly::powerpc::REG::DMRROW8)
  .value("DMRROW9", LIEF::assembly::powerpc::REG::DMRROW9)
  .value("DMRROW10", LIEF::assembly::powerpc::REG::DMRROW10)
  .value("DMRROW11", LIEF::assembly::powerpc::REG::DMRROW11)
  .value("DMRROW12", LIEF::assembly::powerpc::REG::DMRROW12)
  .value("DMRROW13", LIEF::assembly::powerpc::REG::DMRROW13)
  .value("DMRROW14", LIEF::assembly::powerpc::REG::DMRROW14)
  .value("DMRROW15", LIEF::assembly::powerpc::REG::DMRROW15)
  .value("DMRROW16", LIEF::assembly::powerpc::REG::DMRROW16)
  .value("DMRROW17", LIEF::assembly::powerpc::REG::DMRROW17)
  .value("DMRROW18", LIEF::assembly::powerpc::REG::DMRROW18)
  .value("DMRROW19", LIEF::assembly::powerpc::REG::DMRROW19)
  .value("DMRROW20", LIEF::assembly::powerpc::REG::DMRROW20)
  .value("DMRROW21", LIEF::assembly::powerpc::REG::DMRROW21)
  .value("DMRROW22", LIEF::assembly::powerpc::REG::DMRROW22)
  .value("DMRROW23", LIEF::assembly::powerpc::REG::DMRROW23)
  .value("DMRROW24", LIEF::assembly::powerpc::REG::DMRROW24)
  .value("DMRROW25", LIEF::assembly::powerpc::REG::DMRROW25)
  .value("DMRROW26", LIEF::assembly::powerpc::REG::DMRROW26)
  .value("DMRROW27", LIEF::assembly::powerpc::REG::DMRROW27)
  .value("DMRROW28", LIEF::assembly::powerpc::REG::DMRROW28)
  .value("DMRROW29", LIEF::assembly::powerpc::REG::DMRROW29)
  .value("DMRROW30", LIEF::assembly::powerpc::REG::DMRROW30)
  .value("DMRROW31", LIEF::assembly::powerpc::REG::DMRROW31)
  .value("DMRROW32", LIEF::assembly::powerpc::REG::DMRROW32)
  .value("DMRROW33", LIEF::assembly::powerpc::REG::DMRROW33)
  .value("DMRROW34", LIEF::assembly::powerpc::REG::DMRROW34)
  .value("DMRROW35", LIEF::assembly::powerpc::REG::DMRROW35)
  .value("DMRROW36", LIEF::assembly::powerpc::REG::DMRROW36)
  .value("DMRROW37", LIEF::assembly::powerpc::REG::DMRROW37)
  .value("DMRROW38", LIEF::assembly::powerpc::REG::DMRROW38)
  .value("DMRROW39", LIEF::assembly::powerpc::REG::DMRROW39)
  .value("DMRROW40", LIEF::assembly::powerpc::REG::DMRROW40)
  .value("DMRROW41", LIEF::assembly::powerpc::REG::DMRROW41)
  .value("DMRROW42", LIEF::assembly::powerpc::REG::DMRROW42)
  .value("DMRROW43", LIEF::assembly::powerpc::REG::DMRROW43)
  .value("DMRROW44", LIEF::assembly::powerpc::REG::DMRROW44)
  .value("DMRROW45", LIEF::assembly::powerpc::REG::DMRROW45)
  .value("DMRROW46", LIEF::assembly::powerpc::REG::DMRROW46)
  .value("DMRROW47", LIEF::assembly::powerpc::REG::DMRROW47)
  .value("DMRROW48", LIEF::assembly::powerpc::REG::DMRROW48)
  .value("DMRROW49", LIEF::assembly::powerpc::REG::DMRROW49)
  .value("DMRROW50", LIEF::assembly::powerpc::REG::DMRROW50)
  .value("DMRROW51", LIEF::assembly::powerpc::REG::DMRROW51)
  .value("DMRROW52", LIEF::assembly::powerpc::REG::DMRROW52)
  .value("DMRROW53", LIEF::assembly::powerpc::REG::DMRROW53)
  .value("DMRROW54", LIEF::assembly::powerpc::REG::DMRROW54)
  .value("DMRROW55", LIEF::assembly::powerpc::REG::DMRROW55)
  .value("DMRROW56", LIEF::assembly::powerpc::REG::DMRROW56)
  .value("DMRROW57", LIEF::assembly::powerpc::REG::DMRROW57)
  .value("DMRROW58", LIEF::assembly::powerpc::REG::DMRROW58)
  .value("DMRROW59", LIEF::assembly::powerpc::REG::DMRROW59)
  .value("DMRROW60", LIEF::assembly::powerpc::REG::DMRROW60)
  .value("DMRROW61", LIEF::assembly::powerpc::REG::DMRROW61)
  .value("DMRROW62", LIEF::assembly::powerpc::REG::DMRROW62)
  .value("DMRROW63", LIEF::assembly::powerpc::REG::DMRROW63)
  .value("DMRROWp0", LIEF::assembly::powerpc::REG::DMRROWp0)
  .value("DMRROWp1", LIEF::assembly::powerpc::REG::DMRROWp1)
  .value("DMRROWp2", LIEF::assembly::powerpc::REG::DMRROWp2)
  .value("DMRROWp3", LIEF::assembly::powerpc::REG::DMRROWp3)
  .value("DMRROWp4", LIEF::assembly::powerpc::REG::DMRROWp4)
  .value("DMRROWp5", LIEF::assembly::powerpc::REG::DMRROWp5)
  .value("DMRROWp6", LIEF::assembly::powerpc::REG::DMRROWp6)
  .value("DMRROWp7", LIEF::assembly::powerpc::REG::DMRROWp7)
  .value("DMRROWp8", LIEF::assembly::powerpc::REG::DMRROWp8)
  .value("DMRROWp9", LIEF::assembly::powerpc::REG::DMRROWp9)
  .value("DMRROWp10", LIEF::assembly::powerpc::REG::DMRROWp10)
  .value("DMRROWp11", LIEF::assembly::powerpc::REG::DMRROWp11)
  .value("DMRROWp12", LIEF::assembly::powerpc::REG::DMRROWp12)
  .value("DMRROWp13", LIEF::assembly::powerpc::REG::DMRROWp13)
  .value("DMRROWp14", LIEF::assembly::powerpc::REG::DMRROWp14)
  .value("DMRROWp15", LIEF::assembly::powerpc::REG::DMRROWp15)
  .value("DMRROWp16", LIEF::assembly::powerpc::REG::DMRROWp16)
  .value("DMRROWp17", LIEF::assembly::powerpc::REG::DMRROWp17)
  .value("DMRROWp18", LIEF::assembly::powerpc::REG::DMRROWp18)
  .value("DMRROWp19", LIEF::assembly::powerpc::REG::DMRROWp19)
  .value("DMRROWp20", LIEF::assembly::powerpc::REG::DMRROWp20)
  .value("DMRROWp21", LIEF::assembly::powerpc::REG::DMRROWp21)
  .value("DMRROWp22", LIEF::assembly::powerpc::REG::DMRROWp22)
  .value("DMRROWp23", LIEF::assembly::powerpc::REG::DMRROWp23)
  .value("DMRROWp24", LIEF::assembly::powerpc::REG::DMRROWp24)
  .value("DMRROWp25", LIEF::assembly::powerpc::REG::DMRROWp25)
  .value("DMRROWp26", LIEF::assembly::powerpc::REG::DMRROWp26)
  .value("DMRROWp27", LIEF::assembly::powerpc::REG::DMRROWp27)
  .value("DMRROWp28", LIEF::assembly::powerpc::REG::DMRROWp28)
  .value("DMRROWp29", LIEF::assembly::powerpc::REG::DMRROWp29)
  .value("DMRROWp30", LIEF::assembly::powerpc::REG::DMRROWp30)
  .value("DMRROWp31", LIEF::assembly::powerpc::REG::DMRROWp31)
  .value("DMRp0", LIEF::assembly::powerpc::REG::DMRp0)
  .value("DMRp1", LIEF::assembly::powerpc::REG::DMRp1)
  .value("DMRp2", LIEF::assembly::powerpc::REG::DMRp2)
  .value("DMRp3", LIEF::assembly::powerpc::REG::DMRp3)
  .value("F0", LIEF::assembly::powerpc::REG::F0)
  .value("F1", LIEF::assembly::powerpc::REG::F1)
  .value("F2", LIEF::assembly::powerpc::REG::F2)
  .value("F3", LIEF::assembly::powerpc::REG::F3)
  .value("F4", LIEF::assembly::powerpc::REG::F4)
  .value("F5", LIEF::assembly::powerpc::REG::F5)
  .value("F6", LIEF::assembly::powerpc::REG::F6)
  .value("F7", LIEF::assembly::powerpc::REG::F7)
  .value("F8", LIEF::assembly::powerpc::REG::F8)
  .value("F9", LIEF::assembly::powerpc::REG::F9)
  .value("F10", LIEF::assembly::powerpc::REG::F10)
  .value("F11", LIEF::assembly::powerpc::REG::F11)
  .value("F12", LIEF::assembly::powerpc::REG::F12)
  .value("F13", LIEF::assembly::powerpc::REG::F13)
  .value("F14", LIEF::assembly::powerpc::REG::F14)
  .value("F15", LIEF::assembly::powerpc::REG::F15)
  .value("F16", LIEF::assembly::powerpc::REG::F16)
  .value("F17", LIEF::assembly::powerpc::REG::F17)
  .value("F18", LIEF::assembly::powerpc::REG::F18)
  .value("F19", LIEF::assembly::powerpc::REG::F19)
  .value("F20", LIEF::assembly::powerpc::REG::F20)
  .value("F21", LIEF::assembly::powerpc::REG::F21)
  .value("F22", LIEF::assembly::powerpc::REG::F22)
  .value("F23", LIEF::assembly::powerpc::REG::F23)
  .value("F24", LIEF::assembly::powerpc::REG::F24)
  .value("F25", LIEF::assembly::powerpc::REG::F25)
  .value("F26", LIEF::assembly::powerpc::REG::F26)
  .value("F27", LIEF::assembly::powerpc::REG::F27)
  .value("F28", LIEF::assembly::powerpc::REG::F28)
  .value("F29", LIEF::assembly::powerpc::REG::F29)
  .value("F30", LIEF::assembly::powerpc::REG::F30)
  .value("F31", LIEF::assembly::powerpc::REG::F31)
  .value("FH0", LIEF::assembly::powerpc::REG::FH0)
  .value("FH1", LIEF::assembly::powerpc::REG::FH1)
  .value("FH2", LIEF::assembly::powerpc::REG::FH2)
  .value("FH3", LIEF::assembly::powerpc::REG::FH3)
  .value("FH4", LIEF::assembly::powerpc::REG::FH4)
  .value("FH5", LIEF::assembly::powerpc::REG::FH5)
  .value("FH6", LIEF::assembly::powerpc::REG::FH6)
  .value("FH7", LIEF::assembly::powerpc::REG::FH7)
  .value("FH8", LIEF::assembly::powerpc::REG::FH8)
  .value("FH9", LIEF::assembly::powerpc::REG::FH9)
  .value("FH10", LIEF::assembly::powerpc::REG::FH10)
  .value("FH11", LIEF::assembly::powerpc::REG::FH11)
  .value("FH12", LIEF::assembly::powerpc::REG::FH12)
  .value("FH13", LIEF::assembly::powerpc::REG::FH13)
  .value("FH14", LIEF::assembly::powerpc::REG::FH14)
  .value("FH15", LIEF::assembly::powerpc::REG::FH15)
  .value("FH16", LIEF::assembly::powerpc::REG::FH16)
  .value("FH17", LIEF::assembly::powerpc::REG::FH17)
  .value("FH18", LIEF::assembly::powerpc::REG::FH18)
  .value("FH19", LIEF::assembly::powerpc::REG::FH19)
  .value("FH20", LIEF::assembly::powerpc::REG::FH20)
  .value("FH21", LIEF::assembly::powerpc::REG::FH21)
  .value("FH22", LIEF::assembly::powerpc::REG::FH22)
  .value("FH23", LIEF::assembly::powerpc::REG::FH23)
  .value("FH24", LIEF::assembly::powerpc::REG::FH24)
  .value("FH25", LIEF::assembly::powerpc::REG::FH25)
  .value("FH26", LIEF::assembly::powerpc::REG::FH26)
  .value("FH27", LIEF::assembly::powerpc::REG::FH27)
  .value("FH28", LIEF::assembly::powerpc::REG::FH28)
  .value("FH29", LIEF::assembly::powerpc::REG::FH29)
  .value("FH30", LIEF::assembly::powerpc::REG::FH30)
  .value("FH31", LIEF::assembly::powerpc::REG::FH31)
  .value("FP8", LIEF::assembly::powerpc::REG::FP8)
  .value("Fpair0", LIEF::assembly::powerpc::REG::Fpair0)
  .value("Fpair2", LIEF::assembly::powerpc::REG::Fpair2)
  .value("Fpair4", LIEF::assembly::powerpc::REG::Fpair4)
  .value("Fpair6", LIEF::assembly::powerpc::REG::Fpair6)
  .value("Fpair8", LIEF::assembly::powerpc::REG::Fpair8)
  .value("Fpair10", LIEF::assembly::powerpc::REG::Fpair10)
  .value("Fpair12", LIEF::assembly::powerpc::REG::Fpair12)
  .value("Fpair14", LIEF::assembly::powerpc::REG::Fpair14)
  .value("Fpair16", LIEF::assembly::powerpc::REG::Fpair16)
  .value("Fpair18", LIEF::assembly::powerpc::REG::Fpair18)
  .value("Fpair20", LIEF::assembly::powerpc::REG::Fpair20)
  .value("Fpair22", LIEF::assembly::powerpc::REG::Fpair22)
  .value("Fpair24", LIEF::assembly::powerpc::REG::Fpair24)
  .value("Fpair26", LIEF::assembly::powerpc::REG::Fpair26)
  .value("Fpair28", LIEF::assembly::powerpc::REG::Fpair28)
  .value("Fpair30", LIEF::assembly::powerpc::REG::Fpair30)
  .value("H0", LIEF::assembly::powerpc::REG::H0)
  .value("H1", LIEF::assembly::powerpc::REG::H1)
  .value("H2", LIEF::assembly::powerpc::REG::H2)
  .value("H3", LIEF::assembly::powerpc::REG::H3)
  .value("H4", LIEF::assembly::powerpc::REG::H4)
  .value("H5", LIEF::assembly::powerpc::REG::H5)
  .value("H6", LIEF::assembly::powerpc::REG::H6)
  .value("H7", LIEF::assembly::powerpc::REG::H7)
  .value("H8", LIEF::assembly::powerpc::REG::H8)
  .value("H9", LIEF::assembly::powerpc::REG::H9)
  .value("H10", LIEF::assembly::powerpc::REG::H10)
  .value("H11", LIEF::assembly::powerpc::REG::H11)
  .value("H12", LIEF::assembly::powerpc::REG::H12)
  .value("H13", LIEF::assembly::powerpc::REG::H13)
  .value("H14", LIEF::assembly::powerpc::REG::H14)
  .value("H15", LIEF::assembly::powerpc::REG::H15)
  .value("H16", LIEF::assembly::powerpc::REG::H16)
  .value("H17", LIEF::assembly::powerpc::REG::H17)
  .value("H18", LIEF::assembly::powerpc::REG::H18)
  .value("H19", LIEF::assembly::powerpc::REG::H19)
  .value("H20", LIEF::assembly::powerpc::REG::H20)
  .value("H21", LIEF::assembly::powerpc::REG::H21)
  .value("H22", LIEF::assembly::powerpc::REG::H22)
  .value("H23", LIEF::assembly::powerpc::REG::H23)
  .value("H24", LIEF::assembly::powerpc::REG::H24)
  .value("H25", LIEF::assembly::powerpc::REG::H25)
  .value("H26", LIEF::assembly::powerpc::REG::H26)
  .value("H27", LIEF::assembly::powerpc::REG::H27)
  .value("H28", LIEF::assembly::powerpc::REG::H28)
  .value("H29", LIEF::assembly::powerpc::REG::H29)
  .value("H30", LIEF::assembly::powerpc::REG::H30)
  .value("H31", LIEF::assembly::powerpc::REG::H31)
  .value("LR8", LIEF::assembly::powerpc::REG::LR8)
  .value("R0", LIEF::assembly::powerpc::REG::R0)
  .value("R1", LIEF::assembly::powerpc::REG::R1)
  .value("R2", LIEF::assembly::powerpc::REG::R2)
  .value("R3", LIEF::assembly::powerpc::REG::R3)
  .value("R4", LIEF::assembly::powerpc::REG::R4)
  .value("R5", LIEF::assembly::powerpc::REG::R5)
  .value("R6", LIEF::assembly::powerpc::REG::R6)
  .value("R7", LIEF::assembly::powerpc::REG::R7)
  .value("R8", LIEF::assembly::powerpc::REG::R8)
  .value("R9", LIEF::assembly::powerpc::REG::R9)
  .value("R10", LIEF::assembly::powerpc::REG::R10)
  .value("R11", LIEF::assembly::powerpc::REG::R11)
  .value("R12", LIEF::assembly::powerpc::REG::R12)
  .value("R13", LIEF::assembly::powerpc::REG::R13)
  .value("R14", LIEF::assembly::powerpc::REG::R14)
  .value("R15", LIEF::assembly::powerpc::REG::R15)
  .value("R16", LIEF::assembly::powerpc::REG::R16)
  .value("R17", LIEF::assembly::powerpc::REG::R17)
  .value("R18", LIEF::assembly::powerpc::REG::R18)
  .value("R19", LIEF::assembly::powerpc::REG::R19)
  .value("R20", LIEF::assembly::powerpc::REG::R20)
  .value("R21", LIEF::assembly::powerpc::REG::R21)
  .value("R22", LIEF::assembly::powerpc::REG::R22)
  .value("R23", LIEF::assembly::powerpc::REG::R23)
  .value("R24", LIEF::assembly::powerpc::REG::R24)
  .value("R25", LIEF::assembly::powerpc::REG::R25)
  .value("R26", LIEF::assembly::powerpc::REG::R26)
  .value("R27", LIEF::assembly::powerpc::REG::R27)
  .value("R28", LIEF::assembly::powerpc::REG::R28)
  .value("R29", LIEF::assembly::powerpc::REG::R29)
  .value("R30", LIEF::assembly::powerpc::REG::R30)
  .value("R31", LIEF::assembly::powerpc::REG::R31)
  .value("S0", LIEF::assembly::powerpc::REG::S0)
  .value("S1", LIEF::assembly::powerpc::REG::S1)
  .value("S2", LIEF::assembly::powerpc::REG::S2)
  .value("S3", LIEF::assembly::powerpc::REG::S3)
  .value("S4", LIEF::assembly::powerpc::REG::S4)
  .value("S5", LIEF::assembly::powerpc::REG::S5)
  .value("S6", LIEF::assembly::powerpc::REG::S6)
  .value("S7", LIEF::assembly::powerpc::REG::S7)
  .value("S8", LIEF::assembly::powerpc::REG::S8)
  .value("S9", LIEF::assembly::powerpc::REG::S9)
  .value("S10", LIEF::assembly::powerpc::REG::S10)
  .value("S11", LIEF::assembly::powerpc::REG::S11)
  .value("S12", LIEF::assembly::powerpc::REG::S12)
  .value("S13", LIEF::assembly::powerpc::REG::S13)
  .value("S14", LIEF::assembly::powerpc::REG::S14)
  .value("S15", LIEF::assembly::powerpc::REG::S15)
  .value("S16", LIEF::assembly::powerpc::REG::S16);
  reg.value("S17", LIEF::assembly::powerpc::REG::S17)
  .value("S18", LIEF::assembly::powerpc::REG::S18)
  .value("S19", LIEF::assembly::powerpc::REG::S19)
  .value("S20", LIEF::assembly::powerpc::REG::S20)
  .value("S21", LIEF::assembly::powerpc::REG::S21)
  .value("S22", LIEF::assembly::powerpc::REG::S22)
  .value("S23", LIEF::assembly::powerpc::REG::S23)
  .value("S24", LIEF::assembly::powerpc::REG::S24)
  .value("S25", LIEF::assembly::powerpc::REG::S25)
  .value("S26", LIEF::assembly::powerpc::REG::S26)
  .value("S27", LIEF::assembly::powerpc::REG::S27)
  .value("S28", LIEF::assembly::powerpc::REG::S28)
  .value("S29", LIEF::assembly::powerpc::REG::S29)
  .value("S30", LIEF::assembly::powerpc::REG::S30)
  .value("S31", LIEF::assembly::powerpc::REG::S31)
  .value("UACC0", LIEF::assembly::powerpc::REG::UACC0)
  .value("UACC1", LIEF::assembly::powerpc::REG::UACC1)
  .value("UACC2", LIEF::assembly::powerpc::REG::UACC2)
  .value("UACC3", LIEF::assembly::powerpc::REG::UACC3)
  .value("UACC4", LIEF::assembly::powerpc::REG::UACC4)
  .value("UACC5", LIEF::assembly::powerpc::REG::UACC5)
  .value("UACC6", LIEF::assembly::powerpc::REG::UACC6)
  .value("UACC7", LIEF::assembly::powerpc::REG::UACC7)
  .value("V0", LIEF::assembly::powerpc::REG::V0)
  .value("V1", LIEF::assembly::powerpc::REG::V1)
  .value("V2", LIEF::assembly::powerpc::REG::V2)
  .value("V3", LIEF::assembly::powerpc::REG::V3)
  .value("V4", LIEF::assembly::powerpc::REG::V4)
  .value("V5", LIEF::assembly::powerpc::REG::V5)
  .value("V6", LIEF::assembly::powerpc::REG::V6)
  .value("V7", LIEF::assembly::powerpc::REG::V7)
  .value("V8", LIEF::assembly::powerpc::REG::V8)
  .value("V9", LIEF::assembly::powerpc::REG::V9)
  .value("V10", LIEF::assembly::powerpc::REG::V10)
  .value("V11", LIEF::assembly::powerpc::REG::V11)
  .value("V12", LIEF::assembly::powerpc::REG::V12)
  .value("V13", LIEF::assembly::powerpc::REG::V13)
  .value("V14", LIEF::assembly::powerpc::REG::V14)
  .value("V15", LIEF::assembly::powerpc::REG::V15)
  .value("V16", LIEF::assembly::powerpc::REG::V16)
  .value("V17", LIEF::assembly::powerpc::REG::V17)
  .value("V18", LIEF::assembly::powerpc::REG::V18)
  .value("V19", LIEF::assembly::powerpc::REG::V19)
  .value("V20", LIEF::assembly::powerpc::REG::V20)
  .value("V21", LIEF::assembly::powerpc::REG::V21)
  .value("V22", LIEF::assembly::powerpc::REG::V22)
  .value("V23", LIEF::assembly::powerpc::REG::V23)
  .value("V24", LIEF::assembly::powerpc::REG::V24)
  .value("V25", LIEF::assembly::powerpc::REG::V25)
  .value("V26", LIEF::assembly::powerpc::REG::V26)
  .value("V27", LIEF::assembly::powerpc::REG::V27)
  .value("V28", LIEF::assembly::powerpc::REG::V28)
  .value("V29", LIEF::assembly::powerpc::REG::V29)
  .value("V30", LIEF::assembly::powerpc::REG::V30)
  .value("V31", LIEF::assembly::powerpc::REG::V31)
  .value("VF0", LIEF::assembly::powerpc::REG::VF0)
  .value("VF1", LIEF::assembly::powerpc::REG::VF1)
  .value("VF2", LIEF::assembly::powerpc::REG::VF2)
  .value("VF3", LIEF::assembly::powerpc::REG::VF3)
  .value("VF4", LIEF::assembly::powerpc::REG::VF4)
  .value("VF5", LIEF::assembly::powerpc::REG::VF5)
  .value("VF6", LIEF::assembly::powerpc::REG::VF6)
  .value("VF7", LIEF::assembly::powerpc::REG::VF7)
  .value("VF8", LIEF::assembly::powerpc::REG::VF8)
  .value("VF9", LIEF::assembly::powerpc::REG::VF9)
  .value("VF10", LIEF::assembly::powerpc::REG::VF10)
  .value("VF11", LIEF::assembly::powerpc::REG::VF11)
  .value("VF12", LIEF::assembly::powerpc::REG::VF12)
  .value("VF13", LIEF::assembly::powerpc::REG::VF13)
  .value("VF14", LIEF::assembly::powerpc::REG::VF14)
  .value("VF15", LIEF::assembly::powerpc::REG::VF15)
  .value("VF16", LIEF::assembly::powerpc::REG::VF16)
  .value("VF17", LIEF::assembly::powerpc::REG::VF17)
  .value("VF18", LIEF::assembly::powerpc::REG::VF18)
  .value("VF19", LIEF::assembly::powerpc::REG::VF19)
  .value("VF20", LIEF::assembly::powerpc::REG::VF20)
  .value("VF21", LIEF::assembly::powerpc::REG::VF21)
  .value("VF22", LIEF::assembly::powerpc::REG::VF22)
  .value("VF23", LIEF::assembly::powerpc::REG::VF23)
  .value("VF24", LIEF::assembly::powerpc::REG::VF24)
  .value("VF25", LIEF::assembly::powerpc::REG::VF25)
  .value("VF26", LIEF::assembly::powerpc::REG::VF26)
  .value("VF27", LIEF::assembly::powerpc::REG::VF27)
  .value("VF28", LIEF::assembly::powerpc::REG::VF28)
  .value("VF29", LIEF::assembly::powerpc::REG::VF29)
  .value("VF30", LIEF::assembly::powerpc::REG::VF30)
  .value("VF31", LIEF::assembly::powerpc::REG::VF31)
  .value("VFH0", LIEF::assembly::powerpc::REG::VFH0)
  .value("VFH1", LIEF::assembly::powerpc::REG::VFH1)
  .value("VFH2", LIEF::assembly::powerpc::REG::VFH2)
  .value("VFH3", LIEF::assembly::powerpc::REG::VFH3)
  .value("VFH4", LIEF::assembly::powerpc::REG::VFH4)
  .value("VFH5", LIEF::assembly::powerpc::REG::VFH5)
  .value("VFH6", LIEF::assembly::powerpc::REG::VFH6)
  .value("VFH7", LIEF::assembly::powerpc::REG::VFH7)
  .value("VFH8", LIEF::assembly::powerpc::REG::VFH8)
  .value("VFH9", LIEF::assembly::powerpc::REG::VFH9)
  .value("VFH10", LIEF::assembly::powerpc::REG::VFH10)
  .value("VFH11", LIEF::assembly::powerpc::REG::VFH11)
  .value("VFH12", LIEF::assembly::powerpc::REG::VFH12)
  .value("VFH13", LIEF::assembly::powerpc::REG::VFH13)
  .value("VFH14", LIEF::assembly::powerpc::REG::VFH14)
  .value("VFH15", LIEF::assembly::powerpc::REG::VFH15)
  .value("VFH16", LIEF::assembly::powerpc::REG::VFH16)
  .value("VFH17", LIEF::assembly::powerpc::REG::VFH17)
  .value("VFH18", LIEF::assembly::powerpc::REG::VFH18)
  .value("VFH19", LIEF::assembly::powerpc::REG::VFH19)
  .value("VFH20", LIEF::assembly::powerpc::REG::VFH20)
  .value("VFH21", LIEF::assembly::powerpc::REG::VFH21)
  .value("VFH22", LIEF::assembly::powerpc::REG::VFH22)
  .value("VFH23", LIEF::assembly::powerpc::REG::VFH23)
  .value("VFH24", LIEF::assembly::powerpc::REG::VFH24)
  .value("VFH25", LIEF::assembly::powerpc::REG::VFH25)
  .value("VFH26", LIEF::assembly::powerpc::REG::VFH26)
  .value("VFH27", LIEF::assembly::powerpc::REG::VFH27)
  .value("VFH28", LIEF::assembly::powerpc::REG::VFH28)
  .value("VFH29", LIEF::assembly::powerpc::REG::VFH29)
  .value("VFH30", LIEF::assembly::powerpc::REG::VFH30)
  .value("VFH31", LIEF::assembly::powerpc::REG::VFH31)
  .value("VSL0", LIEF::assembly::powerpc::REG::VSL0)
  .value("VSL1", LIEF::assembly::powerpc::REG::VSL1)
  .value("VSL2", LIEF::assembly::powerpc::REG::VSL2)
  .value("VSL3", LIEF::assembly::powerpc::REG::VSL3)
  .value("VSL4", LIEF::assembly::powerpc::REG::VSL4)
  .value("VSL5", LIEF::assembly::powerpc::REG::VSL5)
  .value("VSL6", LIEF::assembly::powerpc::REG::VSL6)
  .value("VSL7", LIEF::assembly::powerpc::REG::VSL7)
  .value("VSL8", LIEF::assembly::powerpc::REG::VSL8)
  .value("VSL9", LIEF::assembly::powerpc::REG::VSL9)
  .value("VSL10", LIEF::assembly::powerpc::REG::VSL10)
  .value("VSL11", LIEF::assembly::powerpc::REG::VSL11)
  .value("VSL12", LIEF::assembly::powerpc::REG::VSL12)
  .value("VSL13", LIEF::assembly::powerpc::REG::VSL13)
  .value("VSL14", LIEF::assembly::powerpc::REG::VSL14)
  .value("VSL15", LIEF::assembly::powerpc::REG::VSL15)
  .value("VSL16", LIEF::assembly::powerpc::REG::VSL16)
  .value("VSL17", LIEF::assembly::powerpc::REG::VSL17)
  .value("VSL18", LIEF::assembly::powerpc::REG::VSL18)
  .value("VSL19", LIEF::assembly::powerpc::REG::VSL19)
  .value("VSL20", LIEF::assembly::powerpc::REG::VSL20)
  .value("VSL21", LIEF::assembly::powerpc::REG::VSL21)
  .value("VSL22", LIEF::assembly::powerpc::REG::VSL22)
  .value("VSL23", LIEF::assembly::powerpc::REG::VSL23)
  .value("VSL24", LIEF::assembly::powerpc::REG::VSL24)
  .value("VSL25", LIEF::assembly::powerpc::REG::VSL25)
  .value("VSL26", LIEF::assembly::powerpc::REG::VSL26)
  .value("VSL27", LIEF::assembly::powerpc::REG::VSL27)
  .value("VSL28", LIEF::assembly::powerpc::REG::VSL28)
  .value("VSL29", LIEF::assembly::powerpc::REG::VSL29)
  .value("VSL30", LIEF::assembly::powerpc::REG::VSL30)
  .value("VSL31", LIEF::assembly::powerpc::REG::VSL31)
  .value("VSRp0", LIEF::assembly::powerpc::REG::VSRp0)
  .value("VSRp1", LIEF::assembly::powerpc::REG::VSRp1)
  .value("VSRp2", LIEF::assembly::powerpc::REG::VSRp2)
  .value("VSRp3", LIEF::assembly::powerpc::REG::VSRp3)
  .value("VSRp4", LIEF::assembly::powerpc::REG::VSRp4)
  .value("VSRp5", LIEF::assembly::powerpc::REG::VSRp5)
  .value("VSRp6", LIEF::assembly::powerpc::REG::VSRp6)
  .value("VSRp7", LIEF::assembly::powerpc::REG::VSRp7)
  .value("VSRp8", LIEF::assembly::powerpc::REG::VSRp8)
  .value("VSRp9", LIEF::assembly::powerpc::REG::VSRp9)
  .value("VSRp10", LIEF::assembly::powerpc::REG::VSRp10)
  .value("VSRp11", LIEF::assembly::powerpc::REG::VSRp11)
  .value("VSRp12", LIEF::assembly::powerpc::REG::VSRp12)
  .value("VSRp13", LIEF::assembly::powerpc::REG::VSRp13)
  .value("VSRp14", LIEF::assembly::powerpc::REG::VSRp14)
  .value("VSRp15", LIEF::assembly::powerpc::REG::VSRp15)
  .value("VSRp16", LIEF::assembly::powerpc::REG::VSRp16)
  .value("VSRp17", LIEF::assembly::powerpc::REG::VSRp17)
  .value("VSRp18", LIEF::assembly::powerpc::REG::VSRp18)
  .value("VSRp19", LIEF::assembly::powerpc::REG::VSRp19)
  .value("VSRp20", LIEF::assembly::powerpc::REG::VSRp20)
  .value("VSRp21", LIEF::assembly::powerpc::REG::VSRp21)
  .value("VSRp22", LIEF::assembly::powerpc::REG::VSRp22)
  .value("VSRp23", LIEF::assembly::powerpc::REG::VSRp23)
  .value("VSRp24", LIEF::assembly::powerpc::REG::VSRp24)
  .value("VSRp25", LIEF::assembly::powerpc::REG::VSRp25)
  .value("VSRp26", LIEF::assembly::powerpc::REG::VSRp26)
  .value("VSRp27", LIEF::assembly::powerpc::REG::VSRp27)
  .value("VSRp28", LIEF::assembly::powerpc::REG::VSRp28)
  .value("VSRp29", LIEF::assembly::powerpc::REG::VSRp29)
  .value("VSRp30", LIEF::assembly::powerpc::REG::VSRp30)
  .value("VSRp31", LIEF::assembly::powerpc::REG::VSRp31)
  .value("VSX32", LIEF::assembly::powerpc::REG::VSX32)
  .value("VSX33", LIEF::assembly::powerpc::REG::VSX33)
  .value("VSX34", LIEF::assembly::powerpc::REG::VSX34)
  .value("VSX35", LIEF::assembly::powerpc::REG::VSX35)
  .value("VSX36", LIEF::assembly::powerpc::REG::VSX36)
  .value("VSX37", LIEF::assembly::powerpc::REG::VSX37)
  .value("VSX38", LIEF::assembly::powerpc::REG::VSX38)
  .value("VSX39", LIEF::assembly::powerpc::REG::VSX39)
  .value("VSX40", LIEF::assembly::powerpc::REG::VSX40)
  .value("VSX41", LIEF::assembly::powerpc::REG::VSX41)
  .value("VSX42", LIEF::assembly::powerpc::REG::VSX42)
  .value("VSX43", LIEF::assembly::powerpc::REG::VSX43)
  .value("VSX44", LIEF::assembly::powerpc::REG::VSX44)
  .value("VSX45", LIEF::assembly::powerpc::REG::VSX45)
  .value("VSX46", LIEF::assembly::powerpc::REG::VSX46)
  .value("VSX47", LIEF::assembly::powerpc::REG::VSX47)
  .value("VSX48", LIEF::assembly::powerpc::REG::VSX48)
  .value("VSX49", LIEF::assembly::powerpc::REG::VSX49)
  .value("VSX50", LIEF::assembly::powerpc::REG::VSX50)
  .value("VSX51", LIEF::assembly::powerpc::REG::VSX51)
  .value("VSX52", LIEF::assembly::powerpc::REG::VSX52)
  .value("VSX53", LIEF::assembly::powerpc::REG::VSX53)
  .value("VSX54", LIEF::assembly::powerpc::REG::VSX54)
  .value("VSX55", LIEF::assembly::powerpc::REG::VSX55)
  .value("VSX56", LIEF::assembly::powerpc::REG::VSX56)
  .value("VSX57", LIEF::assembly::powerpc::REG::VSX57)
  .value("VSX58", LIEF::assembly::powerpc::REG::VSX58)
  .value("VSX59", LIEF::assembly::powerpc::REG::VSX59)
  .value("VSX60", LIEF::assembly::powerpc::REG::VSX60)
  .value("VSX61", LIEF::assembly::powerpc::REG::VSX61)
  .value("VSX62", LIEF::assembly::powerpc::REG::VSX62)
  .value("VSX63", LIEF::assembly::powerpc::REG::VSX63)
  .value("WACC0", LIEF::assembly::powerpc::REG::WACC0)
  .value("WACC1", LIEF::assembly::powerpc::REG::WACC1)
  .value("WACC2", LIEF::assembly::powerpc::REG::WACC2)
  .value("WACC3", LIEF::assembly::powerpc::REG::WACC3)
  .value("WACC4", LIEF::assembly::powerpc::REG::WACC4)
  .value("WACC5", LIEF::assembly::powerpc::REG::WACC5)
  .value("WACC6", LIEF::assembly::powerpc::REG::WACC6)
  .value("WACC7", LIEF::assembly::powerpc::REG::WACC7)
  .value("WACC_HI0", LIEF::assembly::powerpc::REG::WACC_HI0)
  .value("WACC_HI1", LIEF::assembly::powerpc::REG::WACC_HI1)
  .value("WACC_HI2", LIEF::assembly::powerpc::REG::WACC_HI2)
  .value("WACC_HI3", LIEF::assembly::powerpc::REG::WACC_HI3)
  .value("WACC_HI4", LIEF::assembly::powerpc::REG::WACC_HI4)
  .value("WACC_HI5", LIEF::assembly::powerpc::REG::WACC_HI5)
  .value("WACC_HI6", LIEF::assembly::powerpc::REG::WACC_HI6)
  .value("WACC_HI7", LIEF::assembly::powerpc::REG::WACC_HI7)
  .value("X0", LIEF::assembly::powerpc::REG::X0)
  .value("X1", LIEF::assembly::powerpc::REG::X1)
  .value("X2", LIEF::assembly::powerpc::REG::X2)
  .value("X3", LIEF::assembly::powerpc::REG::X3)
  .value("X4", LIEF::assembly::powerpc::REG::X4)
  .value("X5", LIEF::assembly::powerpc::REG::X5)
  .value("X6", LIEF::assembly::powerpc::REG::X6)
  .value("X7", LIEF::assembly::powerpc::REG::X7)
  .value("X8", LIEF::assembly::powerpc::REG::X8)
  .value("X9", LIEF::assembly::powerpc::REG::X9)
  .value("X10", LIEF::assembly::powerpc::REG::X10)
  .value("X11", LIEF::assembly::powerpc::REG::X11)
  .value("X12", LIEF::assembly::powerpc::REG::X12)
  .value("X13", LIEF::assembly::powerpc::REG::X13)
  .value("X14", LIEF::assembly::powerpc::REG::X14)
  .value("X15", LIEF::assembly::powerpc::REG::X15)
  .value("X16", LIEF::assembly::powerpc::REG::X16)
  .value("X17", LIEF::assembly::powerpc::REG::X17)
  .value("X18", LIEF::assembly::powerpc::REG::X18)
  .value("X19", LIEF::assembly::powerpc::REG::X19)
  .value("X20", LIEF::assembly::powerpc::REG::X20)
  .value("X21", LIEF::assembly::powerpc::REG::X21)
  .value("X22", LIEF::assembly::powerpc::REG::X22)
  .value("X23", LIEF::assembly::powerpc::REG::X23)
  .value("X24", LIEF::assembly::powerpc::REG::X24)
  .value("X25", LIEF::assembly::powerpc::REG::X25)
  .value("X26", LIEF::assembly::powerpc::REG::X26)
  .value("X27", LIEF::assembly::powerpc::REG::X27)
  .value("X28", LIEF::assembly::powerpc::REG::X28)
  .value("X29", LIEF::assembly::powerpc::REG::X29)
  .value("X30", LIEF::assembly::powerpc::REG::X30)
  .value("X31", LIEF::assembly::powerpc::REG::X31)
  .value("ZERO8", LIEF::assembly::powerpc::REG::ZERO8)
  .value("CR0EQ", LIEF::assembly::powerpc::REG::CR0EQ)
  .value("CR1EQ", LIEF::assembly::powerpc::REG::CR1EQ)
  .value("CR2EQ", LIEF::assembly::powerpc::REG::CR2EQ)
  .value("CR3EQ", LIEF::assembly::powerpc::REG::CR3EQ)
  .value("CR4EQ", LIEF::assembly::powerpc::REG::CR4EQ)
  .value("CR5EQ", LIEF::assembly::powerpc::REG::CR5EQ)
  .value("CR6EQ", LIEF::assembly::powerpc::REG::CR6EQ)
  .value("CR7EQ", LIEF::assembly::powerpc::REG::CR7EQ)
  .value("CR0GT", LIEF::assembly::powerpc::REG::CR0GT)
  .value("CR1GT", LIEF::assembly::powerpc::REG::CR1GT)
  .value("CR2GT", LIEF::assembly::powerpc::REG::CR2GT)
  .value("CR3GT", LIEF::assembly::powerpc::REG::CR3GT)
  .value("CR4GT", LIEF::assembly::powerpc::REG::CR4GT)
  .value("CR5GT", LIEF::assembly::powerpc::REG::CR5GT)
  .value("CR6GT", LIEF::assembly::powerpc::REG::CR6GT)
  .value("CR7GT", LIEF::assembly::powerpc::REG::CR7GT)
  .value("CR0LT", LIEF::assembly::powerpc::REG::CR0LT)
  .value("CR1LT", LIEF::assembly::powerpc::REG::CR1LT)
  .value("CR2LT", LIEF::assembly::powerpc::REG::CR2LT)
  .value("CR3LT", LIEF::assembly::powerpc::REG::CR3LT)
  .value("CR4LT", LIEF::assembly::powerpc::REG::CR4LT)
  .value("CR5LT", LIEF::assembly::powerpc::REG::CR5LT)
  .value("CR6LT", LIEF::assembly::powerpc::REG::CR6LT)
  .value("CR7LT", LIEF::assembly::powerpc::REG::CR7LT)
  .value("CR0UN", LIEF::assembly::powerpc::REG::CR0UN)
  .value("CR1UN", LIEF::assembly::powerpc::REG::CR1UN)
  .value("CR2UN", LIEF::assembly::powerpc::REG::CR2UN)
  .value("CR3UN", LIEF::assembly::powerpc::REG::CR3UN)
  .value("CR4UN", LIEF::assembly::powerpc::REG::CR4UN)
  .value("CR5UN", LIEF::assembly::powerpc::REG::CR5UN)
  .value("CR6UN", LIEF::assembly::powerpc::REG::CR6UN)
  .value("CR7UN", LIEF::assembly::powerpc::REG::CR7UN)
  .value("G8p0", LIEF::assembly::powerpc::REG::G8p0)
  .value("G8p1", LIEF::assembly::powerpc::REG::G8p1)
  .value("G8p2", LIEF::assembly::powerpc::REG::G8p2)
  .value("G8p3", LIEF::assembly::powerpc::REG::G8p3);
  reg.value("G8p4", LIEF::assembly::powerpc::REG::G8p4)
  .value("G8p5", LIEF::assembly::powerpc::REG::G8p5)
  .value("G8p6", LIEF::assembly::powerpc::REG::G8p6)
  .value("G8p7", LIEF::assembly::powerpc::REG::G8p7)
  .value("G8p8", LIEF::assembly::powerpc::REG::G8p8)
  .value("G8p9", LIEF::assembly::powerpc::REG::G8p9)
  .value("G8p10", LIEF::assembly::powerpc::REG::G8p10)
  .value("G8p11", LIEF::assembly::powerpc::REG::G8p11)
  .value("G8p12", LIEF::assembly::powerpc::REG::G8p12)
  .value("G8p13", LIEF::assembly::powerpc::REG::G8p13)
  .value("G8p14", LIEF::assembly::powerpc::REG::G8p14)
  .value("G8p15", LIEF::assembly::powerpc::REG::G8p15)
  .value("NUM_TARGET_REGS", LIEF::assembly::powerpc::REG::NUM_TARGET_REGS)
  ;
}
}
