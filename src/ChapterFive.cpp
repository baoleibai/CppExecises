/*
 * ChapterFive.cpp
 *
 *  Created on: Dec 20, 2013
 *      Author: b576
 */
#include "include/ChapterFive.h"

ChapterFive::ChapterFive() {

}

ChapterFive::~ChapterFive() {

}

void ChapterFive::showExe() {
	E8();
	E7();
	E56();
	E4();
	E3();
	E2();
	E1();
}

void ChapterFive::E8() {
	char * chap = new char[50];
	chap = "bbai12";
	cout<<chap;
	char ch1[] = "test";
	char ch2[] = "test2";
 	char * chapp[2] = {ch1, ch2};
 	char ** psa = chapp;
cout<<chapp[0]<<chapp[1]<<endl;
cout<<psa[0] <<psa[1]<<endl;

	char ps[50];
	char ch;
	cin.get(ch);
	int wordcount;
	int index = 0;
	while (cin.fail() == false) {
		if (ch == ' ' || ch == '\n') {
			ps[index] = '\0';
			if (!strcmp(ps, "done")) {
				cout<<" Total word count is "<< wordcount<< " before \"done\""<<endl;
				break;
			} else {
				wordcount++;
				index = 0;
			}
		} else {
			ps[index] = ch;
			index++;
		}
		cin.get(ch);
	}
	delete ps;
}

void ChapterFive::E7() {
	cout << " please tell me how many cars you want? ";
	int no;
	cin >> no;
	cin.get();
	car* cars = new car[no];
	int i = 0;
	while (i < no) {
		cout << "the make of car " << i + 1 << ": ";
		getline(cin, cars[i].make);
		cout << " The year of the car: ";
		cin >> cars[i].year;
		cin.get();
		i++;
	}
	cout << endl;
	cout << "Here is your collection: " << endl;
	for (int x = 0; x < no; x++) {
		cout << cars[x].make << " " << cars[x].year << endl;
	}
	delete[] cars;
}
void ChapterFive::E56() {
	const int Year = 3;
	const int Month = 3;
	char * month[Month] = { "Jan", "Feb", "Mar" };
	int sales[Year][Month];

	for (int x = 0; x < Year; x++) {
		cout << " Year: " << x << " sales record." << endl;
		int i = 0;
		while (i < Month) {
			cout << month[i] << " sales record: ";
			cin >> sales[x][i];
			i++;
		}
	}

	int sum = 0;
	for (int j = 0; j < Year; j++) {
		cout << "Currnt year is: " << j << endl;
		int total = 0;
		for (int y = 0; y < Month; y++) {
			total += sales[j][y];
		}
		sum += total;
		cout << " Total sale of the year is " << total << endl;
	}
	cout << "total sales of the years is " << sum << endl;
}

void ChapterFive::E4() {
	double startmoney = 100.0;
	const float simpleInterest = 0.1f;
	const float complexInterest = 0.05f;
	int year = 1;
	double d = startmoney + (startmoney * simpleInterest);
	double c = startmoney + startmoney * complexInterest;
	while (c < d) {
		year++;
		d += (startmoney * simpleInterest);
		c += c * complexInterest;
	}
	cout << "year is " << year << endl;
	cout << "D is " << d << " c is " << c << endl;
}

void ChapterFive::E3() {
	double sum;
	double temp = 0;
	cin >> temp;
	while (temp != 0) {
		sum += temp;
		cout << sum << endl;
		cin >> temp;
	}
	cout << "end" << endl;
}

void ChapterFive::E2() {
	vector<long double> vld(100);
	vld[0] = vld[1] = 1;
	int i = 2;
	while (i < 100) {
		vld[i] = i * vld[i - 1];
		i++;
	}
	int j = 0;
	do {
		cout << j << "! = " << vld[j] << endl;
		j++;
	} while (j < 100);

}
void ChapterFive::E1() {
	int s, l, sum;
	cin >> s;
	cin >> l;
	sum = 0;
	for (s; s <= l; s++) {
		sum += s;
	}
	cout << " The total sum is " << sum << endl;
}

