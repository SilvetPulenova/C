#include<stdio.h>
#include"HW_25.h"


int main()
{
	binaryTree * my_tree = create_tree();
	add_node(my_tree, 5);
	add_node(my_tree, 3);
	add_node(my_tree, 4);
	add_node(my_tree, 7);

	remove_node(my_tree, 4);
	printInorder(my_tree->root);

	treeNode* result = search_node(my_tree->root, 7);
	if (result != NULL) 
	{
		printf("Node found: %d", result->value);
	}
	else 
	{
		printf("Node not found");
	}
	
	strcpy(cities[0].name, "New York");
	strcpy(cities[1].name, "San Francisco");
	strcpy(cities[2].name, "London");
	//int num_cities = 3;

	int c1 = findCityIndex("New York");
	int c2 = findCityIndex("San Francisco");
	int c3 = findCityIndex("London");

	addEdge(c1, c2, 10);
	addEdge(c2, c3, 20);
	addEdge(c3, c1, 5);

	printf("Edges:\n");
	Edge* edge = cities[c1].head;
	while (edge != NULL)
	{
		printf("(%s, %s, %d)\n", cities[edge->start].name, cities[edge->end].name, edge->weight);
		edge = edge->next;
	}

	addCity("New York");
	addCity("Los Angeles");
	addCity("Chicago");

	printf("Cities: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", cities[i].name);
	}

	removeCity("Los Angeles");

	printf("\nCities after removing Los Angeles: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", cities[i].name);
	}





	return 0;
}