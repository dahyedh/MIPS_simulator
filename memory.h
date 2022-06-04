#define PROG_START 0x00400000
#define PROG_END 0x00500000
#define DATA_START 0x10000000
#define DATA_END 0x10100000
#define STAK_START 0x7FF00000
#define STAK_END 0x80000000
#define M_SIZE 0x100000
unsigned char progMEM[M_SIZE], dataMEM[M_SIZE], stakMEM[0x100000];
// enum accessType { RD, WR};
// enum accessSize {BYTE, HALF, WORD};

unsigned int MEM(unsigned int A, int V, int nRW, int S);
void resetMem(void);
void viewMemory(unsigned int start, unsigned int end);
void setMemory(unsigned int A, int V);