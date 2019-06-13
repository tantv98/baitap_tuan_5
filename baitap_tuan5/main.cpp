#include "HocSinh.h"
#include<string>
#include <iostream>
using namespace std;

void main()
{
	HocSinh hs1, hs2;

	hs1.NhapHS();
	hs2.NhapHS();

	if (hs1 >= hs2)
	{
		if (hs1 > hs2)
		{
			cout << "Hoc sinh thu 1 co diem trung binh lon hon hoc sinh thu 2" << endl;
		}
		else if (hs1 == hs2)
		{
			cout << "Hoc sinh thu 1 co diem trung binh bang hoc sinh thu 2" << endl;
		}
	}
	else
	{
		cout << "Hoc sinh thu 1 co diem trung binh nho hon hoc sinh thu 2" << endl;
	}
	system("pause");
}