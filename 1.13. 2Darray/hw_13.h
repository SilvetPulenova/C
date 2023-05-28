#ifndef HW_13_H
#define HW_13_H

#define ARR_ROWS 4
#define ARR_ROWS2 6
#define ARR_COLS 4
#define ARR_COLS2 5
#define ARR_COLS3 6


void hw_13_01();
void hw_13_02();
void hw_13_03();
void hw_13_04();
void hw_13_05();
void hw_13_06();
void hw_13_07();
void hw_13_08();
void hw_13_10();
void hw_13_11();
void hw_13_12();

void addInMatrixFloat(float*, int, int);
void printMatrixFloat(const float*, int, int);

void sumOfTwoMatrix(const float*, const float*, float*, int, int);
void isTheSameMatrix(const float*, const float*, int, int);
int isIdentityMatrix(const float*, int, int);
void swapRowsMatrix(float*, int, int, int, int);
void swapColsMatrix(float*, int, int, int, int);

void prodNumberMatrix(float*, int, int, float);
void prodVectorMatrix(float*, int, int, const float*);
void prodTwoMatrix(const float*, const float*, float*, int, int);
void countUniqueCols(const float*, int, int);
void printSumColsRows(const float*, int, int);
int findArrayInMatrix(const int*, int, int, const int*);
int findSubMatrix(const int*, int, int, const int*, int, int);



#endif HW_13_H