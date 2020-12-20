#ifndef H_CEZAR
#define H_CEZAR

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void mutXOR(char* str, const char* kay);
char* immutXOR(const char* str , const char* kay);

void mutCaesar(char* str, const int kay);
char* immutCaesar(const char* str, const int kay);

#endif