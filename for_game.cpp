#include "iostream"
#include<string>       //add head file <string>
using namespace std;

int main()
{
	for (int i = 1;i < 10;i++)
	{
		for (int j = 1;j <= i; j++)
		{    
			int c = j*i;
			cout << j<<" * "<<i<<" = "<< c << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}