#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "register.h"

int PC = 0x400000;
int HI = 0;
int LO = 0; 

int* Z;

unsigned int REGISTER[R_SIZE]; //register
char REGISTER_NAME[R_SIZE][6] = { "$zero", "$at", "$v0", "$v1", "$a0", "$a1", "$a2", "$a3","$t0", "$t1", "$t2", "$t3", "$t4", "$t5", "$t6", "$t7","$s0", "$s1", "$s2", "$s3", "$s4", "$s5", "$s6", "$s7", "$t8", "$t9", "$k0", "$k1","$gp","$sp","$fp","$ra" };


unsigned int REG(unsigned int A, int V, int nRW)
{
	if (nRW == 0) return REGISTER[A];//read
	else
	{
		REGISTER[A] = V; //write
		return 0;
	}
}

void viewRegister()//r
{
	for (int i = 0; i < R_SIZE; i++) {
		char* n = REGISTER_NAME[i]; // $zero ~ $ra
		unsigned int ret = REG(i, 0, 0);
		printf("%5s : %x\n", n, ret);
	}
}

int setRegister(unsigned int A, int V) {
	REG(A, V, 1);
	return 0;
}

void registerTest() {
	viewRegister();
	setRegister(1, 0x41);
	viewRegister();
	setRegister(31, 0x41);
	viewRegister();
	setRegister(1, 0x1f);
	viewRegister();
	setRegister(31, 0xff);
	viewRegister();
}
