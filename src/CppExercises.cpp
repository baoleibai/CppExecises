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
#include "include/ChapterFive.h"
#include "include/CSix.h"
#include "include/cSeven.h"
using namespace std;

int main() {

	ChapterOne* mChapterOne = new ChapterOne();
	//mChapterOne->show();

	ChapterFour* mChapterFour = new ChapterFour();
	//mChapterFour->show();
	//mChapterFour->showExercises();



	ChapterFive* mC5 = new ChapterFive();
	//mC5->showExe();


	CSix* mCSix = new CSix();
	//mCSix->show();

	cSeven* mCSeven = new cSeven();

	return 0;
}
