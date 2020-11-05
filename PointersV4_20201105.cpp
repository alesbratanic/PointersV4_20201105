// PointersV4_20201105.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    int a[5] = { 2,4,6,8,10 };
    int* p = a;
    int i = 0;
    int sizeArray = sizeof(a)/sizeof(a[0]);
    printf("Size of a is: %d\n",sizeArray);
    printf("Value of a is %d\n", *a);
    printf("Value of a is %d\n", a[1]);
    for (i = 0; i < sizeArray;i++) {
        printf("%d\n",*p);
        p++;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
