// PointersV4_20201105.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	int c1[3][2][2] = { 1,2,3,4,5,6,7,8,9,10,11,12 }; //starting address hypoteticaly 800
	int c2[3][2][2] = { {{2,3},{3,4}},
						{{5,6},{7,8}},
						{{9,10},{11,12}} };
	int(*p)[2][2] = c1;
	printf("The address of first element is %p\n", c1);	//800
	printf("The address of the first element in array is %p\n", *p);	//800
	printf("The value of the first element in array is %d\n", *(*p[0]));	//1
	printf("The value of the first element in the second array is %d\n", *(*p[1]));	//5
	printf("The addres of the first element in the second array is %p\n", *p[1]);	//816
	printf("The value of the first element in the third array is %d\n", *(*p[2]));	//9
	printf("The value of the second element in array is %d\n", *(p[0][0]+1));	//2,	+ is pointer arithmetic
	printf("The value of the third element in array is %d\n", *(*(p[0]+1)));	//3
	printf("The value of the fourth element in array is %d\n", *(*(p[0] + 1)+1));	//4
	printf("The value of the seventh element in array is %d\n", *(*(*(p+ 1) + 1)));	//7
	printf("The value of the eith element in array is %d\n", *(*(*(p + 1) + 1)+1));	//8
	//*(p+1) pointer to the second element in first array +1 pointer arithmetic to the second element in the second array
	//+1 pointer arithmetic to the second element in the third array
	//*p[0] is pointer to the integer and then we are executing only pointer arithmetic
	printf("The value of the first element in the first array is %d\n", *(*(*(p))));	//1
	printf("The value of the first element in the second array is %d\n", *(*(*(p+1))));	//5
	printf("The value of the first element in the second array is %d\n", *(*p[1]));	//5
	printf("The value of the second element in the second array is %d\n", *(*p[1]+1));	//6
	printf("The value of the first element in the third array is %d\n", *(*p[2]));	//9
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
