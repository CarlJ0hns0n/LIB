#ifndef H_STRG
#define H_STRG

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void mutabletoup(char* str);
char* immutabletoup(const char* str);

void mutabletolow(char* str);
char* immutabletolow(const char* str);

void mutableStrip(char* str);
char* immutableStrip(const char* str);

void mutabledelwhitespace(char* str);
char* immutabledelwhitespace(const char* str);

bool verifyNumber(const char* str);
bool verifyWord(const char* str);

void mutableFilter(char* str);
char* immutableFilter(const char* str);

#endif