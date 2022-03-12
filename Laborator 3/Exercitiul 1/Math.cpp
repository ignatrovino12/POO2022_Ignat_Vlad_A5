#include "Math.h"
#include <iostream>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

int Math::Add(int nr1, int nr2) { return nr1 + nr2; }


int Math::Add(double nr1, double nr2) {	return nr1 + nr2;}

int Math::Add(int nr1, int nr2,int nr3) { return nr1 + nr2+ nr3; }

int Math::Add(double nr1, double nr2, double nr3) { return nr1 + nr2 + nr3; }

int Math::Mul(int nr1, int nr2) { return nr1 * nr2; }

int Math::Mul(double nr1, double nr2) { return nr1 * nr2; }

int Math::Mul(int nr1, int nr2, int nr3) { return nr1 * nr2* nr3; }

int Math::Mul(double nr1, double nr2, double nr3) { return nr1 * nr2 * nr3; }

int Math::Add(int count, ...){
	
	int i,s=0;
	int val;
	
	va_list vl;
	va_start(vl, count);
	for (i = 0; i < count; i++)
	{
		val = va_arg(vl, int);
		s = s + val;
		
	}
	va_end(vl);
	return s;

}

char* Math::Add(const char* c1, const char* c2) {

	int i;
	char* fin;
	

	i = strlen(c1) + strlen(c2) + 1;
	fin= (char*)malloc(i);
	memset(fin, 0, i);

	strcpy_s(fin,i,"");
	strcat_s(fin,i, c1);
	strcat_s(fin,i,c2);
	return fin;



}