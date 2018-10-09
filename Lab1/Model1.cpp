#include "pch.h"
#include "Model1.h"

void Model1::calculate(double arr[][2])
{
	arr[0][1] = 0;

	for (int i = 1; i < 30; i++)
	{
		arr[i][1] = 0.988 * arr[i - 1][1] + 0.232 * arr[i - 1][0];//реализация первой модели
	}

	writeFile(1, arr); //записываем полученные данные в файл
}