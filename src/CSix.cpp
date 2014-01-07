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
	program9();
	program8();
	program6();
	program5();
	program4();
	program3();
	program2();
	program1();
	exes();
	readFromFileIO();
	writeToFileIO();
	practise();

}

/*
 *Read contributors from a given file. first line is number of contributors.
 */
void CSix::program9() {

	char filename[50] = "contributors.txt";
	ifstream readFile;
	readFile.open(filename);

	if (!readFile.is_open()) {
		cout << "Failed to open " << filename << ". quit the program." << endl;
		return;
	}
	int i = 0;
	char chars[50];
	readFile.getline(chars, STRSIZE);
	cout << chars << endl;
	int number = atoi(chars); //stdlib.h is C-style method.

	Contributors *cons = new Contributors[number];
	while (readFile.good()) {
		readFile.getline(cons[i].contributor, STRSIZE);
		readFile.getline(chars, STRSIZE);
		cons[i].amount = atoi(chars);
		i++;
	}

	if (readFile.fail()) {
		cout << "Reach EOF" << endl;
	} else if (readFile.bad()) {
		cout << "Something Unexpected" << endl;
	} else {
		cout << "Stopped for un-known reasons" << endl;
	}

	for (int x = 0; x < number; x++) {
		cout << " Countributor: " << cons[x].contributor << " "
				<< cons[x].amount << endl;
	}
	readFile.close();
}

/*
 * Enter a filename, read contents of the file and output
 * number of characters and empty spaces.
 */
void CSix::program8() {
	char filename[50];
	cout<<"Please enter the filename that you wants to read: ";
	cin>>filename;
	ifstream fin;
	fin.open(filename);
	if(!fin.is_open()) {
		cout << "Could not open file " << filename << endl;
		cout << "Program terminating.\n";
		return;
	}

	int charCount = 0, spaceCount = 0;
	char ch;
	ch = fin.get();
	while(fin.good()){
		if(isspace(ch))
			spaceCount++;
		else
			charCount++;
		ch = fin.get();
	}
	if(fin.fail()){
		cout<<"Reached EOF."<<endl;
	} else if(fin.bad()) {
		cout<<"Something unexpected."<<endl;
	} else {
		cout << "Input terminated for unknown reason" << endl;
	}

	cout<<"Number of Character count is "<<charCount<<endl;
	cout<<"Number of Space count is "<<spaceCount<<endl;
	fin.close();
}

/*
 * Enter the number of contributors and their name, amount,.
 * if donate >=10000, output as Grand donation.
 * else output as Headed patrons.
 */
void CSix::program6() {
	int contributorsNo = 0;

	do {
		cout << "Please enter the number of contributors: ";

		if (!(cin >> contributorsNo)) {
			cin.clear();
			cin.get();
			cout << "Invalid Input, Try Again." << endl;
			continue;
		} else {
			break;
		}
	} while (true);

	Contributors *lContributors = new Contributors[contributorsNo];

	int NoGrand = 0, NoHeaded = 0;
	for (int i = 0; i < contributorsNo; i++) {
		cout << "The " << i << " contributor's name:";
		cin >> lContributors[i].contributor;
		cout << "The contribution amount: ";
		cin >> lContributors[i].amount;
		if (lContributors[i].amount >= 10000)
			NoGrand++;
		else
			NoHeaded++;
	}

	cout << "The Grand donations:" << endl;
	if (NoGrand == 0) {
		cout << "none." << endl;
	} else {
		for (int i = 0; i < contributorsNo; i++) {
			if (lContributors[i].amount >= 10000) {
				cout << lContributors[i].contributor << " "
						<< lContributors[i].amount << endl;
			}
		}
	}

	cout << "The Headed donations:" << endl;
	if (NoHeaded == 0) {
		cout << "none." << endl;
	} else {
		for (int i = 0; i < contributorsNo; i++) {
			if (lContributors[i].amount < 10000) {
				cout << lContributors[i].contributor << " "
						<< lContributors[i].amount << endl;
			}
		}
	}
}

/*
 * Calculate the tax amount of annual income.
 */
void CSix::program5() {
	bool quit = false;
	const int salaryLevels = 4;
	double tax;
	double taxLevel[salaryLevels] = { 5000, 10000, 20000, 35000 };
	double taxRate[salaryLevels] = { 0, 0.1, 0.15, 0.2 };

	cout << "First 5,000 tvarps: 0% tax" << endl;
	cout << "Next 10,000 tvarps: 10% tax" << endl;
	cout << "Next 20,000 tvarps: 15% tax" << endl;
	cout << "Tvarps after 35,000: 20% tax" << endl;
	do {
		cout<< "Please enter your anual incout(enter 'q'/Negative numbers to quit): ";
		double income;
		if (!(cin >> income)) {
			cin.clear();
			cin.get();
			cout << "Quit! Bye" << endl;
			quit = true;
		}
		if (income < 0.0) {
			cin.get();
			cout << "Quit! Bye" << endl;
			quit = true;
		}
		double temp = income;
		for (int i = 0 ; i < salaryLevels; i++) {
			if(temp - taxLevel[i] > 0) {
				tax+= taxLevel[i] * taxRate[i];
				temp -= taxLevel[i];
			} else {
				tax+= temp*taxRate[i];
				break;
			}
		}
		cout << "The tax for annual income " << income << " is " << tax << endl;
	} while (!quit);
}

