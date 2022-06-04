int addSubtract(int X, int Y, int C);
int logicOperation(int X, int Y, int C);
int shiftOperation(int V, int Y, int C);
int checkSetLess(int X, int Y);
int ALU(int X, int Y, int C, int* Z);
int add(int rd, int rs, int rt);
int addi(int rt, int rs, int imm);
int sub(int rd, int rs, int rt);
int and(int rd, int rs, int rt);
int or(int rd, int rs, int rt);
int xor(int rd, int rs, int rt);
int nor(int rd, int rs, int rt);
int slt(int rd, int rs, int rt);
int jal(int address);
int j(int address);
int bltz(int rs, int rt, int imm);
int beq(int rs, int rt, int imm);
int bne(int rs, int rt, int imm);
int slti(int rt, int rs, int imm);
int andi(int rt, int rs, int imm);
int ori(int rt, int rs, int imm);
int xori(int rt, int rs, int imm);
int lui(int rt, int imm);
int lw(int rt, int imm, int rs);
int sw(int rt, int imm, int rs);
int lb(int rt, int imm, int rs);
int sb(int rt, int imm,int  rs);
int lbu(int rt, int imm, int rs) ;
int sll(int rd, int rt, int sh);
int srl(int rd, int rt, int sh);
int sra(int rd, int rt, int sh);
int jr(int rs);
int syscall();
int mfhi(int rd);
int mflo(int rd);
int mul(int rs, int rt);