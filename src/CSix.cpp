/*
 * CSix.cpp
 *
 *  Created on: Dec 25, 2013
 *      Author: b576
 */
#include "include/CSix.h"

CSix::CSix() {

}

CSix::~CSix() {

}

void CSix::show() {
	program2();
	program1();
	exes();
	readFromFileIO();
	writeToFileIO();
	practise();

}

void CSix::program2() {

}

void CSix::program1() {
	char ch;
	while((ch = cin.get())) {
		if ( ch <= 122 && ch >= 97) {
			ch = ch - 32;
			cout << ch;
		} else if (ch <= 90 && ch >=65) {
			ch = ch + 32;
			cout << ch;
		} else if (ch == '@')
			break;
		else if ( ch <= 57 && ch >=48) {
			continue;
		}
		else {
			cout << ch;
		}
	}
}

void CSix::exes() {
	char ch;
	int ct1, ct2;
	ct1 = ct2 = 0;
	while ((ch = cin.get()) != '$') {
		cout << ch;
		ct1 ++;
		if (ch = '$')
			ct2++;
		cout<<ch;
	}
	cout <<"ct1 = " << ct1 << ", ct2 = " << ct2 << "\n";

	int weight = 0;
	if (weight >= 115 && weight < 125) {

	}

	if (ch == 'q' || ch =='Q') {

	}
	int x;
	if ((x%2) == 0 && x != 26) {

	}
	if ((x%2)==0 && (x%26)!=0) {

	}
}

bool CSix::readFromFileIO() {
	char filename[50];
	ifstream readFile;
	cout << "Enter the name of the data file: ";
	cin.getline(filename, 50);
	readFile.open(filename);
	if (!readFile.is_open()) {
		cout << "Could not open file " << filename << endl;
		cout << "Program terminating.\n";
		return false;
	}
	char content[100];
	readFile >> content;
	while (readFile.good()) {
		cout << content;
		readFile>>content;
	}
	if (readFile.eof()) {
		cout << " Reached at the end of file." << endl;
	} else if (readFile.fail()) {
		cout<<"Input terminated by data mismatch" <<endl;
	} else {
		cout<<"Input terminated for unknown reason"<<endl;
	}
}

void CSix::writeToFileIO() {
char automobile[50];
int year;
double a_price, d_price;

ofstream outFile;
outFile.open("carinfo.txt");

cout << "Enter the make and model of the car: ";
cin.getline(automobile, 50);
cout << "Enter the model year: ";
cin >> year;
cout << "Enter the original asking price: ";
cin >> a_price;
d_price = 0.913 * a_price;

cout << fixed;
cout.precision(2);
cout.setf(ios_base::showpoint);
cout << "make and model: " << automobile << endl;
cout << "year: " << year << endl;
cout << "price: " << d_price << endl;

outFile << fixed;
outFile.precision(2);
outFile.setf(ios_base::showpoint);
outFile << "make and model: " << automobile << endl;
outFile << "year: " << year << endl;
outFile << "price: " << d_price << endl;
outFile.close();
}
void CSix::practise() {
int golf[Max];
cout << "Please enter your golf score:" << endl;
int i;

for (int i = 0; i < Max; i++) {
	cout << "round *" << i + 1 << ": ";
	while (!(cin >> golf[i])) {
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "Please enter a number: ";
	}
}

double total = 0.0;
for (int i = 0; i < Max; i++) {
	total += golf[i];
}
cout << total / Max << " = average score " << Max << " rounds\n";
}
