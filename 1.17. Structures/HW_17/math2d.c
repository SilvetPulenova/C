#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include"math2d.h"


int isPointInACircle(struct point2f point, struct point2f center, float radius)
{
	return (sqrt(pow((point.x - center.x), 2) + pow((point.y - center.y), 2))) < radius;
}
int isPointInARectangle(struct point2f point, struct point2f a, struct point2f b)
{
	return ((a.x <= point.x) && (point.x <= b.x) && ((a.y <= point.y) && (point.y <= b.y)));
}
int isTwoCirclesHaveContact(struct point2f center1, float radius1, struct point2f center2, float radius2)
{
	float distanseCenters = findTheDistance(center1, center2);
	return ((distanseCenters == radius1 + radius2) || (distanseCenters < radius1 + radius2));
}
float findTheDistance(struct point2f A, struct point2f B)
{
	return (float)sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
}
struct point2f createPoint(struct point2f* point)
{
	printf(" x = ");
	scanf(" %f", &point->x);
	printf(" y = ");
	scanf(" %f", &point->y);
	return *point;
}
struct triangle createTriangle(struct triangle* t)
{
	printf("Create triangle:\n");
	printf("Enter a\n");
	createPoint(&t->a);
	printf("Enter b\n");
	createPoint(&t->b);
	printf("Enter c\n");
	createPoint(&t->c);
	return *t;
}
struct rectangle createRectangle(struct rectangle* rec)
{
	printf("Create rectangle:\n");
	printf("Enter a\n");
	createPoint(&rec->a);
	printf("Enter b\n");
	createPoint(&rec->b);
	return *rec;
}
struct polygon createPoligon(struct polygon* P, int vertices)
{
	printf("Create poolygon with %d vertex:\n", vertices);
	for (int i = 0; i < vertices; i++)
	{
		printf("Enter coordinates of vertex:\n");
		createPoint(&P->v[i]);
	}
	return *P;
}
void printPoint(const struct point2f* point)
{
	printf("x = %f, y = %f\n", point->x, point->y);
}
void printTriangle(const struct triangle* t)
{
	printf("Coordinates of triangle:\n");
	printf("A: \n");
	printPoint(&t->a);
	printf("B: \n");
	printPoint(&t->b);
	printf("C: \n");
	printPoint(&t->c);
}
void printRectangle(const struct rectangle* rec)
{
	printf("Coordinates of rectangle:\n");
	printf("A: \n");
	printPoint(&rec->a);
	printf("B: \n");
	printPoint(&rec->b);
}
void printPolygon(const struct polygon* P, int countV)
{
	printf("Coordinates of polygon wiht %d vertex", countV);
	for (int i = 1; i <= countV; i++)
	{
		printf("V[%d]:\n", i);
		printPoint(&P->v[i]);
	}
}
