#include "iostream"
#include<string>       //add head file <string>
using namespace std;


int *func1(int arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		for (int j = 0;j < len - 1 - i;j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		
	}
	return arr;                            //定义指针函数返回值为指针，则返回数组首元素地址。
}


int main()
{
	int arr0[20] = { 1,3,5,6,4,8 };
	int *a = func1(arr0,20);
	for (int i = 0;i < 20;i++)
	{
		cout << *(a+i) << " ";
	}
	cout << "\n********************" << endl;
	cout << sizeof(a) << endl;
	cout << sizeof(arr0) << endl;        //这里arr0并不是首地址了
	cout << arr0 << endl;               //arr0是首地址了
	system("pause");
	return 0;
}