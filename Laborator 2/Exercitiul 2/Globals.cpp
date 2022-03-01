#include "Globals.h"
#include <string.h>
#include <stdio.h>

int Compare_en(Class* stud1, Class* stud2) {

	if (stud1->Getgrade_en() > stud2->Getgrade_en()) return 1;
	else if (stud1->Getgrade_en() == stud2->Getgrade_en()) return 0;
	else return -1;

}

int Compare_hi(Class* stud1, Class* stud2) {

	if (stud1->Getgrade_hi() > stud2->Getgrade_hi()) return 1;
	else if (stud1->Getgrade_hi() == stud2->Getgrade_hi()) return 0;
	else return -1;

}

int Compare_ma(Class* stud1, Class* stud2) {

	if (stud1->Getgrade_ma() > stud2->Getgrade_ma()) return 1;
	else if (stud1->Getgrade_ma() == stud2->Getgrade_ma()) return 0;
	else return -1;

}

int Compare_avg(Class* stud1, Class* stud2) {

	if (stud1->Averagegrade() > stud2->Averagegrade()) return 1;
	else if (stud1->Averagegrade() == stud2->Averagegrade()) return 0;
	else return -1;

}

int Compare_nume(Class* stud1, Class* stud2) {

	if (strcmp(stud1->Getname(), stud2->Getname()) >0 ) return 1;
	else if (strcmp(stud1->Getname(), stud2->Getname()) <0) return -1;
	else return 0;

}