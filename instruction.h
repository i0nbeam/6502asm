#ifndef INSTRUCTION_H
#define INSTRUCTION_H

struct Instruction
{
    const char* symbol;
    int opcode;
    int numOperands;

};


///////////////
///// LDA /////
///////////////

Instruction lda_imm = {"LDA", 0xA9, 1};
Instruction lda_zp = {"LDA", 0xA5, 1};
Instruction lda_zpx = {"LDA", 0xB5, 1};
Instruction lda_abs = {"LDA", 0xAD, 2};
Instruction lda_absx = {"LDA", 0xBD, 2};
Instruction lda_absy = {"LDA", 0xB9, 2};
Instruction lda_indx = {"LDA", 0xA1, 1};
Instruction lda_indy = {"LDA", 0xB1, 1};

#endif // INSTRUCTION_H