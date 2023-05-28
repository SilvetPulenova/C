#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<stddef.h>
#include"hw_23.h"

int sum(int* arr, int num)
{
	int count = 0;
	for (int i = 0; i < num; i++)
	{
		count += arr[i];
	}
	return count;
}
void print(char* buff, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%c", buff[i]);
	}
}

void hw_23_01()
{
	int n;
	printf("Enter a number of elements: ");
	scanf("%d", &n);

	int* arr = NULL;
	arr = (int*)malloc(n * sizeof(int));

	if (arr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		// Memory has been successfully allocated
		printf("Memory successfully allocated using malloc\n");

		printf("Enter a elements of array: ");
		for (int i = 0; i < n; i++)
		{
			//printf("arr[%d]=", i);
			scanf(" %d", &arr[i]);
		}
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			count += arr[i];
		}
		printf("The sum of all elements in array is: %d", count);
	    free(arr);
	}
}
void hw_23_02()
{
	int size = 2;
	char* buff = NULL;
	buff = (char*)malloc(size * sizeof(char));

	if (buff == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		// Memory has been successfully allocated
		printf("Memory successfully allocated using malloc\n");
		char c = 'o';
		int i = 0;
		int newSize = size;
		printf("Enter some text: ");
		while (c != EOF)
		{
			if (i == newSize)
			{
				newSize = i + 20;
				size = 50;
				buff = (char*)realloc(buff, size * sizeof(char));
			}
			c = getchar();
			buff[i] = c;
			i++;
		}
		print(buff, i);
		free(buff);

	}
}
//task 3
void my_list_init(my_list* ls)
{
	ls->head = NULL;
}
_Bool my_list_empty(my_list ls) 
{
	return ls.head == NULL;
}
void my_list_clear(my_list* ls)
{
	my_list_node* node = ls->head;
	while (node != NULL) {
		my_list_node* temp = node;
		node = node->next;
		free(temp->str);
		free(temp);
	}
	ls->head = NULL;
}
//task 4
void my_list_push_back(char* data, my_list* ls) 
{
	my_list_node* new_node = (my_list_node*)malloc(sizeof(my_list_node));
	new_node->str = data;
	new_node->next = NULL;

	if (ls->head == NULL) 
	{
		ls->head = new_node;
	}
	else 
	{
		my_list_node* node = ls->head;
		while (node->next != NULL) 
		{
			node = node->next;
		}
		node->next = new_node;
	}
}
void my_list_push_front(char* data, my_list* ls) 
{
	my_list_node* new_node = (my_list_node*)malloc(sizeof(my_list_node));
	new_node->str = data;
	new_node->next = ls->head;
	ls->head = new_node;
}
void my_list_insert(char* data, my_list* ls, size_t pos)
{
	my_list_node* new_node = (my_list_node*)malloc(sizeof(my_list_node));
	new_node->str = data;
	new_node->next = NULL;

	if (pos == 0)
	{
		new_node->next = ls->head;
		ls->head = new_node;
	}
	else
	{
		my_list_node* node = ls->head;
		size_t i;
		for (i = 0; i < pos - 1; i++)
		{
			node = node->next;
		}
		new_node->next = node->next;
		node->next = new_node;
	}
}
//task 5
void my_list_pop_back(my_list* ls) 
{
	if (ls->head == NULL) 
	{
		return;
	}

	my_list_node* current = ls->head;
	my_list_node* prev = NULL;
	while (current->next != NULL) 
	{
		prev = current;
		current = current->next;
	}
	free(current->str);
	free(current);
	if (prev != NULL) 
	{
		prev->next = NULL;
	}
	else 
	{
		ls->head = NULL;
	}
}
void my_list_pop_front(my_list* ls) 
{
	if (ls->head == NULL) 
	{
		return;
	}

	my_list_node* node = ls->head;
	ls->head = node->next;
	free(node->str);
	free(node);
}
void my_list_erase(my_list* ls, size_t pos) 
{
	if (ls->head == NULL || pos == 0) 
	{
		my_list_pop_front(ls);
		return;
	}

	my_list_node* current = ls->head;
	my_list_node* prev = NULL;
	for (size_t i = 0; i < pos && current->next != NULL; ++i) 
	{
		prev = current;
		current = current->next;
	}

	prev->next = current->next;
	free(current->str);
	free(current);
}
//task 6
void my_list_resize(my_list ls, size_t elementsCount) 
{
	my_list_node* curr = ls.head;
	size_t count = 0;

	while (curr != NULL) 
	{
		curr = curr->next;
		count++;
	}

	while (count > elementsCount) 
	{
		my_list_pop_back(&ls);
		count--;
	}

	while (count < elementsCount) 
	{
		my_list_node* newNode = (my_list_node*)malloc(sizeof(my_list_node));
		newNode->str = NULL;
		newNode->next = ls.head;
		ls.head = newNode;
		count++;
	}
}
void my_list_resize_init(my_list ls, size_t elementsCount, char* defaultValue) 
{
	my_list_node* curr = ls.head;
	size_t count = 0;

	while (curr != NULL) 
	{
		curr = curr->next;
		count++;
	}

	while (count > elementsCount) 
	{
		my_list_pop_back(&ls);
		count--;
	}

	while (count < elementsCount) 
	{
		my_list_node* newNode = (my_list_node*)malloc(sizeof(my_list_node));
		newNode->str = strdup(defaultValue);
		newNode->next = ls.head;
		ls.head = newNode;
		count++;
	}
}
//task 7
size_t my_list_erase_if(my_list ls, _Bool (*predicateFunc)(char*)) 
{
	size_t count = 0;
	my_list_node* curr = ls.head, * prev = NULL;
	while (curr != NULL) 
	{
		if (predicateFunc(curr->str)) 
		{
			count++;
			if (prev == NULL) 
			{
				ls.head = curr->next;
				free(curr->str);
				free(curr);
				curr = ls.head;
			}
			else 
			{
				prev->next = curr->next;
				free(curr->str);
				free(curr);
				curr = prev->next;
			}
		}
		else 
		{
			prev = curr;
			curr = curr->next;
		}
	}
	return count;
}
//task 8
void my_list_iterate(my_list ls, void (*iterFunc)(char*)) 
{
	my_list_node* current = ls.head;
	while (current != NULL) 
	{
		iterFunc(current->str);
		current = current->next;
	}
}




