// PointersV4_20201105.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	int b[2][3] = { 2,3,6,4,5,8 };
	int(*p)[3] = b;
	printf("The address of first element %p\n", p);//400
	printf("The value of first element: %d\n", b[0][0]);//2
	printf("The value of first element: %d\n", *(*p));//2
	printf("The value of second element: %d\n", *(*p+1));//3
	//(*p+1) is the address and *(*p+1) is the value at this address
	printf("The value of fourth element: %d\n", *(*(p + 1)));//4 b[1][0]
	printf("The value of the fifth element: %d\n", *(*(p + 1) + 1));//5 b[1][1]
	printf("Size of pointer: %d\n", sizeof(p));//4
	printf("The address of the second element %p\n", p + 1); //412
	printf("The value of second element %d\n", b[1][0]);//4
	printf("Validating the three sam eexpressions: b[i][j]=\n");
	printf("%d\n", b[1][1]); //5
	printf("%d\n", *(b[1]+1)); //5
	printf("%d\n", *(*(b+1)+1)); //5
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
