#include <iostream>
using namespace std;

struct Student{
	int id;
	string name;
	float score;
};

void swap(Student &x, Student &y)
{
	Student temp = x;
	x = y;
	y = temp;
}

void info(const Student &x, const Student &y)
{
	cout << x.id << ' ' << x.name << ' ' << x.score << endl;
	cout << y.id << ' ' << y.name << ' ' << y.score << endl;
}

int main(void)
{
	Student a = {1001, "zhangsan", 98};
	Student b = {1002, "wangwu", 96.5};
	
	swap(a, b);		//交换
	
	info(a, b);		//打印
	
	return 0;
}













