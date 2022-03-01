#include "Class.h"
#include <string.h>
#include <stdio.h>

void Class::Setname(char my_name[100]) { strcpy_s(this->name,100, my_name); }

const char* Class::Getname() { return this->name; }

void Class::Setgrade_en(float value) {this->engrade = value; }

float Class::Getgrade_en() { return this->engrade; }

void Class::Setgrade_hi(float value) { this->higrade = value; }

float Class::Getgrade_hi() { return this->higrade; }

void Class::Setgrade_ma(float value) { this->magrade = value; }

float Class::Getgrade_ma() { return this->magrade; }

float Class::Averagegrade() { return (this->higrade + this->magrade + this->engrade)/3; }