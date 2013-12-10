/*
 * ChapterFour.cpp
 *
 *  Created on: Dec 10, 2013
 *      Author: b576
 */
#include "include/ChapterFour.h"

ChapterFour::ChapterFour() {
	//Local variable, although same name as global variable intArray.
	int intArray[] = {1,2,3,4};
	point.x = 10;
	point.y = 12;
	status = 0;
	test.name = "xyz";
}

ChapterFour::~ChapterFour() {

}

void ChapterFour::show() {
	showArray();
	showStruct();
}

static int GIArray[] = {1,2,3,4,5};

void ChapterFour::showArray() {
	cout << "Show the content of global array:"<< endl;
	// declared array can only be initialized element by element
	int size = sizeof(intArray) / sizeof(int);
	for (int i = 0; i < size; i ++) {
		intArray[i] = i;
		cout << intArray[i] << " ";
	}
	cout<<endl;
	int sizeZ = sizeof(zeroArray) / sizeof(int);
		for (int i = 0; i < sizeZ; i ++) {
			cout << zeroArray[i] << " ";
		}
		cout<<endl;

	cout << "Show the content of Static array:"<< endl;
	int gSize = sizeof(GIArray) / sizeof(int);
	for (int i = 0; i < gSize; i ++) {
		cout << GIArray[i] << " ";
	}
	cout<<endl;
}

void ChapterFour::showStruct() {
	Person me = {"x", 187, 190};
	Person Parents[] = {
			{"y", 166, 100},
			{"z", 170, 150}
	};
	cout << "Person: " << me.name <<" is " << me.height << " tall and " << me.weight <<" weight"<< endl;
	int size = sizeof(Parents) / sizeof(Person);
	for(int i = 0; i < size; i ++) {
		cout << "Person: " << Parents[i].name <<" is " << Parents[i].height << " tall and " << Parents[i].weight <<" weight"<< endl;
	}
	apple = {"apple", 12};
	orange = {"orange", 13};
	cout << "Food: " << orange.name <<" is " << orange.weight <<" weight"<< endl;
	Food banana={"banana", 14};
	Food strawberry;

	strawberry.name="strawberry";
	strawberry.weight = 18;

	Circle circle= {{10,20}, 20};
	cout << "The point of a circle is "<<circle.point.x << " and " <<circle.point.y << " ,and radius is" << circle.radius<<endl;
}
