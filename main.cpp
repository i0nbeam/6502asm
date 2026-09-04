#include <iostream>
#include <string>


struct Instruction
{
    const char* symbol;
    int opcode;
    int numOperands;

};

Instruction lda_imm = {"LDA", 0xA9, 1};


int main(int argc, char **argv)
{
    std::printf("LDA symbol: %s\n", lda_imm.symbol);
    std::printf("LDA opcode: %x\n", lda_imm.opcode);
    std::printf("LDA numOperands: %d\n", lda_imm.numOperands);
    return 0;
}
