//============================================================================
// Name        : CppExercises.cpp
// Author      : Baolei Bai
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<climits>
#include "include/ChapterOne.h"
#include "include/ChapterFour.h"
using namespace std;

int main() {
	/*
	ChapterOne* mChapterOne = new ChapterOne();
	mChapterOne->show();
*/
	ChapterFour* mChapterFour = new ChapterFour();
	//mChapterFour->show();
	mChapterFour->showExercises();
	return 0;
}