#include<stdio.h>
#include"HW_24.h"


int main()
{

    my_vector vec;
    my_vector_init(&vec);

    my_vector_push_back("hii", &vec);
    my_vector_push_back("haw ", &vec);
    my_vector_insert("are you?", &vec, 1);

    for (size_t i = 0; i < vec.size; i++)
    {
        printf("%s\n", vec.data[i]);
    }

    for (size_t i = 0; i < vec.size; i++)
    {
        free(vec.data[i]);
    }
    free(vec.data);

    
	return 0;
}

