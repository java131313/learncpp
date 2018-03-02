//============================================================================
// Name        : learncpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
using namespace std;
union TEST{
	short a;
	char b[sizeof(short)];
};

int main() {
	TEST test;
	test.a = 0x0102;
	if( test.b[0] == 0x01&&test.b[1] == 0x02){
		cout<< "big endian." << endl;
	}else if( test.b[0] == 0x02 && test.b[1] == 0x01 ){
		cout << "small endian." << endl;
	}else{
		cout << "unknown" << endl;
	}
	return 0;
}
