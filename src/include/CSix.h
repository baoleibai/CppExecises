/*
 * CSix.h
 *
 *  Created on: Dec 25, 2013
 *      Author: b576
 */

#ifndef CSIX_H_
#define CSIX_H_

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <vector>
#include <stack>
#include <fstream>
using namespace std;

class CSix {
public:
	static const int Max = 5;
private:
	void program1();
	void program2();
	void practise();
	void exes();
	void writeToFileIO();
	bool readFromFileIO();
public:
	CSix();
	virtual ~CSix();
	void show();
};



#endif /* CSIX_H_ */
