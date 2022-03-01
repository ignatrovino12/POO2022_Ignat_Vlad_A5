
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Globals.h"
#include "Class.h"

int main()
{
    Class st1,st2;

    // first student
    st1.Setname((char*)"Aladin");
    printf("Name of the first student: %s\n",st1.Getname());

    st1.Setgrade_en(5.5);
    printf("English grade: %f\n", st1.Getgrade_en());

    st1.Setgrade_hi(7.125);
    printf("History grade: %f\n", st1.Getgrade_hi());

    st1.Setgrade_ma(8.25);
    printf("Math grade: %f\n", st1.Getgrade_ma());

    printf("Average grade: %f\n\n", st1.Averagegrade());

    // second student
    st2.Setname((char*)"Mark");
    printf("Name of the second student: %s\n", st2.Getname());

    st2.Setgrade_en(5.5);
    printf("English grade: %f\n", st2.Getgrade_en());

    st2.Setgrade_hi(10);
    printf("History grade: %f\n", st2.Getgrade_hi());

    st2.Setgrade_ma(6.235);
    printf("Math grade: %f\n", st2.Getgrade_ma());

    printf("Average grade: %f\n\n", st2.Averagegrade());

    // globals

    printf("Name comparation: %d\n", Compare_nume(&st1, &st2));

    printf("English grade comparation: %d\n", Compare_en(&st1,&st2));

    printf("History grade comparation: %d\n", Compare_hi(&st1, &st2));

    printf("Math grade comparation: %d\n", Compare_ma(&st1, &st2));

    printf("Average grade comparation: %d\n", Compare_avg(&st1, &st2));

}


