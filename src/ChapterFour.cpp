/*
 * ChapterFour.cpp
 *
 *  Created on: Dec 10, 2013
 *      Author: b576
 */
#include "include/ChapterFour.h"

ChapterFour::ChapterFour() {
	//Local variable, although same name as global variable intArray.
	int intArray[] = { 1, 2, 3, 4 };
	point.x = 10;
	point.y = 12;
	test.name = "xyz";
	for (int i = 0; i < 4; i++) {
		test.size[i] = i;
	}
}

ChapterFour::~ChapterFour() {

}
void ChapterFour::showExercises() {
	exeTen();
	exeSix();
	exeSeven();
	char firstname[20];
	char *lastname;
	cout << "firstname: ";
	cin >> firstname;
	cin >> lastname;
	cout << firstname << lastname << endl;

}
void ChapterFour::exeSix() {
	CandyBar snack = { "Mocha Munch", 2.3, 350 };
	cout << "snack is " << snack.brand << endl;
	CandyBar* snacks = new CandyBar[3];
	cin.getline(snacks[0].brand,50);
	cin>>snacks[0].calories;
	cin>>snacks[0].weight;
	cout << "snack is " << snacks[0].brand << endl;
	cin.get();
	cin.getline((*(snacks+1)).brand, 50);
	cout << "snack is " << snacks[1].brand << endl;
	cout<<snacks<<endl;
	delete [] snacks;
	cout<<snacks<<endl;
}
void ChapterFour::exeTen() {
	float *dash = new float[3];
	cin >> dash[0];
	cin>>*(dash +1);
	cout<<dash<<"   "<<dash[0]<<"     "<<dash[1]<<"  "<<(dash+1)<<endl;
	int * ipa = new int[3];
	*ipa = 1;
	ipa[0] = 2;
	*(ipa+1)=3;
	ipa[2] = 4;
	cout<<*ipa <<" "<<ipa[0] << " "<< *(ipa+1) <<" "<<ipa[2]<<endl;
	delete [] dash;
	delete [] ipa;
}

void ChapterFour::exeSeven() {
	struct Pizza {
		char name[50];
		int diameter;
		float weight;
	};
	//Pizza papaJhons;
	Pizza *papaJhons = new Pizza;
	cout << "name of pizza: ";
	cin.getline(papaJhons->name, 50);
	cout << "The size :";
	cin >> papaJhons->diameter;
	cout << "weight: ";
	cin >> papaJhons->weight;
	cout << papaJhons->name << papaJhons->diameter << papaJhons->weight << endl;
	delete papaJhons;
}

void ChapterFour::show() {
	showArray();
	showStruct();
	//showUnion();
	showEnum();
	showPointers();
}
void ChapterFour::showPointers() {
	double da[2] = { 1.3, 2.4 };
	int vsize = 2;
	vector<int> va(2);
	va[0] = 10;
	va[1] = 20;
	int ia[2] = { 1, 2 };
	cout << "value of build-in array da[1] " << da[1] << " the address "
			<< &da[1] << endl;
	cout << " value of build-in array ia[1] " << ia[1] << " the address "
			<< &ia[1] << endl;
	cout << " value of build-in array ia[-1] " << ia[-1] << " the address "
			<< &ia[-1] << endl;
	cout << " value of vector va[1] " << va[1] << " the address " << &va[1]
			<< endl;
	char actors[30];
	short betsie[100];
	float chuck[13];
	long double dipsea[64];
	int odd[5] = { 1, 3, 5, 7, 9 };
	int even = odd[0] + odd[1];
	char chessburger[30] = "cheeseburger";
	string str = "Waldord Salad";
	Fish* aFish = new Fish;
	cin >> aFish->kind;
	cout << "Fish kind is: " << aFish->kind << endl;

	float treacle[3] = { 1.0f, 2.0f, 3.0f };
	float* fp = treacle;

	cout << " The first element of array is " << *fp
			<< " The lat element of array is " << fp[2] << endl;

	cout << (int *) "Home of the jolly bytes";

	int n;
	cout << "Please enter a number: ";
	cin >> n;
	cout << endl;
	int * par = new int[n];
	for (int i = 0; i < n; i++) {
		par[i] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		cout << "size of array: " << par[i] << endl;
	}

	cout << "Please enter a number: ";
	cin >> n;
	cout << endl;
	vector<int> var(n);
	for (int i = 0; i < n; i++) {
		var[i] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		cout << "size of array: " << var[i] << endl;
	}

}
static int GIArray[] = { 1, 2, 3, 4, 5 };

void ChapterFour::showArray() {
	cout << "Show the content of global array:" << endl;
	// declared array can only be initialized element by element
	int size = sizeof(intArray) / sizeof(int);
	for (int i = 0; i < size; i++) {
		intArray[i] = i;
		cout << intArray[i] << " ";
	}
	cout << endl;
	int sizeZ = sizeof(zeroArray) / sizeof(int);
	for (int i = 0; i < sizeZ; i++) {
		cout << zeroArray[i] << " ";
	}
	cout << endl;

	cout << "Show the content of Static array:" << endl;
	int gSize = sizeof(GIArray) / sizeof(int);
	for (int i = 0; i < gSize; i++) {
		cout << GIArray[i] << " ";
	}
	cout << endl;
}

void ChapterFour::showStruct() {
	Person me = { "x", 187, 190 };
	Person Parents[] = { { "y", 166, 100 }, { "z", 170, 150 } };
	cout << "Person: " << me.name << " is " << me.height << " tall and "
			<< me.weight << " weight" << endl;
	int size = sizeof(Parents) / sizeof(Person);
	for (int i = 0; i < size; i++) {
		cout << "Person: " << Parents[i].name << " is " << Parents[i].height
				<< " tall and " << Parents[i].weight << " weight" << endl;
	}
	apple = {"apple", 12};
	orange = {"orange", 13};
	cout << "Food: " << orange.name << " is " << orange.weight << " weight"
			<< endl;
	Food banana = { "banana", 14 };
	Food strawberry;

	strawberry.name = "strawberry";
	strawberry.weight = 18;

	Circle circle = { { 10, 20 }, 20 };
	cout << "The point of a circle is " << circle.point.x << " and "
			<< circle.point.y << " ,and radius is" << circle.radius << endl;
}

void ChapterFour::showUnion() {
	ui.id_int = 1;
	cout << "The value of a union is " << ui.id_int << " double value is "
			<< ui.id_double << endl;
	ui.id_double = 12.3;
	cout << "The value of a union is " << ui.id_int << " string value is "
			<< ui.id_double << endl;

	cout << "Enter a or b: ";
	cin >> test.name;
	if (test.name == "a") {
		test.testid.id_int = 1;
	} else {
		cout << "Enter struct test id in char[] format: ";
		cin >> test.testid.id_chars;
	}
	cout << "The id of test struct is " << test.testid.id_int
			<< "  string format is " << test.testid.id_chars << endl;
}

void ChapterFour::showEnum() {
	Color sColor;
	sColor = Color(0);
	sColor = green;
	int iColor = sColor;
	cout << "the value of enum is " << sColor << " and int is " << iColor
			<< endl;

	cout << "values of Bits:" << one << " " << two << " " << four << endl;
	cout << "values of Values: " << zero << " " << null << " " << pos << " "
			<< positive << endl;
	cout << "values of BigStep: " << firstStep << " " << bigstep << " "
			<< ThirdStep << endl;
}
