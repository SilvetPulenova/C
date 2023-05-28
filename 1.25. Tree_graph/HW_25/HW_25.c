#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
#include"HW_25.h"


treeNode* create_node(int value) 
{
    treeNode* new_node = (treeNode*)malloc(sizeof(treeNode));
    new_node->value = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

binaryTree* create_tree() 
{
    binaryTree* new_tree = (binaryTree*)malloc(sizeof(binaryTree));
    new_tree->root = NULL;
    return new_tree;
}
void add_node(binaryTree* tree, int value) 
{
    treeNode* new_node = create_node(value);
    if (tree->root == NULL) {
        tree->root = new_node;
    }
    else {
        treeNode* current = tree->root;
        while (1) {
            if (value < current->value) {
                if (current->left == NULL) {
                    current->left = new_node;
                    break;
                }
                else {
                    current = current->left;
                }
            }
            else {
                if (current->right == NULL) {
                    current->right = new_node;
                    break;
                }
                else {
                    current = current->right;
                }
            }
        }
    }
}
void remove_node(binaryTree* tree, int value)
{
    if (tree->root == NULL) 
    {
        return;
    }
    treeNode* current = tree->root;
    treeNode* parent = NULL;
    while (current != NULL) 
    {
        if (current->value == value) 
        {
            break;
        }
        parent = current;
        if (value < current->value) 
        {
            current = current->left;
        }
        else 
        {
            current = current->right;
        }
    }
    if (current == NULL) 
    {
        return;
    }
    if (current->left == NULL && current->right == NULL) 
    {
        if (parent == NULL)
        {
            tree->root = NULL;
        }
        else 
        {
            if (parent->left == current) 
            {
                parent->left = NULL;
            }
            else 
            {
                parent->right = NULL;
            }
        }
        free(current);
    }
    else if (current->left != NULL && current->right == NULL) 
    {
        if (parent == NULL) 
        {
            tree->root = current->left;
        }
        else 
        {
            if (parent->left == current) 
            {
                parent->left = current->left;
            }
            else 
            {
                parent->right = current->left;
            }
        }
        free(current);
    }
    else if (current->left == NULL && current->right != NULL) 
    {
        if (parent == NULL) 
        {
            tree->root = current->right;
        }
        else 
        {
            if (parent->left == current) 
            {
                parent->left = current->right;
            }
            else 
            {
                parent->right = current->right;
            }
        }
        free(current);
    }
    else 
    {
        treeNode* successor = current->right;
        treeNode* successor_parent = current;
        while (successor->left != NULL)
        {
            successor_parent = successor;
            successor = successor->left;
        }
        if (successor_parent != current) 
        {
            successor_parent->left = successor->right;
            successor->right = current->right;
        }
        if (parent == NULL)
        {
            tree->root = successor;
        }
        else
        {
            if (parent->left == current) 
            {
                parent->left = successor;
            }
            else 
            {
                parent->right = successor;
            }
        }
        successor->left = current->left;
        free(current);
    }
}

//task 2
void printInorder(treeNode* root) 
{
    if (root == NULL) return;
    printInorder(root->left);
    printf("%d ", root->value);
    printInorder(root->right);
}

//task 3
treeNode* search_node(treeNode* root, int value) 
{
    if (root == NULL) 
    {
        return NULL;
    }
    if (root->value == value) 
    {
        return root;
    }
    if (value < root->value) 
    {
        return search_node(root->left, value);
    }
    else 
    {
        return search_node(root->right, value);
    }
}

//task 4
int treeHeight(treeNode* root) 
{
    if (root == NULL) return 0;
    int left_height = treeHeight(root->left);
    int right_height = treeHeight(root->right);
    return 1 + max(left_height, right_height);
}

//task 5
int sum_of_elements(treeNode* node) 
{
    if (node == NULL) 
    {
        return 0;
    }
    return node->value + sum_of_elements(node->left) + sum_of_elements(node->right);
}

//task 6
void getMinMax(treeNode* node, int* min, int* max) 
{
    if (node == NULL) 
    {
        return;
    }
    if (*min > node->value) 
    {
        *min = node->value;
    }
    if (*max < node->value) 
    {
        *max = node->value;
    }
    getMinMax(node->left, min, max);
    getMinMax(node->right, min, max);
}
void getMinMaxValue(binaryTree* tree, int* min, int* max) 
{
    *min = INT_MAX;
    *max = INT_MIN;
    getMinMax(tree->root, min, max);
}

//task 7
bool isBSTUtil(struct treeNode* node, int prevValue) {
    
    if (node == NULL) return true;

    if (!isBSTUtil(node->left, prevValue)) return false;

    if (node->value <= prevValue) return false;

    prevValue = node->value;

    return isBSTUtil(node->right, prevValue);
}
bool isBST(struct treeNode* root) 
{
    return isBSTUtil(root, INT_MIN);
}

//task 8
int num_cities = 3;
int findCityIndex(char* name) 
{
    for (int i = 0; i < num_cities; i++) 
    {
        if (strcmp(cities[i].name, name) == 0) 
        {
            return i;
        }
    }
    return -1;
}
void addEdge(int start, int end, int weight) 
{
    Edge* newEdge = (Edge*)malloc(sizeof(Edge));
    newEdge->start = start;
    newEdge->end = end;
    newEdge->weight = weight;
    newEdge->next = cities[start].head;
    cities[start].head = newEdge;
}
void addCity(char* name) 
{
    strcpy(cities[num_cities].name, name);
    cities[num_cities].head = NULL;
    num_cities++;
}
void removeCity(char* name) 
{
    int index = findCityIndex(name);
    if (index == -1) 
    {
        printf("City not found!\n");
        return;
    }

    Edge* currEdge = cities[index].head;
    while (currEdge != NULL)
    {
        Edge* temp = currEdge->next;
        free(currEdge);
        currEdge = temp;
    }
    for (int i = index; i < num_cities - 1; i++) 
    {
        strcpy(cities[i].name, cities[i + 1].name);
        cities[i].head = cities[i + 1].head;
    }
    num_cities--;
}
void addRoute(char* startCity, char* endCity, int weight) 
{
    int start = findCityIndex(startCity);
    int end = findCityIndex(endCity);

    if (start == -1 || end == -1) 
    {
        printf("City not found!\n");
        return;
    }
    addEdge(start, end, weight);
}
void removeRoute(char* startCity, char* endCity)
{
    int start = findCityIndex(startCity);
    int end = findCityIndex(endCity);
    if (start == -1 || end == -1) 
    {
        printf("City not found!\n");
        return;
    }

    Edge* curr = cities[start].head;
    Edge* prev = NULL;
    while (curr != NULL && curr->end != end)
    {
        prev = curr;
        curr = curr->next;
    }
    if (curr == NULL)
    {
        printf("Route not found!\n");
        return;
    }
    if (prev == NULL)
    {
        cities[start].head = curr->next;
    }
    else
    {
        prev->next = curr->next;
    }
    free(curr);
    printf("Route removed successfully!\n");
}
//task 9
bool has_path(int start, int end)
{
    bool visited[MAX_CITIES];
    memset(visited, false, sizeof(visited));

    int queue[MAX_CITIES];
    int head = 0;
    int tail = 0;

    queue[tail++] = start;
    visited[start] = true;

    while (head < tail)
    {
        int curr = queue[head++];

        Edge* edge = cities[curr].head;
        while (edge != NULL)
        {
            int next = edge->end;
            if (!visited[next])
            {
                if (next == end)
                {
                    return true;
                }
                queue[tail++] = next;
                visited[next] = true;
            }
            edge = edge->next;
        }
    }
    return false;
}

//task 10
void dijkstra(int start, int end)
{
    int distances[MAX_CITIES];
    bool visited[MAX_CITIES];
    int previous[MAX_CITIES];

    for (int i = 0; i < num_cities; i++)
    {
        distances[i] = INT_MAX;
        visited[i] = false;
    }

    distances[start] = 0;

    for (int i = 0; i < num_cities; i++)
    {
        int min_distance = INT_MAX;
        int min_index = -1;

        for (int j = 0; j < num_cities; j++)
        {
            if (!visited[j] && distances[j] < min_distance)
            {
                min_distance = distances[j];
                min_index = j;
            }
        }

        if (min_index == -1)
        {
            break;
        }

        visited[min_index] = true;

        Edge* edge = cities[min_index].head;
        while (edge != NULL)
        {
            int end_city = edge->end;
            int new_distance = distances[min_index] + edge->weight;

            if (new_distance < distances[end_city])
            {
                distances[end_city] = new_distance;
                previous[end_city] = min_index;
            }

            edge = edge->next;
        }
    }
    if (distances[end] != INT_MAX)
    {
        printf("Shortest path from city %s to city %s:\n", cities[start].name, cities[end].name);
        int current = end;
        while (current != start)
        {
            printf("%s <- ", cities[current].name);
            current = previous[current];
        }
        printf("%s\n", cities[start].name);
        printf("Total distance: %d\n", distances[end]);
    }
    else
    {
        printf("There is no path from city %s to city %s.\n", cities[start].name, cities[end].name);
    }
}









