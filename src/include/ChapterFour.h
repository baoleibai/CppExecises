/*
 * ChapterFour.h
 *
 *  Created on: Dec 10, 2013
 *      Author: b576
 */

#ifndef CHAPTERFOUR_H_
#define CHAPTERFOUR_H_
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class ChapterFour {
private:
	struct Person {
		char name[20];
		int height;
		int weight;
	};

	struct Food {
		string name;
		int weight;
	} orange, apple;

	struct Point {
		int x;
		int y;
	} point;
	struct Circle {
		Point point;
		int radius;
	};
	struct {
		string name;
		int size[4];
	} test;

	int status;

private:
	int intArray[4];
	int zeroArray[4];
public:
	ChapterFour();
	virtual ~ChapterFour();
	void show();
private:
	void showArray();
	void showStruct();
};
#endif /* CHAPTERFOUR_H_ */
