#ifndef MATH2D_H
#define MATH2D_H

struct point2f
{
	float x;
	float y;
};

struct triangle
{
	struct point2f a;
	struct point2f b;
	struct point2f c;
};

struct rectangle
{
	struct point2f a;
	struct point2f b;
};

struct polygon
{
	struct point2f v[8];
};


int isPointInACircle(struct point2f, struct point2f, float);
int isPointInARectangle(struct point2f, struct point2f, struct point2f);
int isTwoCirclesHaveContact(struct point2f, float, struct point2f, float);
float findTheDistance(struct point2f, struct point2f);
struct point2f createPoint(struct point2f*);
struct triangle createTriangle(struct triangle*);
struct rectangle createRectangle(struct rectangle*);
struct polygon createPoligon(struct polygon*, int);
void printPoint(const struct point2f*);
void printTriangle(const struct triangle*);
void printRectangle(const struct rectangle*);
void printPolygon(const struct polygon*, int);



#endif