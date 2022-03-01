#pragma once
class Class
{
private:
	char name[100];
	float magrade;
	float engrade;
	float higrade;
	float avgrade;

public:

	void Setname(char my_name[100]);

	const char* Getname();

	void Setgrade_en(float value);

	float Getgrade_en();

	void Setgrade_hi(float value);

	float Getgrade_hi();

	void Setgrade_ma(float value);

	float Getgrade_ma();

	float Averagegrade();

};

