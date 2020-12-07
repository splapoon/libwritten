#ifndef WRITE_H_   /* Include guard */
#define WRITE_H_
#include <stdio.h>
//#include

int printred(int isBold, int isNewl);
int printgreen(int isBold, int isNewl);
int printyellow(int isBold, int isNewl);
int printblue(int isBold, int isNewl);
int printmagneta(int isBold, int isNewl);
int printcyan(int isBold, int isNewl);
int printreset(int isNewl);
void night(int delay);
void cbycprint(char *toWrite, int speed);
void opentxt(char *name, int shouldCBYC, int speed);
//void writetxt(char *name, char *data);
#endif
