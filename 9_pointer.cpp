#include "iostream"
#include<string>       //add head file <string>
using namespace std;

void sort2(int arr[], int len);
int main()
{
	int  a=10;             //指针变量类型确定后只能指向该类型变量
	int b = 8;
	int const  *p;          //the pointer variant p define as *p, p is a address and equal to &a 
	p = &a;
	//*p = 6;
	p = &b;               // const修饰常量，常量的指针，则指针指向可以修改，指针指向的值不能改    const修饰指针，指针常量，则指针指向不能改，指向指向的值可以修改
	cout << *p << endl;
	cout << a << endl;      // 变量可以通过指针修改 a=*p的值
	cout << p << endl;
	cout << &a << endl;
	cout << "********************" << endl;
//****************************************

	int arr[] = { 1,5,8,9,3 };
	int *p2 = arr;                  //数组名已经是地址了所以不需要用&
	for (int i = 0;i < 5;i++)       //利用指针遍历数组
	{
		cout << *p2 << " ";
		p2++;
	}
	cout << "\n********************&&&&&&&&&&&&&&&&&" << endl;
	
	for (p2=arr;p2 < arr+5;p2++)    //利用指针遍历数组
	{
		cout << *p2 << " ";
		
	}
	
	
	cout << "\n********************" << endl;

	int arr2[10] = { 4,3,6,9,1,2,10,8,7,5 };
	sort2(arr2,10);
	for (int i = 0;i < 10;i++)
	{
		cout << arr2[i] << " ";
	}
	system("pause");
	return 0;
}

void sort2(int arr[],int len)                    //定义排序函数，，void不返回值
{
	for (int i=0;i<len;i++)
	{
		for (int j = 0;j < len - 1 - i;j++)
		{
			if (arr[j]<arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	
	}
	
}