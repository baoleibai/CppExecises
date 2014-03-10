/*
 * c8.cpp
 *
 *  Created on: Feb 11, 2014
 *      Author: b576
 */
#include "include/cEight.h"
#define squareMacro(x) x*x;

C8::C8() {

}
C8::~C8() {

}

inline double square(double x) {
	return x * x;
}

void C8::exercises() {
	int temp = 8;
	int & tempRef = temp;
	cout<<&tempRef <<"  "<<&temp<<endl;

	int tempX = 10;
	tempRef = tempX;
	cout<<tempRef <<" "<<temp<<"  "<<tempX<<endl;
	cout<<&tempRef <<"  "<<&temp<<endl;
	cout<<&tempRef <<"  "<<&tempX<<endl;
	double result = square(temp);
	cout << "inline resultis " << result << endl;
	result = squareMacro(temp);
	cout << "#deine resultis " << result << endl;
}
}

