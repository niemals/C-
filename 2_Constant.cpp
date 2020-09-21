#define pi 3.14    /*define 'const'  cannot be changed
                     1. #define name value 宏常量
					  2. const 修饰变量*/
#include<iostream>
using namespace  std;

int main()
{
	const int month = 30;   // 通过const修饰变量定义常量
	
	system("pause");
	return 0;
}
