
//#include "stdafx.h"
#include<iostream>
#include<ctime>
#include<iomanip>
#include<Windows.h>
using namespace std;

const int Size = 10;
void array3(int arr3[], int arr2[], int arr1[], int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
		arr1[i] = rand() % 10;
	for (int i = 0; i < size; i++)
		arr2[i] = rand() % 10;
	for (int i = 0; i < size * 2; i++)
	{
		arr3[i] = arr1[i];
		arr3[i + 1] = arr2[i];
	}
}
int main()
{
	int arr1[Size], int arr2[Size], int arr3[Size];
	for (int i = 0; i < Size; i++)
	{
		array3(arr3, arr2, arr1, Size);
	}

}

