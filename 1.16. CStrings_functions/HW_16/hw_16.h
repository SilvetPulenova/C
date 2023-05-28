#include<stdio.h>
#ifndef HW_16_H
#define HW_6_H

void hw_16_01();
void hw_16_02();
void hw_16_03();
void hw_16_04();
void hw_16_05();
void hw_16_06();
void hw_16_07();
void hw_16_08();
void hw_16_09();
void hw_16_10();


char* my_strcpy(char*, const char*);
char* my_strncpy(char*, const char*, size_t);
char* my_strcat(char*, const char*);
char* my_strncat(char*, const char*, size_t);
int my_strncmp(const char*, const char*, size_t);
char* my_strstr(char*, const char*);
int countStringInMatrix(const char*, const char*, int, int);
int countWordInMatrix(const char* st[], int, const char*, int, int);
char* extract_substr(const char*, size_t, size_t, char*);
int isSortedLex(const char*);
void print_str_tokens(const char*, const char*);


#endif HW_16_H
