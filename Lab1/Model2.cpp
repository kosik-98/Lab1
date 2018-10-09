#include "pch.h"
#include "Model2.h"
#include <cmath>


void Model2::calculate(double arr[][2])
{
	arr[0][1] = 0;
	arr[1][1] = 0.9 * arr[0][1] + arr[0][0];
	for (int i = 2; i < 30; i++)
	{
		arr[i][1] = 0.9 * arr[i-1][1] - 0.001 * arr[i-2][1] * arr[i-2][1] + arr[i-1][0] + sin(arr[i-2][0]);//реализация второй модели
	}

	writeFile(2, arr); //записываем полученные данные в файл
}