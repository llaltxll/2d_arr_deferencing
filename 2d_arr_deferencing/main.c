/*
    this program is ment to illustrate how deferencing works in a 2d array.
    based on example in this video : https://www.youtube.com/watch?v=zuegQmMdy8M - Pointers in C / C++ [Full Course] by FCC
*/
#include<stdio.h>


int main()
{
    int arr[2][3] = { {1,2,3},{4,5,6} };
    int(*p)[3] = arr;

    // take the first block's address to be able to print relative addresses.
    size_t startAddress = (size_t)arr;

    printf("int arr[2][3] = {{1,2,3},{4,5,6}};\n");
    printf(" --------------------------------------------------\n");
    printf("|block   |       block1       |       block2       |\n");
    printf("|arr     |[0][0]|[0][1]|[0][2]|[0][0]|[0][1]|[0][2]|\n");
    printf("|address |0     |4     |8     |12    |16    |20    |\n");
    printf("|value   |1     |2     |3     |4     |5     |6     |\n");
    printf(" -----------all arresser are relative--------------\n");

    printf("\n");
    printf("arr address of first block of elements = %u\n",
        (size_t)arr - startAddress);
    printf("*arr addres of first element in first block of elemnts = %u\n",
        (size_t)*arr - startAddress);
    printf("arr+1 address of second block of elements = %u\n",
        (size_t)(arr + 1) - startAddress);
    printf("*(arr+1) address of first element in second block of elements = %u\n",
        (size_t) * (arr + 1) - startAddress);
    printf("*arr+1 address of second element in first block of elements = %u\n",
        (size_t)(*arr + 1) - startAddress);
    printf("*(arr+1)+1 address of second element in second block of elements = %u\n",
        (size_t)(*(arr + 1) + 1) - startAddress);

    printf("----------------------------------------------------------------------\n");
    printf("                           the actual elements                        \n");
    printf("----------------------------------------------------------------------\n");
    printf("**arr the first element at the first block = %d\n", **arr);
    printf("*(*arr+1) the second element at the first block = %d\n", *(*arr + 1));
    printf("*(*(arr+1)) the first element at the second block = %d\n", *(*(arr + 1)));
    printf("*(*(arr+1)+1) the first element at the second block = %d\n", *(*(arr + 1) + 1));

    return 0;
}