#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include"math2d.h"
//#include"math2d.c"
#include"hw_17.h"

void hw_17_02(void)
{
	struct point2f point = { .x = 2.3f, .y = 4.6f };
	struct point2f center = { .x = 7.3f, .y = 9.6f };
	float radius = 7.8f;
	printf("%d", isPointInACircle(point, center,radius));
}
void hw_17_03(void)
{
	struct point2f a = { .x = 1.1f, .y = 1.1f };
	//struct point2f b = { .x = 7.3f, .y = 1.1f };
	struct point2f d = { .x = 4.3f, .y = 9.6f };
	struct point2f point = { .x = 0.3f, .y = 4.6f };
	printf("%d", isPointInARectangle(point, a, d));
}
void hw_17_04(void)
{
	struct point2f center1 = { .x = 2.0f, .y = 2.0f };
	struct point2f center2 = { .x = 4.0f, .y = 4.0f };
	printf("%d",isTwoCirclesHaveContact(center1, 1, center2, 1));
}
void hw_17_05(void)
{
	struct point2f A = { .x = 1.1f, .y = 1.1f };
	struct point2f B = { .x = 7.3f, .y = 1.1f };
	printf("%f", findTheDistance(A, B));
}
void hw_17_06_07(void)
{
	struct point2f P0 = { .x = 0.0f, .y = 0.0f };
	struct point2f Point;
	Point = createPoint(&Point);
	printPoint(&Point);

	struct triangle t = { .a = P0, .b = P0, .c=P0 };
	t = createTriangle(&t);
	printTriangle(&t);

	struct rectangle rec = { .a = P0, .b = P0 };
	rec = createRectangle(&rec);
	printRectangle(&rec);


	printf("Enter number of vertices(3-8): ");
	int vertices;
	scanf(" %d", &vertices);
	struct polygon P = { .v[7] = P0 };
	//P = createPolygon(&P, vertices);
	printPolygon(&P,vertices);

}
void hw_17_08(void)
{

}
void hw_17_09(void)
{
	struct Person people[4] = {
		{.name = "Ivan", .age = 8 },
		{.name = "Monika", .age = 34},
		{.name = "Petya", .age = 7},
		{.name = "Ivo", .age = 19}
	};
	struct PersonNode p[4] =
	{
		{.person = NULL, .node = NULL},
		{.person = NULL, .node = NULL},
		{.person = NULL, .node = NULL},
		{.person = NULL, .node = NULL}
	};
	for (int i = 0; i < 4; i++)
	{
		p[i].person = people[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (i != 3)
		{
			p[i].node = &p[i + 1];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		printPersonNode(&p[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		if (p[i].person.age >= 18)
		{
			int j = i+1;
			if (p[j].person.age < 18)
			{
				while (p[j].person.age < 18 && j!=4)
				{
					j++;
				}
				if (p[j].person.age >= 18)
				{
					p[i].node = &p[j];
				}
			}
		}
	}
	printf("\n");
	for (int i = 0; i < 4; i++)
	{
		printPersonNode(&p[i]);
	}


}
void printPerson(struct Person* person)
{
	printf("%s, %d\n", person->name, person->age);
}
void printPersonNode(struct PersonNode* p)
{
	printPerson(&p->person);
	printPerson(&( *p->node));
}