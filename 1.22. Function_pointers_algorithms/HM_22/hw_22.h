#ifndef HW_22_H
#define HW_22_H

//task 1
typedef double func1();
typedef void func2(double var1, double var2);
typedef int tempFunc();
typedef tempFunc* func3(int var1);
typedef void func4(func1 var1, func2 var2, func3 var3);

//task 2
int cmp(const void* a, const void* b);
int reverseInt(const void* a, const void* b);
int cmpChar(const void* a, const void* b);
int cmpStr(const void* a, const void* b);
int reverseChar(const void* a, const void* b);
int cmpLong(const void* a, const void* b);
int reverseLong(const void* a, const void* b);
void hw_22_02();
void hw_22_03();





#endif