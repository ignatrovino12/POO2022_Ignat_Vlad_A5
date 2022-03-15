#pragma once
class Sort
{
private:
    // add data members
    int *list;
    int nrelem;

public:

    // add constuctors

    Sort(int* vector, int numar_elemente);
    Sort(int numar_elemente, int min_element, int max_element);
    Sort();
    Sort(int count, ...);
    Sort(char* c);

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);
};

