#include "pch.h"
#include "Model1.h"
#include "Model2.h"
#include <iostream>

using namespace std;

int main()
{
	Model1 model1;
	Model2 model2;

	double startTemperature = 0;
	double arr[30][2] = { 0 };

	cout << "Enter the initial temperature: " << endl;
	cin >> startTemperature;

	//задаем температуру на входе с шагом 1
	for (int i = 0; i < 30; i++)
	{
		arr[i][0] = startTemperature;
		startTemperature++;
	}

	model1.calculate(arr);
	model2.calculate(arr);

	return 0;
}