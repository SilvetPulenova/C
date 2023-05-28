#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"hw_19.h"




void hw_19_01(void)
{
	char buff[80];
	fgets(buff, 10, stdin);
	fputs(buff, stdout);
}
void hw_19_02_00(void)
{
	char buffer[80 + 1];
	int i;
	int ch;

	printf("Please enter string\n");

	for (i = 0; (i < 80) && ((ch = getc(stdin)) != EOF) && (ch != '\n'); ++i)
	{
		buffer[i] = ch;
	}
	buffer[i] = '\0'; 

	i = 0;
	while (buffer[i] != '\0')
	{
		putc(buffer[i], stdout);
		i++;
	}
}
void hw_19_02_01(void)
{
	char buff[100];

	fgets(buff, 100, stdin);

	fputs(buff, stdout);
}
void hw_19_03(void)
{
	char buffer[80 + 1];

	printf("Please enter string\n");
	fscanf(stdin, "%s", buffer);

	fprintf(stdout, "%s", buffer);
}
void hw_19_04(void)
{
	char ch;
	FILE* fd1, * fd2, * fd3;
	int numPairs = 0;

	long count = 0;

	if ((fd1 = fopen("TextFile1.txt", "r")) == NULL)
	{
		printf("cannot open file 1\n");
		exit(-1);
	}
	fseek(fd1, 0L, SEEK_SET);

	if ((fd3 = fopen("TextFile3.txt", "r+")) == NULL)
	{
		printf("cannot open file 3\n");
		exit(-1);
	}
	fseek(fd3, 0L, SEEK_SET);

	/*printf("Please enter the number of name pairs to generate: ");
	scanf(" %d", &numPairs);
	printf("To write of the begining of the file enter 0, to write to the end of the file enter 1 :");*/


	ch = getc(fd1);
	for (count = 1L; ch !='\n'; count++)
	{
		fseek(fd1, +count, SEEK_SET);
		fwrite(&ch, sizeof(ch), 1, fd3);
		ch = getc(fd1);
	}
	putc(' ', fd3);

	if ((fd2 = fopen("TextFile2.txt", "r")) == NULL)
	{
		printf("cannot open file 2\n");
		exit(-1);
	}

	ch = getc(fd2);
	for (count = 1L; ch != '\n'; count++)
	{
		fseek(fd2, +count, SEEK_SET);
		fwrite(&ch, sizeof(ch), 1, fd3);
		ch = getc(fd2);
	}
	putc('\n', fd3);
	
	//Принтира резултатния файл
	fseek(fd3, 0L, SEEK_SET);
	ch = getc(fd3);
	for (count = 1L;ch!=EOF; count++)
	{
		putchar(ch);
		fseek(fd1, +count, SEEK_SET);
		ch = getc(fd3);
	}

	fclose(fd1);
	fclose(fd2);
	fclose(fd3); 
}

void hw_19_06(void)
{
	UserData ud = {
		.firsName = "Silvet\0",
		.middleName = "Fazli\0",
		.lastName = "Pulenova\0",
		.PIN = 9910210092LL
	};
	FILE* fd;

	if ((fd = fopen("UserData.txt", "r")) == NULL)
	{
		printf("cannot open file 1\n");
		exit(-1);
	}
	char input[50];
    readUserDataFromFile(fd, &input);
	//printUserData(readUserDataFromFile(fd, &input));
	//printUserData(&input);
	//writeUserDataInFile(fd,&ud);
	
		printf("%s", input);
	
	fclose(fd);
}

void readUserDataFromFile(FILE* fd, UserData* input)
{
	//fseek(fd, 0L, SEEK_SET);
	fread(&input, sizeof(UserData), 1, fd);
	//fread((char*)(&input), sizeof(UserData), 1, fd);
}
void writeUserDataInFile(FILE* fd, UserData* ud)
{
	fwrite(&ud, sizeof(UserData), 1, fd);
}

void printUserData(UserData* ud)
{
	printf("%s\n", ud->firsName);
	printf("%s\n", ud->middleName);
	printf("%s\n", ud->lastName);
	printf("%d\n", ud->PIN);
}