//Изведете размерите в байтове и битове на основните типове на вашата машина

#include<stdio.h>
#include<limits.h>
#include<stdbool.h>




int main()
{

	size_t charSizeBytes = sizeof(char);
	size_t charSizeBits = charSizeBytes * CHAR_BIT;
	printf("Char in bytes: %d\nChar in bits: %d\n", charSizeBytes, charSizeBits);

	size_t intSizeBytes = sizeof(int);
	size_t intSizeBits = intSizeBytes * CHAR_BIT;
	printf("Int in bytes: %d\nInt in bits: %d\n",intSizeBytes, intSizeBits);

	size_t shortSizeBytes = sizeof(int);
	size_t shortSizeBits = shortSizeBytes * CHAR_BIT;
	printf("Short in bytes: %d\nShort in bits: %d\n", shortSizeBytes, shortSizeBits);

	size_t longSizeBytes = sizeof(long);
	size_t longSizeBits = longSizeBytes * CHAR_BIT;
	printf("Long in bytes: %d\nLong in bits: %d\n", longSizeBytes, longSizeBits);

	size_t longLongSizeBytes = sizeof(long long);
	size_t longLongSizeBits = longLongSizeBytes * CHAR_BIT;
	printf("Long long in bytes: %d\nLong long in bits: %d\n", longLongSizeBytes, longLongSizeBits);

	size_t size_tSizeBytes = sizeof(size_t);
	size_t size_tSizeBits = size_tSizeBytes * CHAR_BIT;
	printf("Size_t in bytes: %d\nSize_t in bits: %d\n", size_tSizeBytes, size_tSizeBits);

	size_t floatSizeBytes = sizeof(float);
	size_t floatSizeBits = floatSizeBytes * CHAR_BIT;
	printf("Float in bytes: %d\nFloat in bits: %d\n", floatSizeBytes, floatSizeBits);

	size_t doubleSizeBytes = sizeof(double);
	size_t doubleSizeBits = doubleSizeBytes * CHAR_BIT;
	printf("Double in bytes: %d\nDouble in bits: %d\n", doubleSizeBytes, doubleSizeBits);

	size_t boolSizeBytes = sizeof(bool);
	size_t boolSizeBits = boolSizeBytes * CHAR_BIT;
	printf("Bool in bytes: %d\nBool in bits: %d\n", boolSizeBytes, boolSizeBits);





	return 0;
}
