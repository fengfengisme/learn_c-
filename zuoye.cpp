#include <iostream>
using namespace std;

//写一个递归函数求出第50个斐波那契数

long int fun(int x)
{
	if(1 == x || 2 == x){
		return 1;
	}
	long int f = fun(x-1) + fun(x-2);
	return f;
}

int main(void)
{
	long int a = fun(50);
	cout << a << endl;
	
	return 0;
}
