#include <stdio.h>
//void loadProgram(const char* file);
int stepProgram() ;
union IR instructionFetch();
void goProgram();
void jumpProgram(unsigned int address);