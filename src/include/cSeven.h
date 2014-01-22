/*
 * cSeven.h
 *
 *  Created on: Jan 7, 2014
 *      Author: b576
 */

#ifndef CSEVEN_H_
#define CSEVEN_H_

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <vector>
#include <stack>
#include <fstream>
#include <stdlib.h>

using namespace std;

class cSeven {

private:
	struct Blitz {
		int x;
		int y;
	};
	struct applicant {
		char name[30];
		int credit_ratings[3];
	};
	typedef void (*p1)(applicant * a);
	typedef const char * (*p2)(const applicant * a1, const applicant * a2);

	p1 ap[5];
	p2 (*pa)[10];
	struct box {
		char maker[40];
		float height;
		float width;
		float length;
		float volume;
	};
	struct expensesStruct {
		double expense[4];
	};
	static const int SLEN = 30;
	struct student {
		char fullname[SLEN];
		char hobby[SLEN];
		int ooplevel;
	};

public:
	cSeven();
	virtual ~cSeven();
	void show();
private:
	void exes();
	void tests(Blitz *);
	void tests2(Blitz *);
	int function(const char *);
	int judge(int (*fp)(const char*));
	void displayApplicant(applicant);
	void displayApt(applicant *);
	void program1();
	void program2();
	void program3();
	void program3Display(box);
	void program3BoxAddress(box *);
	void program4Lottery(unsigned numbers, unsigned picks, unsigned magicNumbers, unsigned magicPicks);
	double program5Factorial(int);
	int p6Fill_array(double[], const int);
	void p6Show_array(const double[], const int);
	void p6Reverse_array(double [], int);
	double* p7fill_array(double *, double *);
	void p7Show_array(double *, const double *);
	void p7Reverse_array(double *, double *);
	void program8();
	void f1(applicant * a);
	const char * f2(const applicant * a1, const applicant * a2);
	void program8FillSeasons(const char* *seasons, expensesStruct * expenses, int size);
	void program8ShowSeasons(const char* *seasons, expensesStruct expenses, int size);
	void program9();
	// getinfo() has two arguments: a pointer to the first element of
	// an array of student structures and an int representing the
	// number of elements of the array. The function solicits and
	// stores data about students. It terminates input upon filling
	// the array or upon encountering a blank line for the student
	// name. The function returns the actual number of array elements
	// filled.
	int getinfo(student pa[], int n);
	// display1() takes a student structure as an argument
	// and displays its contents
	void display1(student st);
	// display2() takes the address of student structure as an
	// argument and displays the structure’s contents
	void display2(const student * ps);
	// display3() takes the address of the first element of an array
	// of student structures and the number of array elements as
	// arguments and displays the contents of the structures
	void display3(const student pa[], int n);

	void program10();
	double calculate(double, double, double (*ptr)(double,double));

};

#endif /* CSEVEN_H_ */
