#include "iostream"
#include<string>       //add head file <string>
using namespace std;


int add(int a, int b)                 /*define a function     返回值类型  函数名（参数）
									                             {
																      函数体；
																	  return 值  }  C++不能直接返回数组，想返回数组用指针返回数组首地址*/ 
{
	int sum = a + b;
	return sum;
}

int main()
{
	int sum = add(1, 5);
	cout << sum << endl;
	system("pause");
	return 0;
}