#ifndef HW_17_H
#define HW_17_H

struct Person
{
	char* name;
	int age;
};

struct PersonNode
{
	struct Person person;
	struct PersonNode* node;
};

void hw_17_02();
void hw_17_03();
void hw_17_03();
void hw_17_04();
void hw_17_05();
void hw_17_06_07();
void hw_17_08();
void hw_17_09();

void printPerson(struct Person*);
void printPersonNode(struct PersonNode*);







#endif