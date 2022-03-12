#include <iostream>
#include "Math.h"
using namespace std;

int main()
{ 
	Math m;
	printf("%d\n",m.Add(10,20));
	printf("%f\n",(double)m.Add(1000000.0,20000000.0));
	printf("%d\n",m.Add(30,40,50));
	printf("%d\n",m.Mul(30,40));
	printf("%f\n", (double)m.Mul(10000.0, 200000.0));
	printf("%d\n",m.Mul(3,4,5));
	printf("%d\n",m.Add(4, 100, 200, 300, 400));
	

	cout << m.Add("ala", "bala");
  
}
