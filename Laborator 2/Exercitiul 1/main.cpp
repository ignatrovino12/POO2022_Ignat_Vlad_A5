#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "NumberList.h"
using namespace std;

int main() {

	NumberList nl;
	nl.Init();
	nl.Add(3);
	nl.Add(2);
	nl.Add(4);
	nl.Add(5);
	nl.Add(3);
	nl.Add(20);
	nl.Add(-4);
	nl.Add(35);
	
	nl.Sort();
	nl.Print();


}