#ifndef HW_25_H
#define HW_25_H
#include<stdbool.h>

typedef struct treeNode 
{
    int value;
    struct treeNode *left;
    struct treeNode *right;
} treeNode;

typedef struct binaryTree 
{
    treeNode *root;
} binaryTree;

//task 1
treeNode* create_node(int value);
binaryTree* create_tree();
void add_node(binaryTree* tree, int value);
void remove_node(binaryTree* tree, int value);

//task 2
void printInorder(treeNode* root);

//task 3
treeNode* search_node(treeNode* root, int value);

//task 4
int treeHeight(treeNode* root);

//task 5
int sum_of_elements(treeNode* node);

//task 6
void getMinMax(treeNode* node, int* min, int* max);
void getMinMaxValue(binaryTree* tree, int* min, int* max);

//task 7
bool isBSTUtil(struct treeNode* node, int prevValue);
bool isBST(struct TreeNode* root);

//task 8
#define MAX_CITIES 100
#define MAX_NAME_LENGTH 100

typedef struct Edge 
{
    int start;
    int end;
    int weight;
    struct Edge* next;
} Edge;

typedef struct City 
{
    char name[MAX_NAME_LENGTH];
    Edge* head;
} City;

City cities[MAX_CITIES];

int findCityIndex(char* name);
void addEdge(int start, int end, int weight);
void addCity(char* name);
void removeCity(char* name);
void addRoute(char* startCity, char* endCity, int weight);
void removeRoute(char* startCity, char* endCity);

//task 9
bool has_path(int start, int end);

//task 10
void dijkstra(int start, int end);


#endif