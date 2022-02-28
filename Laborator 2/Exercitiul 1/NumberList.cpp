#include "NumberList.h"
#include <stdlib.h>
#include <stdio.h>

void NumberList::Init() {
    this->count = 0;

}

bool NumberList::Add(int x) {

    if (this->count >= 10) return false;

    else {
        this->numbers[this->count] = x;
        this->count++;
    }

}

void NumberList::Sort() {
    int i, j, aux;
    for (i = 0; i < this->count; i++)
        for (j = i + 1; j < this->count; j++)
            if (this->numbers[i] > this->numbers[j])
            {
                aux = this->numbers[i];
                this->numbers[i] = this->numbers[j];
                this->numbers[j] = aux;
            }

}

void NumberList::Print() {
    int i;
    for (i = 0; i < this->count; i++) printf(" %d", this->numbers[i]);

}