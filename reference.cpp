#include <iostream>
using namespace std;

void fun(int &a, int &b)
{
	int tep = a;
	a = b;
	b = tep;
}

int main(int argc, char** argv)
{
	int x = 100, y = 200;
	fun(x, y);
	cout << "x=" << x << " y=" << y << endl;
	/*
	int data = 1890;
	int &ref = data;	//给data创建一个新的名字ref
	//将变量data的地址给了引用ref内部的指针
	
	cout << "data=" << data << " ref=" << ref << endl;
	ref = ref-90;
	cout << "data=" << data << " ref=" << ref << endl;
	
	int num = 1000;
	ref = num;	//将num的值赋给ref和data;
	cout << "data=" << data << " ref=" << ref
		 << " num=" << num << endl;
	*/
	return 0;
}











