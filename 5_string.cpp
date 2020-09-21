#include "iostream"
#include<string>       //add head file <string>
using namespace std;


int main()    // the 'main' is the entry of program , and every program must has a 'main' function
{
	string str1 = "Ilove Python";    //string 字符串名=“字符串”
	char ch;
	
	cout << str1 << "put in a iterm:"<<endl;
	cin >> ch;             // put in a char by key board 
	cout << ch << "\\"<<endl;        // "\\" is \ where the first \ is just a escape character
	system("pause");
	return 0;

}