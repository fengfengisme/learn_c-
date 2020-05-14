#include <iostream>
#include <stdlib.h>
using namespace std;

/*
struct Stu{
	int id;
	string name;
	float score;
};

void fun(Stu* a)
{
	for(int i=0; i<3; i++){
		cout << "请输入第" << i+1 << "个学生数据\n";
		cin >> a[i].id >> a[i].name >> a[i].score;
	}
}

void info(Stu* a)
{
	for(int i=0; i<3; i++){
		cout << a[i].id << ' ' << a[i].name << ' ' << a[i].score << endl;
	}
}

int main(void)
{
	Stu* arr = new Stu[3];
	
	fun(arr);
	cout << "--------------\n";
	info(arr);
	delete []arr;
	
	return 0;
}

*/
struct Stu{
	int id;
	string name;
	float score;
};

void fun(Stu* a)
{
	for(int i=0; i<3; i++){
		cout << "请输入第" << i+1 << "个学生数据\n";
		cin >> a[i].id >> a[i].name >> a[i].score;
	}
}

void info(Stu* a)
{
	for(int i=0; i<3; i++){
		cout << a[i].id << ' ' << a[i].name << ' ' << a[i].score << endl;
	}
}

int main(void)
{
	Stu* arr = new Stu[3];
	
	fun(arr);
	cout << "--------------\n";
	info(arr);
	free(arr);
	
	return 0;
}











