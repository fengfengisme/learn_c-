#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int a, b;
	cout << "请输入行数和列数\n";
	cin >> a >> b;
	
	cout << "请输入数据\n";
	int arr[a*b];
	for(int i=0; i<a*b; i++){
		cin >> arr[i];
	}
	
	cout << "输出如下\n";
	for(int m=1; m<=a; m++){
		for(int n=0; n<b; n++){
			cout << arr[(m*b-b)+n] << ' ';
		}
		cout << '\n';
	}
	
	
	return 0;
}










