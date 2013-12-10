/*
 * chapter1.h
 *
 *  Created on: Dec 10, 2013
 *      Author: b576
 */

#ifndef CHAPTER1_H_
#define CHAPTER1_H_
#include <iostream>
#include <climits>
using namespace std;

class ChapterOne {
public:
	ChapterOne();
	virtual ~ChapterOne();
	void func(int h, int m);
	void calculateTime(long long secs);
	void calculatePopulationPercentage(long long world, long long us);
	void show();

//variables
private:
	static const int HourOfDay = 24;
	static const int MinutesOfHour = 60;
	static const int SecondsOfMin = 60;
	static const int DaysOfYear = 365;
	static const float Percentage = 100.0f;
};
#endif /* CHAPTER1_H_ */
