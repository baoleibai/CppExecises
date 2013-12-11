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
		union id {
			int id_int;
			char id_chars[20];
		} testid;
	} test;
	union unionId {
		int id_int;
		double id_double;
	} ui;
	enum Color {red, green, blue};
	enum Bits {one = 1, two=2, four=4};
	enum Values {zero, null = 0, pos, positive = 1};
	enum BigStep {firstStep, bigstep = 100, ThridStep};

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
	void showUnion();
	void showEnum();
};
#endif /* CHAPTERFOUR_H_ */
