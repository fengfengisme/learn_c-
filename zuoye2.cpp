#include <iostream>
#include <stdlib.h>
using namespace std;

//编写猜年龄代码，高了提示高了，低了提示低了

int main(int argc,char* argv[])
{
	int a = 0;
	int x = atoi(argv[1]);
	cout << x << endl;
	while(1){
		cout << "请输入猜测的年龄：";
		cin >> a;
		if(a > x){
			cout << "高了" << endl;
		}else if(a < x){
			cout << "低了" << endl;
		}else{
			cout << "恭喜猜对了^_^" << endl;
			break;
		}
	}
	
	return 0;
}











