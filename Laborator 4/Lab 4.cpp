#include "Sort.h"
#include <iostream>
#include <stdlib.h>

int main()
{
	int v[5] = {5,3,4,1,2 };
	Sort s1(v, 5);
	Sort s2(10, 10, 100);
	Sort s3;
	Sort s4(6, 7, 6, 3, 10, 2, 1);
	char c[] = "21.13,14 15    23";
	Sort s5(c);

	printf("Nr elemente:%d\n", s1.GetElementsCount());
	printf("Elementul cu indicele 3 este %d\n", s1.GetElementFromIndex(3));

	printf("\nS1:\n");
	s1.Print();

	printf("INSERTSORT:\n");
	s1.InsertSort(true);
	s1.Print();
	s1.InsertSort(false);
	s1.Print();
	printf("BUBBLESORT:\n");
	s1.BubbleSort(true);
	s1.Print();
	s1.BubbleSort(false);
	s1.Print();
	printf("QUICKSORT:\n");
	s1.QuickSort(true);
	s1.Print();
	s1.QuickSort(false);
	s1.Print();

	printf("\nS2:\n");
	s2.Print();
	
	s2.InsertSort(true);
	s2.Print();

	printf("\nS3:\n");
	s3.Print();

	s3.InsertSort(true);
	s3.Print();
	
	printf("\nS4:\n");
	s4.Print();

	s4.InsertSort(true);
	s4.Print();

	printf("\nS5:\n");
	s5.Print();

	s5.InsertSort(true);
	s5.Print();


	


}

