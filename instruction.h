#ifndef INSTRUCTION_H
#define INSTRUCTION_H

typedef unsigned int uint;


enum AddressMode
{
    ACC,    // accumulator
    IMM,    // immediate
    ZP,     // zero page
    ZPX,    // zero page, X
    ZPY,    // zero page, Y
    ABS,    // absolute
    ABSX,   // absolute, X
    ABSY,   // absolute, Y
    INDX,   // indirect, X
    INDY,   // indirect, Y
    REL,    // relative
    IMP,    // implied
    IND     // indirect, for JMP
};



struct Instruction
{
    const char* symbol;
    uint opcode;
    uint num_operands;
    AddressMode address_mode;

};




Instruction adc_imm = {"ADC", 0x69, 1, IMM};
Instruction adc_zp = {"ADC", 0x65, 1, ZP};
Instruction adc_zpx = {"ADC", 0x75, 1, ZPX};
Instruction adc_abs = {"ADC", 0x6D, 2, ABS};
Instruction adc_absx = {"ADC", 0x7D, 2, ABSX};
Instruction adc_absy = {"ADC", 0x79, 2, ABSY};
Instruction adc_indx = {"ADC", 0x61, 1, INDX};
Instruction adc_indy = {"ADC", 0x71, 1, INDY};



Instruction and_imm = {"AND", 0x29, 1, IMM};
Instruction and_zp = {"AND", 0x25, 1, ZP};
Instruction and_zpx = {"AND", 0x35, 1, ZPX};
Instruction and_abs = {"AND", 0x2D, 2, ABS};
Instruction and_absx = {"AND", 0x3D, 2, ABSX};
Instruction and_absy = {"AND", 0x39, 2, ABSY};
Instruction and_indx = {"AND", 0x21, 1, INDX};
Instruction and_indy = {"AND", 0x31, 1, INDY};



Instruction asl_acc = {"ASL", 0x0A, 0, ACC};
Instruction asl_zp = {"ASL", 0x06, 1, ZP};
Instruction asl_zpx = {"ASL", 0x16, 1, ZPX};
Instruction asl_abs = {"ASL", 0x0E, 2, ABS};
Instruction asl_absx = {"ASL", 0x1E, 2, ABSX};




Instruction bcc_rel = {"BCC", 0x90, 1, REL};
Instruction bcs_rel = {"BCS", 0xB0, 1, REL};
Instruction beq_rel = {"BEQ", 0xF0, 1, REL};
Instruction bit_zp = {"BIT", 0x24, 1, ZP};
Instruction bit_abs = {"BIT", 0x2C, 2, ABS};
Instruction bmi_rel = {"BMI", 0x30, 1, REL};
Instruction bne_rel = {"BNE", 0xD0, 1, REL};
Instruction bpl_rel = {"BPL", 0x10, 1, REL};
Instruction brk_imp = {"BRK", 0x00, 0, IMP};
Instruction bvc_rel = {"BVC", 0x50, 1, REL};
Instruction bvs_rel = {"BVS", 0x70, 1, REL};
Instruction clc_imp = {"CLC", 0x18, 0, IMP};
Instruction cld_imp = {"CLD", 0xD8, 0, IMP};
Instruction cli_imp = {"CLI", 0x58, 0, IMP};
Instruction clv_imp = {"CLV", 0xB8, 0, IMP};


Instruction cmp_imm = {"CMP", 0xC9, 1, IMM};
Instruction cmp_zp = {"CMP", 0xC5, 1, ZP};
Instruction cmp_zpx = {"CMP", 0xD5, 1, ZPX};
Instruction cmp_abs = {"CMP", 0xCD, 2, ABS};
Instruction cmp_absx = {"CMP", 0xDD, 2, ABSX};
Instruction cmp_absy = {"CMP", 0xD9, 2, ABSY};
Instruction cmp_indx = {"CMP", 0xC1, 1, INDX};
Instruction cmp_indy = {"CMP", 0xD1, 1, INDY};


