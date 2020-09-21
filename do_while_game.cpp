#include "iostream"
#include<string>       //add head file <string>
using namespace std;


int main()
{
	int number=100, a, b, c;
	do {
		a = number / 100;
		b = (number % 100) / 10;
		c = (number % 10);
		if (a ^ 3 + b ^ 3 + c ^ 3 == number)
		{
			cout << number << endl;
			
		}
		number++;
	} 
	while (number < 1000);
	
	system("pause");
	return 0;
}