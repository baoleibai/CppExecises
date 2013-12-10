/*
 * Chapter1.cpp
 *
 *  Created on: Dec 10, 2013
 *      Author: b576
 */
#include "include/ChapterOne.h"

ChapterOne::ChapterOne() {

}

ChapterOne::~ChapterOne() {

}

void ChapterOne::func(int h, int m) {
	cout << "time is "<< h<<":"<<m<<endl;
}

/*
 * take seconds and output in "days, hours, minutes and seconds format"
 */
void ChapterOne::calculateTime(long long secs) {
	int days, hours,  minutes, seconds;
	days = hours = minutes = seconds = 0;

	seconds = secs;
	if (secs / SecondsOfMin > 0) {
		minutes = secs / SecondsOfMin;
		seconds = secs - minutes * SecondsOfMin;
	}
	if (minutes / MinutesOfHour > 0) {
		hours = minutes / MinutesOfHour;
		minutes = minutes - hours * MinutesOfHour;
	}
	if (hours / HourOfDay > 0) {
		days = hours / HourOfDay;
		hours = hours - days * HourOfDay;
	}
	cout << days << " days " << hours <<" hours "<<minutes<<" minutes "<< seconds <<" seconds " <<endl;
	cout << "size of days is " << sizeof(days) << endl;
	cout << "size of int is " << sizeof(int) << endl;
}

void ChapterOne::calculatePopulationPercentage(long long world, long long us) {
	long double us_LD = static_cast<long double> (us);
	long double world_LD = static_cast<long double> (world);
	double percent =Percentage *  us_LD/world_LD;
	cout << "The percentage is " << percent<< " %" <<endl;
}

void ChapterOne::show() {
	unsigned int x_ui = UINT_MAX;
	x_ui +=1;
	cout << "unsigned int is " << x_ui <<endl;

//chapter 3,
	long long seconds;
	cout<< "please enter the seconds in integer format: ";
	cin >> seconds;
	cout<<endl;
	calculateTime(seconds);

	//chapter 3
	long long worldPopulation = 0;
	long long usPopulation = 0;
	cout <<"please enter the world population:";
	cin >> worldPopulation;
	cout << endl;
	cout <<"please enter the US and A population:";
	cin >> usPopulation;
	cout << endl;
	calculatePopulationPercentage(worldPopulation, usPopulation);

	float a = 2.34E+22f;
	float b = a + 1.0f;
	float x = 123456789.0f;
	float y = x + 1.0f;
	cout << "y = " << y << endl;
	cout << " y - x = " << y - x << endl;

	cout << "a =" << a <<endl;
	cout << "b -a =" << b - a<< endl;

	int ia = 123456789;
	int ib = ia + 1;


	char ch1 = 'M';
	int i = ch1;
	cout << "The char of value is " << ch1 << " and string is " << i <<endl;
	cout << "a =" << ia <<endl;
	cout << "b -a =" << ib - ia<< endl;

	ch1 += 1;
	i = ch1;
	cout <<"The cout put:";
	cout.put(ch1);
	cout.put(i);
	cout <<endl;

	cout << "Hello World!!!" << endl; // prints Hello World!!!
	cout << "please enter the hour: ";
	int hour, minutes;
	cin >> hour;
	cout << "please enter the minutes:";
	cin >> minutes;
	func(hour, minutes);

	char ch;
	cout << "please enter a char:";
	cin >> ch;
	cout << "Thank you for the " << ch <<endl;
}