/*
 * Display a menu and select options to display info from an struct array.
 */
void CSix::program4() {
	Bop bops[3] = { { "Baolei Bai", "Engineer", "Tim White", 2 }, {
			"Xiying Cao", "A Engineer", "XYC", 1 }, { "Mu Li", "B Engineer",
			"Gary Li", 0 }, };
	bool quite = false;
	do {
		cout << "Please enter one of the following choices(enter q to quite): "
				<< endl;
		cout << "a) Display by Name             b) Display by Title" << endl;
		cout << "c) Display by BOP Name         d) Display by Preference"
				<< endl;
		cout << " q) quit" << endl;
		cout << "Please enter your choice: ";
		char ch;
		if (!(ch = cin.get())) {
			cout << "Invalid input, try again." << endl;
			cin.clear();
			cin.get(); //get the remaining "return" char left in the input queue.
			continue;
		}

		cout << endl;
		switch (ch) {
		case 'a':
			for (int i = 0; i < 3; i++) {
				cout << " " << bops[i].fullname << endl;
			}
			break;
		case 'b':
			for (int i = 0; i < 3; i++) {
				cout << " " << bops[i].title << endl;
			}
			break;
		case 'c':
			for (int i = 0; i < 3; i++) {
				cout << " " << bops[i].bopname << endl;
			}
			break;
		case 'd':
			for (int i = 0; i < 3; i++) {
				if (bops[i].preference == 0) //display full name
					cout << " " << bops[i].fullname << endl;
				else if (bops[i].preference == 1)
					cout << " " << bops[i].title << endl;
				else if (bops[i].preference == 2)
					cout << " " << bops[i].bopname << endl;
			}
			break;
		case 'q':
			cout << "quite the menu" << endl;
			quite = true;
			break;
		default:
			cout << ch << " is not an option." << endl;
			break;
		}
	} while (!quite);
}

/*
 * Create an menu and select option to output info with the help
 * of switch
 */
void CSix::program3() {
	bool quite = false;
	do {
		cout << "Please enter one of the following choices(enter q to quite): "
				<< endl;
		cout << "c) carnivore             p) pianist" << endl;
		cout << "t) tree                  g) game" << endl;
		cout << "Please enter a c, p, t, or g: ";
		char ch;
		if (!(ch = cin.get())) {
			cout << "Invalid input, try again." << endl;
			cin.clear();
			cin.get(); //get the remaining "return" char left in the input queue.
			continue;
		}

		cout << endl;
		switch (ch) {
		case 'c':
			cout << "carnivore" << endl;
			break;
		case 'p':
			cout << "pianist" << endl;
			break;
		case 't':
			cout << "tree" << endl;
			break;
		case 'g':
			cout << "game" << endl;
			break;
		case 'q':
			cout << "quite the menu" << endl;
			quite = true;
			break;
		default:
			cout << ch << " is not an option." << endl;
			break;
		}
	} while (!quite);
}

/*
 * Enter donation and output its average and how many donations
 * are higher than the average.
 */
void CSix::program2() {
	int max = 10;
	double *donationvalue = new double[max];
	double average, total;
	int i = 0;
	for (int x = 0; x < max; x++) {
		cout << "Please enter your donation value: ";
		if (!(cin >> donationvalue[x])) {   //The point of this exercise is here
			cin.clear();  //reset the error flag.
			cin.get();    //get what is left in input queue.
			cout << "Input terminated. Entered an invalid value." << endl;
			break;
		}
		total += donationvalue[x];
		i++;
	}

	if (i > 0) {
		average = total / i;
		cout << "The average value of " << i << " input is " << average << endl;
		int larger;
		for (int y = 0; y < i; y++) {
			if (donationvalue[y] > average)
				larger++;
		}
		cout << "There are " << larger
				<< " values in donation are larger than average value "
				<< average << endl;
	}
}

/*
 * Read input char,
 * if lower case alphabet -> upper case alphabet.
 * if upper case alphabet -> lower case alphabet.
 * if @ -> quit
 * ignore digits.
 * output the rest of the chars.
 */
void CSix::program1() {
	char ch;
	while ((ch = cin.get())) {
		if (ch <= 122 && ch >= 97) {
			ch = ch - 32;
			cout << ch;
		} else if (ch <= 90 && ch >= 65) {
			ch = ch + 32;
			cout << ch;
		} else if (ch == '@')
			break;
		else if (ch <= 57 && ch >= 48) {
			continue;
		} else {
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
		ct1++;
		if (ch = '$')
			ct2++;
		cout << ch;
	}
	cout << "ct1 = " << ct1 << ", ct2 = " << ct2 << "\n";

	int weight = 0;
	if (weight >= 115 && weight < 125) {

	}

	if (ch == 'q' || ch == 'Q') {

	}
	int x;
	if ((x % 2) == 0 && x != 26) {

	}
	if ((x % 2) == 0 && (x % 26) != 0) {

	}
}

bool CSix::readFromFileIO() {
	char filename[50];
	ifstream readFile;
	cin.clear();
	cin.get();

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
		cout << content <<endl;
		readFile >> content;
	}
	if (readFile.eof()) {
		cout << " Reached at the end of file." << endl;
	} else if (readFile.fail()) {
		cout << "Input terminated by data mismatch" << endl;
	} else {
		cout << "Input terminated for unknown reason" << endl;
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

/*
 * Enter a given number of scores and output its average
 */
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
