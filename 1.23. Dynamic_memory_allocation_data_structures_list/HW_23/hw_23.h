#ifndef HW_23_H
#define HW_23_h

int sum(int* arr, int num);
void hw_23_01();
void hw_23_02();

//task 3
typedef struct my_list_node 
{
    char* str;
    struct my_list_node* next;
} my_list_node;

typedef struct 
{
    my_list_node* head;
} my_list;

void my_list_init(my_list* ls);
_Bool my_list_empty(my_list ls);
void my_list_clear(my_list* ls);
//task 4
void my_list_push_back(char* data, my_list* ls);
void my_list_push_front(char* data, my_list* ls);
void my_list_insert(char* data, my_list* ls, size_t pos);
//task 5
void my_list_pop_back(my_list* ls);
void my_list_pop_front(my_list* ls);
void my_list_erase(my_list* ls, size_t pos);
//task 7
size_t my_list_erase_if(my_list ls, _Bool (*predicateFunc)(char*));
//task 8
void my_list_iterate(my_list ls, void (*iterFunc)(char*));






#endif 
