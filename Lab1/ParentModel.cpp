#include "pch.h"
#include "ParentModel.h"
#include <fstream>
#include <string>

using namespace std;

void ParentModel::writeFile(int n, double arr[][2])
{
	string filename = "Model " + to_string(n) + " calculations.txt";
	ofstream fout(filename);

	fout << "Время\t" << "Вх. t\t" << "Вых. t\t";
	fout << endl;

	for(int i = 0; i < 30; i++)
	{
		fout << i << "\t" << arr[i][0] << "\t" << arr[i][1];
		fout << endl;
	}
	fout.close();
}