Instruction cpx_imm = {"CPX", 0xE0, 1, IMM};
Instruction cpx_zp = {"CPX", 0xE4, 1, ZP};
Instruction cpx_abs = {"CPX", 0xEC, 2, ABS};

Instruction cpy_imm = {"CPY", 0xC0, 1, IMM};
Instruction cpy_zp = {"CPY", 0xC4, 1, ZP};
Instruction cpy_abs = {"CPY", 0xCC, 2, ABS};

Instruction dec_zp = {"DEC", 0xC6, 1, ZP};
Instruction dec_zpx = {"DEC", 0xD6, 1, ZPX};
Instruction dec_abs = {"DEC", 0xCE, 2, ABS};
Instruction dec_absx = {"DEC", 0xDE, 2, ABSX};


Instruction dex_imp = {"DEX", 0xCA, 0, IMP};
Instruction dey_imp = {"DEY", 0x88, 0, IMP};


Instruction eor_imm = {"EOR", 0x49, 1, IMM};
Instruction eor_zp = {"EOR", 0x45, 1, ZP};
Instruction eor_zpx = {"EOR", 0x55, 1, ZPX};
Instruction eor_abs = {"EOR", 0x4D, 2, ABS};
Instruction eor_absx = {"EOR", 0x5D, 2, ABSX};
Instruction eor_absy = {"EOR", 0x59, 2, ABSY};
Instruction eor_indx = {"EOR", 0x41, 1, INDX};
Instruction eor_indy = {"EOR", 0x51, 1, INDY};


Instruction inc_zp = {"INC", 0xE6, 1, ZP};
Instruction inc_zpx = {"INC", 0xF6, 1, ZPX};
Instruction inc_abs = {"INC", 0xEE, 2, ABS};
Instruction inc_absx = {"INC", 0xFE, 2, ABSX};

Instruction inx_imp = {"INX", 0xE8, 0, IMP};
Instruction iny_imp = {"INY", 0xC8, 0, IMP};


Instruction jmp_abs = {"JMP", 0x4C, 2, ABS};
Instruction jmp_ind = {"JMP", 0x6C, 2, IND};

Instruction jsr_abs = {"JSR", 0x20, 2, ABS};


Instruction lda_imm = {"LDA", 0xA9, 1, IMM};
Instruction lda_zp = {"LDA", 0xA5, 1, ZP};
Instruction lda_zpx = {"LDA", 0xB5, 1, ZPX};
Instruction lda_abs = {"LDA", 0xAD, 2, ABS};
Instruction lda_absx = {"LDA", 0xBD, 2, ABSX};
Instruction lda_absy = {"LDA", 0xB9, 2, ABSY};
Instruction lda_indx = {"LDA", 0xA1, 1, INDX};
Instruction lda_indy = {"LDA", 0xB1, 1, INDY};


Instruction ldx_imm = {"LDX", 0xA2, 1, IMM};
Instruction ldx_zp = {"LDX", 0xA6, 1, ZP};
Instruction ldx_zpy = {"LDX", 0xB6, 1, ZPY};
Instruction ldx_abs = {"LDX", 0xAE, 2, ABS};
Instruction ldx_absy = {"LDX", 0xBE, 2, ABSY};

Instruction ldy_imm = {"LDY", 0xA0, 1, IMM};
Instruction ldy_zp = {"LDY", 0xA4, 1, ZP};
Instruction ldy_zpx = {"LDY", 0xB4, 1, ZPX};
Instruction ldy_abs = {"LDY", 0xAC, 2, ABS};
Instruction ldy_absx = {"LDY", 0xBC, 2, ABSX};


Instruction lsr_acc = {"LSR", 0x4A, 0, ACC};
Instruction lsr_zp = {"LSR", 0x46, 1, ZP};
Instruction lsr_zpx = {"LSR", 0x56, 1, ZPX};
Instruction lsr_abs = {"LSR", 0x4E, 2, ABS};
Instruction lsr_absx = {"LSR", 0x5E, 2, ABSX};


Instruction nop_imp = {"NOP", 0xEA, 0, IMP};


