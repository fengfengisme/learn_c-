#include <iostream>
using namespace std;
/**/
int main(int argc, char** argv)
{
	string str = "hello";
	string str2 = str;
	string str3(str);
	
	cout << str << str2 << str3 << endl;
	
	string str4 = str + "hahaha";
	cout << str4 << endl;
	//使用+号时，必须包含一个字符串类型
	//string str5 = "hello" + "hahaha";		//错误,不能这样写
	
	return 0;
}

/*
int main(int argc, char** argv)
{
	string str[3] = "";
	for(int i=0; i<3; i++){
		cin >> str[i];
	}
	cout << endl;
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2-i; j++){
			if(str[j] < str[j+1]){
				string strx = str[j];
				str[j] = str[j+1];
				str[j+1] = strx;
			}
		}
	}
	
	for(int i=0; i<3; i++){
		cout << str[i] << endl;
	}
	
	return 0;
}
*/











