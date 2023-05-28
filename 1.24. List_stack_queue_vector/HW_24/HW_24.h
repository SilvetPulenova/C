#ifndef HW_24_H
#define HW_24_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INIT_CAPACITY 4

typedef struct my_vector 
{
    char** data;
    size_t size;
    size_t capacity;
} my_vector;

void my_vector_init(my_vector* vec);
_Bool my_vector_empty(my_vector vec);
void my_vector_clear(my_vector* vec);
size_t my_vector_size(my_vector vec);
void my_vector_push_back(char* data, my_vector* vec);
void my_vector_insert(char* data, my_vector* vec, size_t pos);
void my_vector_pop_back(my_vector* vec);
void my_vector_erase(my_vector* vec, size_t pos);
size_t my_vector_capacity(my_vector vec);
void my_vector_reserve(my_vector* vec, size_t minCapacity);
void my_vector_resize(my_vector* vec, size_t elementsCount);
void my_vector_resize_init(my_vector* vec, size_t elementsCount, char* defaultValue);
char* my_vector_front(my_vector* vec);
char* my_vector_back(my_vector* vec);
char* my_vector_at(my_vector* vec, size_t index);
void my_vector_iterate(my_vector vec, void (*iterFunc)(char*));
void my_vector_sort(my_vector vec, int (*compareFunc)(const char*, const char*));


#endif
