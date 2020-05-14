#include <iostream>
using namespace std;

//输入任意个整数求和
int main(int argc,char* argv[])
{
	int num = 0;
	int sum = 0;
	while(1){
		cin >> num;
		if(num){
			sum += num;
		}else{
			break;
		}
	}
	cout << "sum=" << sum << endl;
	return 0;
}











