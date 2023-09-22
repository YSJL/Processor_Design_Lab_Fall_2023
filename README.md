# Processor_Design_Lab_Fall_2023
Repository for processor design lab project collection

## 1. Pipeline Architecture
Implement complete ISA functionality for [Tiny RISC-V ISA](https://github.com/gt-cs3220-23fall/cs3220-labs/blob/master/lab1/tinyrv-isa.txt) excluding control instructions
### Verilog Files
- Located in ./lab1/cs3220-labs/lab1
- FE, DE, EX, MEM, WB as the following: fe_stage.v, de_stage.v, agex_stage.v, mem_stage.v, wb_stage.v
### Testing
- Testing is automated using script: ./run_tests.sh part3
