// PointersV4_20201105.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
//except the first dimension all other dimensions will be enforced
void Func(int(*A)[2][2]) {  //Argument: 3D array of integers
    //We are only passing the reference of the array to the function
}
void Func2(int(*A)[3]) {   //Argument: 2D Array of integers, only the first dimension can be left empty, other diemension must be specified

}
//or
void Func21(int A[][3]) {

}
void Func3(int(*A)) {   //Argument: 1D array of integers

}
//or
void Func31(int A[]) {

}

int main()
{
    int c1[3][2][2] = { {{3,2},{4,1}},
        {{11,23},{14,12}},
        {{25,28},{14,19}} };
    int c2[2][3] = { {3,2,4},{4,1,6} }; //c3 return int(*)[3] (c3 return a pointer of 3 integers
    int c3[3] = { 12,5,7 }; //c3 return a pointers of integer
    Func(c1);
    Func2(c2);
    Func21(c2);
    Func3(c3);
    Func31(c3);
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
