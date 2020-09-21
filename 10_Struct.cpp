#include "iostream"
#include<string>       //add head file <string>
using namespace std;


struct Student          //C++结构体，类似与Python中的类。。定义方式
{
	string name;
	int score;
	int age;
} stu1;               //创建结构体变量，在定义结构体时顺便创建

void PrintStu1(Student stu);
void PrintStu2(Student *stu6);


int main()
{
	stu1.name = "Alice";
	stu1.age = 13;
	stu1.score = 90;
	int ace = stu1.score;       //**

	struct Student stu2 = { "Tom",80,12 };    //赋值顺序跟定义顺序一样
	
	cout << stu1.name << stu1.age << ace <<endl;
	cout << stu2.name << stu2.age << stu2.score << endl;
	cout << "***************************" << endl;

	Student arr[3] = {
		{"tom",90,12},
		{"alice",80,13},
		{"david",98,11}
	};
	cout << arr[2].name << arr[2].age << arr[2].score << endl;
	cout << "*************************" << endl;

	Student *p = &stu1;
	p->score=0;                                    //指针通过->可以访问结构体成员
	cout << stu1.score << endl;
	cout << "*************************" << endl;

	PrintStu1(stu1);
	PrintStu2(&stu2);

	cout << stu1.name << endl;
	cout << stu2.name << endl;

	system("pause");
	return 0;
}

void PrintStu1(Student stu)
{
	stu.name = "Lee";
	cout << stu.name << stu.age << stu.score << endl;
}
void PrintStu2(Student *stu6)
{
	stu6->name = "LEE";
	cout << stu6->name << endl;
}
