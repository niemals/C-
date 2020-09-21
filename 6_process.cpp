#include "iostream"
#include<string>       //add head file <string>
using namespace std;


int main()    // the 'main' is the entry of program , and every program must has a 'main' function
{
	int a = 1, b = 0;
	int i = 0;              //i是全局globle变量   ********** 因此下面运算会改变i的赋值
	if (a || b)              // a和b作或运算  单符号‘&’ ‘|’是二进制位运算                **if条件**
	{
		for (i = 0;i < 10;i++)   // 注意：先执行i赋值，判断i<10，输出i，然后再执行i++     **for循环**
		{
			if (i == 3) continue;   //跳出当前循环  break     跳出本次循环  continue
			cout << i << endl;
		}
	}
	cout << "************" << endl;

	while (i < 20)                                                              //   **while循环**
	{
		cout << i << endl;
		i++;
	}
	cout << "************" << endl;

	do {                                                                       //    **do-while循环**
		cout << i << endl;
		i++;
	} 
	while (i < 30);
	cout << "************" << endl;

	int j = i > 28 ? a : b;
	cout <<j<< endl;


	system("pause");
	return 0;

}