#include <iostream>
using namespace std;

void fun(const int (&a)[3][2], int (&b)[2][3])
{
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			b[j][i] = a[i][j];
		}
	}
}

void info(const int (&b)[2][3])
{
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout << "b[" << i << "][" << j << "]=" << b[i][j] << ' ' << '\t';
		}
		cout << endl;
	}
}

int main(void)
{
	int a[3][2] = {1,2,3,4,5,6};
	int b[2][3];
	
	fun(a, b);
	info(b);
	return 0;
}













