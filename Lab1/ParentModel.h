#pragma once

//абстрактный класс
class ParentModel
{
public:

	virtual void calculate(double arr[][2]) = 0;

	void writeFile(int n, double arr[][2]);
};
