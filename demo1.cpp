#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int a = 0;
	//0.0 默认为double类型， 0.0f 为float类型
	//3.14 --> double	3.14f --> float
	float b = 0.0f;
	char arr[32] = {'\0'};
	
	cin >> a >> b >> arr;
	
	cout << "a=" << a << " b=" << b
		 << " arr=" << arr << endl;
	
	return 0;
}










