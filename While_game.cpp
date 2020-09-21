#include "iostream"
#include<string>       //add head file <string>
using namespace std;

int main()
{
	int result = 25;
	int number;
	cout << "the anwser is from 0 to 100" << "\n" << "please put in a number:";
	cin >> number;
	while (number != result)
	{
		if (number > result) { cout << "ERROR, please put in a less number:"; }
		if (number < result) { cout << "ERROR, please put in a bigger number:"; }
		cin >> number;
		if (number == result) { cout << "congradulation!!" << endl;break; }
	}

	system("pause");
	return 0;
}