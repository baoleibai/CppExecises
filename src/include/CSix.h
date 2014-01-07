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
#include <stdlib.h>

using namespace std;

class CSix {
public:
	static const int Max = 5;
	static const int STRSIZE = 50;
	struct Bop {
		char fullname[STRSIZE];
		char title[STRSIZE];
		char bopname[STRSIZE];
		int preference; //0=fullname, 1 = title, 2 = bopname
	};
	struct Contributors {
		char contributor[STRSIZE];
		double amount;
	};

private:
	void program1();
	void program2();
	void program3();
	void program4();
	void program5();
	void program6();
	void program8();
	void program9();
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
