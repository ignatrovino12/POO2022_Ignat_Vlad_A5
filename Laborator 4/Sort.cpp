#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <string>
#include "Sort.h"
#include <stdio.h> 
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>
#include <string.h>




Sort::Sort(int* vector, int numar_elemente) {
	this->list = (int*)(malloc( numar_elemente * sizeof(int)));
	if (this->list == NULL) exit(1);

	this->nrelem = numar_elemente;

	for (int i = 0; i < numar_elemente; i++) {
		this->list[i] = vector[i];

	}
	
}

Sort::Sort(int numar_elemente, int min_element, int max_element) {
	this->list = (int*)(malloc(numar_elemente * sizeof(int) + 1));
	if (this->list == NULL) exit(1);

	this->nrelem = numar_elemente;

	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < numar_elemente; i++) {
		
		this->list[i] = min_element + rand() % (min_element - max_element + 1);
	}


}


Sort::Sort() : list(new int[6]{ 9, 12, 5, 13, 7, 10 }) {
	this->nrelem = 6;
}


Sort::Sort(int count, ...) {
	this->list = (int*)(malloc(count * sizeof(int) +1));
	this->nrelem = count;
	if (this->list == NULL) exit(1);

	va_list vl;
	va_start(vl, count);
	for (int i = 0; i < count; i++)
	{
		this->list[i] = va_arg(vl, int);
		
	}
	va_end(vl);
}


Sort::Sort(char* c) {
	char* pch;
	int i, nr = 0;;
	this->nrelem = 0;

	for (i = 0; i < strlen(c)-1; i++) if (strchr("1234567890", c[i]) != NULL && strchr("1234567890", c[i+1]) == NULL) this->nrelem++;
	this->nrelem++;

	this->list = (int*)(malloc(this->nrelem * sizeof(int) + 1));
	if (this->list == NULL) exit(1);

	pch = strtok(c, " ,.");
	while (pch != NULL)
	{   
		this->list[nr] = std::stoi(pch);
		nr++;
		pch = strtok(NULL, " ,.");
	}

}

int Sort::GetElementsCount() {
	return this->nrelem;
}

int Sort::GetElementFromIndex(int index) {
	return this->list[index];

}

void Sort::Print() {

	for (int i = 0; i < this->nrelem; i++) {
		printf("%d ",this->list[i]);
	}
	printf("\n");
}

void Sort::InsertSort(bool ascendent ) {
	int i,j;

	if (ascendent == true) {
		for (i = 0; i < this->nrelem - 1; i++)
			for (j = i + 1; j < this->nrelem; j++)
				if (this->list[i] > this->list[j])
				{
					int aux = this->list[i];
					this->list[i] = this->list[j];
					this->list[j] = aux;
				}
	}

	else {

		for (i = 0; i < this->nrelem - 1; i++)
			for (j = i + 1; j < this->nrelem; j++)
				if (this->list[i] < this->list[j])
				{
					int aux = this->list[i];
					this->list[i] = this->list[j];
					this->list[j] = aux;
				}

	}

}

void Sort::BubbleSort(bool ascendent) {
	int i, j;
	if (ascendent == true) {
		for (i = 0; i < this->nrelem - 1; i++)
			for (j = 0; j < this->nrelem-1; j++)
				if (this->list[j] > this->list[j+1])
				{
					int aux = this->list[j+1];
					this->list[j+1] = this->list[j];
					this->list[j] = aux;
				}
	}

	else {
		for (i = 0; i < this->nrelem - 1; i++)
			for (j = 0; j < this->nrelem - 1; j++)
				if (this->list[j] < this->list[j+1])
				{
					int aux = this->list[j+1];
					this->list[j+1] = this->list[j];
					this->list[j] = aux;
				}
	}


}


void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partitie(int v[], int low, int high)
{
	int pivot = v[high]; // pivot
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{

		if (v[j] < pivot)
		{
			i++;
			swap(&v[i], &v[j]);
		}
	}
	swap(&v[i + 1], &v[high]);
	return (i + 1);
}

void quickSort(int v[], int low, int high)
{
	if (low < high)
	{
		int pi = partitie(v, low, high);
		quickSort(v, low, pi - 1);  // Before pi
		quickSort(v, pi + 1, high); // After pi
	}
}


void Sort::QuickSort(bool ascendent) {
	quickSort(this->list, 0, this->nrelem-1);

	if (ascendent == false) {
		int first = 0 , last= this->nrelem - 1,aux;
		while (first <= last) {
			aux = list[last];
			list[last] = list[first];
			list[first] = aux;
			first++; last--;
		}
	}
}
