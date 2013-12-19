/*
 * chapter1.h
 *
 *  Created on: Dec 10, 2013
 *      Author: b576
 */

#ifndef CHAPTERONE_H_
#define CHAPTERONE_H_
#include <iostream>
#include <climits>
using namespace std;

class ChapterOne {
public:
	ChapterOne();
	virtual ~ChapterOne();
	void show();
private:
	void func(int h, int m);
	void calculateTime(long long secs);
	void calculatePopulationPercentage(long long world, long long us);


//variables
private:
	static const int HourOfDay = 24;
	static const int MinutesOfHour = 60;
	static const int SecondsOfMin = 60;
	static const int DaysOfYear = 365;
	static const float Percentage = 100.0f;
};
#endif /* CHAPTERONE_H_ */