Instruction ora_imm = {"ORA", 0x09, 1, IMM};
Instruction ora_zp = {"ORA", 0x05, 1, ZP};
Instruction ora_zpx = {"ORA", 0x15, 1, ZPX};
Instruction ora_abs = {"ORA", 0x0D, 2, ABS};
Instruction ora_absx = {"ORA", 0x1D, 2, ABSX};
Instruction ora_absy = {"ORA", 0x19, 2, ABSY};
Instruction ora_indx = {"ORA", 0x01, 1, INDX};
Instruction ora_indy = {"ORA", 0x11, 1, INDY};


Instruction pha_imp = {"PHA", 0x48, 0, IMP};
Instruction php_imp = {"PHP", 0x08, 0, IMP};
Instruction pla_imp = {"PLA", 0x68, 0, IMP};
Instruction plp_imp = {"PLP", 0x28, 0, IMP};


Instruction rol_acc = {"ROL", 0x2A, 0, ACC};
Instruction rol_zp = {"ROL", 0x26, 1, ZP};
Instruction rol_zpx = {"ROL", 0x36, 1, ZPX};
Instruction rol_abs = {"ROL", 0x2E, 2, ABS};
Instruction rol_absx = {"ROL", 0x3E, 2, ABSX};


Instruction ror_acc = {"ROR", 0x6A, 0, ACC};
Instruction ror_zp = {"ROR", 0x66, 1, ZP};
Instruction ror_zpx = {"ROR", 0x76, 1, ZPX};
Instruction ror_abs = {"ROR", 0x6E, 2, ABS};
Instruction ror_absx = {"ROR", 0x7E, 2, ABSX};


Instruction rti_imp = {"RTI", 0x40, 0, IMP};
Instruction rts_imp = {"RTS", 0x60, 0, IMP};


Instruction sbc_imm = {"SBC", 0xE9, 1, IMM};
Instruction sbc_zp = {"SBC", 0xE5, 1, ZP};
Instruction sbc_zpx = {"SBC", 0xF5, 1, ZPX};
Instruction sbc_abs = {"SBC", 0xED, 2, ABS};
Instruction sbc_absx = {"SBC", 0xFD, 2, ABSX};
Instruction sbc_absy = {"SBC", 0xF9, 2, ABSY};
Instruction sbc_indx = {"SBC", 0xE1, 1, INDX};
Instruction sbc_indy = {"SBC", 0xF1, 1, INDY};


Instruction sec_imp = {"SEC", 0x38, 0, IMP};
Instruction sed_imp = {"SED", 0xF8, 0, IMP};
Instruction sei_imp = {"SEI", 0x78, 0, IMP};


Instruction sta_zp = {"STA", 0x85, 1, ZP};
Instruction sta_zpx = {"STA", 0x95, 1, ZPX};
Instruction sta_abs = {"STA", 0x8D, 2, ABS};
Instruction sta_absx = {"STA", 0x9D, 2, ABSX};
Instruction sta_absy = {"STA", 0x99, 2, ABSY};
Instruction sta_indx = {"STA", 0x81, 1, INDX};
Instruction sta_indy = {"STA", 0x91, 1, INDY};


Instruction stx_zp = {"STX", 0x86, 1, ZP};
Instruction stx_zpy = {"STX", 0x96, 1, ZPY};
Instruction stx_abs = {"STX", 0x8E, 2, ABS};


Instruction sty_zp = {"STY", 0x84, 1, ZP};
Instruction sty_zpx = {"STY", 0x94, 1, ZPX};
Instruction sty_abs = {"STY", 0x8C, 2, ABS};


Instruction tax_imp = {"TAX", 0xAA, 0, IMP};
Instruction tay_imp = {"TAY", 0xA8, 0, IMP};
Instruction tsx_imp = {"TSX", 0xBA, 0, IMP};
Instruction txa_imp = {"TXA", 0x8A, 0, IMP};
Instruction txs_imp = {"TXS", 0x9A, 0, IMP};
Instruction tya_imp = {"TYA", 0x98, 0, IMP};


#endif // INSTRUCTION_H