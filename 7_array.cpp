#include "iostream"
#include<string>       //add head file <string>
using namespace std;

int main()
{
	int arr[] = { 1,2,4,6,5,8,7,2 };   /* define a array  1. arr[]={...}  2.arr[number]={...}  if number of element<number, the rest all set 0
									   3.arr[number]={}*/

	cout << arr[1] << endl;    // print some element in teh array
	cout << arr << endl;       //*********print the address in the memory, if you cout the array name
	cout << sizeof(arr[1]) << endl;
	cout << sizeof(arr) << endl;      // take up the space of teh array in memory
	
	for (int i = 0;i < 8;i++)                //冒泡排序，降序
	{
		for (int j=0;j<8-i-1;j++)
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				
			}
	}
	for (int k = 0;k < 8;k++)
	{
		cout << arr[k] << " ";
	}

	/***********二维数组*************/

	int mat[2][3] = { {1,4},{6,5} };      /*二维数组定义  1. mat[row][column]={{..},{..}..}
										                 2. mat[row][column]
														 3.mat[row][column]={.......}
														 4.mat[][column]={..........}    can leave out row
														 shape超过个数用0填补*/
	cout << mat[0][2] << endl;
	system("pause");
	return 0;
}