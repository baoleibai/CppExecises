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
#include <vector>
#include <stack>
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
	struct Fish {
		char kind[50];
		int weight;
		float length;
	};
	enum Response {No, Yes, Maybe};
	union unionId {
		int id_int;
		double id_double;
	} ui;
	enum Color {red, green, blue};
	//set values for enum.
	enum Bits {one = 1, two=2, four=4}; //set specific values
	enum Values {zero, null = 0, pos, positive = 1}; //set elements with same and continous value
	enum BigStep {firstStep, bigstep = 100, ThirdStep}; // ThirdStep = bigstep + 1;
	struct CandyBar {
		char brand[50];
		float weight;
		int calories;
	};

private:
	int intArray[4];
	int zeroArray[4];
public:
	ChapterFour();
	virtual ~ChapterFour();
	void show();
	void showExercises();
private:
	void showArray();
	void showStruct();
	void showUnion();
	void showEnum();
	void showPointers();
	void exeSeven();
	void exeSix();
	void exeTen();
};
#endif /* CHAPTERFOUR_H_ */
