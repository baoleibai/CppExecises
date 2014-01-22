/*
 * cSeven.cpp
 *
 *  Created on: Jan 7, 2014
 *      Author: b576
 */
#include "include/cSeven.h"

void simple();
/*
 * Write a function that takes three arguments: the name of an int array, the array
 * size, and an int value. Have the function set each element of the array to the int
 * value.
 */
void totalSum4(int * head, int * tail, int value);

/*
 * Write a function that has this prototype
 *         int replace(char * str, char c1, char c2);
 * Have the function replace every occurrence of c1 in the string str with c2, and
 * have the function return the number of replacements it makes.
 */
int replace(char * str, char c1, char c2);

double hamonicMean(double x, double y);

void program2Input(double *da,const int size);
void program2Average(const double arrdouble[],const int size);
void program2Display(const double arrdouble[],const  int size);
double add(double, double);

cSeven::cSeven() {

}

cSeven::~cSeven() {

}

void cSeven::show() {
	simple();
	program10();
	program9();
	program8();
	//program 7
	int size7 = 4;
	double * db7 = new double[size7];
	double * location = p7fill_array(db7, db7+size7);
	p7Show_array(db7, location);
	p7Reverse_array(db7, location);
	p7Show_array(db7, location);


	//program 6
	int size6 = 4;
	double * db6 = new double[size6];
	int actualSize6 = p6Fill_array(db6, size6);
	p6Show_array(db6, actualSize6);
	p6Reverse_array(db6, actualSize6);
	p6Show_array(db6, actualSize6);

	//program 5
	int value = 0;
	cout<<"Enter integer number: ";
	cin >> value;
	cout<<value<<endl;

	double result = program5Factorial(value);
	cout <<"Result is "<< result<<endl;

	//program 4
	unsigned numbers = 47;
	unsigned picks = 5;
	unsigned magicnumbers = 27;
	unsigned magicpicks = 1;
	program4Lottery(numbers, picks, magicnumbers, magicpicks);


	program3();
	program2();
	//exes();
	program1();
}

double add(double x, double y) {
	return x+y;
}

void cSeven::program10(){
	cout<<" please enter values:";
	double x , y;

	if(!(cin>>x>>y)){
		cout<<"Invalid input."<<endl;
		return;
	}

	cout <<"Result is "<<calculate(x,y, add)<<endl;
}

double cSeven::calculate(double x, double y, double (*ptr_add)(double,double)) {
	return ptr_add(x, y);
}

void cSeven::program9(){
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
			continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
}

int cSeven::getinfo(student pa[], int n) {

}
void cSeven::display1(student st) {

}
void cSeven::display2(const student * ps) {

}
void cSeven::display3(const student pa[], int n) {

}

void fillSeasons(const char* *seasons, double * expenses, int size);

void cSeven::program8() {
	const char * mSeasons[4] = {"Spring","Summer","Autumn","Winter"};
	double expenses[4];
	fillSeasons(mSeasons, expenses, 4);
	expensesStruct myExpense;
	program8FillSeasons(mSeasons,& myExpense, 4);
	program8ShowSeasons(mSeasons,myExpense, 4);
}

void fillSeasons(const char** seasons, double * expenses, int size){
	for(int i = 0; i< size; i++){
		cout<<" please enter the expenses for "<<seasons[i]<<":";
		cin>>expenses[i];
	}
}

void cSeven::program8FillSeasons(const char* *seasons, expensesStruct * expenses, int size) {
	for(int i = 0; i< size; i++){
			cout<<" please enter the expenses struct for "<<seasons[i]<<":";
			cin>>expenses->expense[i];
	}
}

void cSeven::program8ShowSeasons(const char* *seasons, expensesStruct expenses, int size) {
	for(int i = 0; i< size; i++){
			cout<<" please enter the expenses struct for "<<seasons[i]<<" is "<<expenses.expense[i]<<endl;
	}
}

double* cSeven::p7fill_array(double *head, double *tail) {
	double * local_head;
	for(local_head = head; local_head != tail; local_head++) {
		cout<<"Please enter the element: ";
		if (!(cin>>*local_head)) {
			cout<<"Invalid input!"<<endl;
			break;
		}
	}
	return local_head;
}

void cSeven::p7Show_array(double *head, const double *tail) {
	double * local_head;
	cout<<"Show the content of the array :";
	for(local_head = head; local_head != tail; local_head++) {
		cout<<*local_head<<" ";
	}
	cout<<endl;
}

void cSeven::p7Reverse_array(double *head, double *tail) {
	int size = (tail - head);
	double temp = 0;
	int middle = -1;

	middle = (size / 2);
	int large = size - 1;
	for (int i = 0; i < middle; i++) {
		temp = head[i];
		head[i] = head[large];
		head[large] = temp;
		large--;
	}
	cout <<" Reverse array."<<endl;
}

int cSeven::p6Fill_array(double db[], const int size) {
	int index = 0;
	for(int i = 0; i < size; i ++) {
		cout<<"Please enter the "<<i<<" element of "<<size<<" array: ";
		if (!(cin>>db[i])) {
			cout<<"Invalid input!"<<endl;
			break;
		}
		index++;
	}
	return index;
}

