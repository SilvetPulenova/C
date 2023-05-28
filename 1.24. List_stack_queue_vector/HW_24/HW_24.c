#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"HW_24.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//task 1
void my_vector_init(my_vector* vec)
{
    vec->capacity = INIT_CAPACITY;
    vec->size = 0;
    vec->data = (char**)malloc(vec->capacity * sizeof(char*));
}
_Bool my_vector_empty(my_vector vec)
{
    return vec.size == 0;
}
void my_vector_clear(my_vector* vec)
{
    for (size_t i = 0; i < vec->size; i++)
    {
        free(vec->data[i]);
    }
    vec->size = 0;
}
size_t my_vector_size(my_vector vec)
{
    return vec.size;
}
//task 2
void my_vector_push_back(char* data, my_vector* vec)
{
    if (vec->size == vec->capacity)
    {
        vec->capacity = 2;
        vec->data = (char*)realloc(vec->data, vec->capacity * sizeof(char*));
    }
    size_t length = strlen(data) + 1;
    vec->data[vec->size] = (char*)malloc(length * sizeof(char));
    strcpy(vec->data[vec->size], data);
    vec->size++;
}
void my_vector_insert(char* data, my_vector* vec, size_t pos)
{
    if (pos > vec->size)
    {
        return;
    }
    if (vec->size == vec->capacity)
    {
        vec->capacity *= 2;
        vec->data = (char**)realloc(vec->data, vec->capacity * sizeof(char*));
    }
    char* newData = (char*)malloc((strlen(data) + 1) * sizeof(char));
    strcpy(newData, data);
    for (size_t i = vec->size; i > pos; i--)
    {
        vec->data[i] = vec->data[i - 1];
    }
    vec->data[pos] = newData;
    vec->size++;
}
//task 3
void my_vector_pop_back(my_vector* vec)
{
    if (vec->size == 0)
    {
        return;
    }
    free(vec->data[--vec->size]);
}
void my_vector_erase(my_vector* vec, size_t pos)
{
    if (pos >= vec->size)
    {
        return;
    }
    free(vec->data[pos]);
    for (size_t i = pos; i < vec->size - 1; i++)
    {
        vec->data[i] = vec->data[i + 1];
    }
    vec->size--;
}
//task 4
size_t my_vector_capacity(my_vector vec) 
{
    return vec.capacity;
}

void my_vector_reserve(my_vector* vec, size_t minCapacity) 
{
    if (vec->capacity < minCapacity) 
    {
        vec->capacity = minCapacity;
        vec->data = (char**)realloc(vec->data, vec->capacity * sizeof(char*));
    }
}
//task 5
void my_vector_resize(my_vector* vec, size_t elementsCount)
{
    if (vec->capacity < elementsCount) 
    {
        my_vector_reserve(vec, elementsCount);
    }
    vec->size = elementsCount;
    for (size_t i = 0; i < vec->size; i++) 
    {
        vec->data[i] = NULL;
    }
}
void my_vector_resize_init(my_vector* vec, size_t elementsCount, char* defaultValue)
{
    if (vec->capacity < elementsCount) 
    {
        my_vector_reserve(vec, elementsCount);
    }
    vec->size = elementsCount;
    for (size_t i = 0; i < vec->size; i++) 
    {
        vec->data[i] = defaultValue;
    }
}
//task 6
char* my_vector_front(my_vector* vec) 
{
    if (vec->size == 0) 
    {
        return NULL;
    }
    return vec->data[0];
}
char* my_vector_back(my_vector* vec) 
{
    if (vec->size == 0) 
    {
        return NULL;
    }
    return vec->data[vec->size - 1];
}
char* my_vector_at(my_vector* vec, size_t index) 
{
    if (index >= vec->size) 
    {
        return NULL;
    }
    return vec->data[index];
}
//task 7
void my_vector_iterate(my_vector vec, void (*iterFunc)(char*)) 
{
    for (int i = 0; i < vec.size; i++) 
    {
        iterFunc(vec.data[i]);
    }
}
//task 8
void my_vector_sort(my_vector vec, int (*compareFunc)(const char*, const char*)) 
{
    qsort(vec.data, vec.size, sizeof(char*), (int(*)(const void*, const void*)) compareFunc);
}


