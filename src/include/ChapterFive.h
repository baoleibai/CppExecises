/*
 * ChapterFive.h
 *
 *  Created on: Dec 20, 2013
 *      Author: b576
 */

#ifndef CHAPTERFIVE_H_
#define CHAPTERFIVE_H_

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <vector>
#include <stack>
using namespace std;

class ChapterFive {
public:
	struct car {
		string make;
		int year;
	};

public:
	ChapterFive();
	virtual ~ChapterFive();
	void showExe();
private:
	void E1();
	void E2();
	void E3();
	void E4();
	void E56();
	void E7();
	void E8();
};
#endif /* CHAPTERFIVE_H_ */