void cSeven::p6Show_array(const double db[], const int size) {
	cout<<"Show the content of the array :";
	for (int i = 0; i < size; i++) {
		cout<<db[i]<<" ";
	}
	cout<<endl;
}

void cSeven::p6Reverse_array(double db[], int size) {
	double temp = 0;
	int middle = -1;

	middle = (size / 2);
	int large = size - 1;
	for (int i = 0; i < middle; i++) {
		temp = db[i];
		db[i] = db[large];
		db[large] = temp;
		large--;
	}
}

double cSeven::program5Factorial(int value) {
	double temp = 0;
	if(value > 0) {
		temp = value * program5Factorial(--value);
	} else if (value == 0) {
		return 1.0;
	}
	return temp;
}

void cSeven::program4Lottery(unsigned numbers, unsigned picks, unsigned magicNumbers, unsigned magicPicks) {
	long double n;
	unsigned p;
	long double result = 1.0;
	for (n = numbers, p = picks; p>0; n--,p--){
		result *= n/p;
	}
	n = p= 0;
	for (n = magicNumbers, p = magicPicks; p>0;n--,p--) {
		result *=n/p;
	}
	cout<<"The probability to win a lottery when pick "<< picks<<" numbers out of "<<numbers<<" and "<<magicPicks <<" magic number "<<magicNumbers<<endl;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout<<" is "<<result<<endl;
}

void cSeven::program3() {
	box mbox = {"bbai", 10,10,10, 0};
	program3Display(mbox);
	program3BoxAddress(&mbox);
}

void cSeven::program3Display(box b) {
	cout <<"Display the content of box b "<< b.volume<<endl;
}

void cSeven::program3BoxAddress(box *bx) {
	bx->volume= bx->height*bx->length*bx->width;

	cout<<"Volume is "<< bx->volume<<endl;
}

void cSeven::exes() {
	const int size = 5;
	int arr[size];
	int array_value = 3;
	totalSum4(arr, arr + size, array_value);
	cout<<endl;
	char ch[] = "acbcccdc";
	int occ = replace(ch, 'c', 'b');
	cout << occ;

	Blitz * l_Blitz = new Blitz{1,2};
	tests(l_Blitz);
	cout <<l_Blitz->x<<endl;
	Blitz l_Blitz2 = {1,2};
	tests2(&l_Blitz2);
}

/*
 * Write a program that asks the user to enter up to 10 golf scores, which are to be
stored in an array.You should provide a means for the user to terminate input prior
to entering 10 scores.The program should display all the scores on one line and
report the average score. Handle input, display, and the average calculation with
three separate array-processing functions.
 *
 */
void cSeven::program2() {
	int arraySize = 3;

	double *da = new double[arraySize];
	program2Input(da, arraySize);
	program2Display(da, arraySize);
	program2Average(da, arraySize);
}

void program2Input(double * da, const int size) {
	cout<<"Would you like to enter "<<size<<" golf scores? Y/N"<<endl;
	char ch;
	if (!(cin >> ch)) {
		cin.clear();
		cin.get();
		cout<<"error."<<endl;
		return;
	}
	if (ch == 'N'||ch == 'n') {
		cout<<"quit."<<endl;
		return;
	}

	for (int i = 0; i < size; i++) {
		cout<<"enter "<<i<<" golfscore: ";
		cin >> da[i];
	}
}

void program2Average(const double arrdouble[], const int size){
	double average = 0;
	for (int i = 0; i < size; i++) {
		average += arrdouble[i];
	}
	double ave = average / size;
	cout << "The average is "<<ave<<endl;
}

void program2Display(const double arrdouble[], const int size){
	for (int i = 0; i < size; i++) {
		cout <<arrdouble[i] << " ";
	}
	cout<<endl;
}

/*
 * Write a program that repeatedly asks the user to enter pairs of numbers until at
least one of the pair is 0. For each pair, the program should use a function to calcu-
late the harmonic mean of the numbers.The function should return the answer to
main(), which should report the result.The harmonic mean of the numbers is the
inverse of the average of the inverses and can be calculated as follows:
harmonic mean = 2.0 × x × y / (x + y)
 *
 */
void cSeven::program1() {
	do {
		double x, y;
		cout<<"Please enter the first number of a pair: ";
		cin >> x;
		cout<<"Please enter the second number of a pair: ";
		cin >> y;
		if(x == 0 || y == 0) {
			cout<<"either number is a Zero, quit.";
			break;
		}
		double result =hamonicMean(x,y);
		cout<<"result is "<<result<<endl;
	} while (true);
}

double hamonicMean(double x, double y) {
	return (2 * x * y) / (x + y);
}

void cSeven::displayApplicant(applicant ap) {

}

void cSeven::displayApt(applicant *) {

}

void cSeven::tests2(Blitz *b) {
	b->x =2;
	b->y =4;
}

void cSeven::tests(Blitz* b) {
	b->x =2;
	b->y=4;
}

int replace(char * str, char c1, char c2) {
	int cc = 0;
	while (*str) {
		if (*str == c1) {
			*str = c2;
			cc++;
		}
		str++;
	}
	return cc;
}

void simple() {
	cout << "calling from simple. " << endl;
}

void totalSum4(int * head, int * tail, int value) {
	int * index;
	for (index = head; index < tail; index++) {
		*index = value;
		cout << *index << " ";
	}
	cout << endl;
}
