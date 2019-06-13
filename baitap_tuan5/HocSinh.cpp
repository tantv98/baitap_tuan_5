#include "HocSinh.h"
#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<string>

HocSinh::HocSinh()
{
	HoTen = "Tran van tan";
	MaHs = "234";
	DiemMon1 = 8;
	DiemMon2 = 9;
	DTB = (DiemMon1 + DiemMon2) / 2;
}

HocSinh::HocSinh(string hoten, string mahs, float diemmon1, float diemmon2)
{
	HoTen = hoten;
	MaHs = mahs;
	DiemMon1 = diemmon1;
	DiemMon2 = diemmon2;
	DTB = (diemmon1 + diemmon2) / 2;
}

HocSinh::~HocSinh()
{
}

void HocSinh::NhapHS()
{
	cout << "Nhap ma hoc sinh: ";
	fflush(stdin);
	getline(cin, MaHs);
	cout << "Nhap ho ten hoc sinh: ";
	fflush(stdin);
	getline(cin, HoTen);
	do
	{
		cout << "Nhap diem mon 1: ";
		cin >> DiemMon1;
		if (DiemMon1 < 0 || DiemMon1>10)
		{
			cout << "Diem khong hop le!" << endl;
		}
	} while (DiemMon1 < 0 || DiemMon1>10);

	do
	{
		cout << "Nhap diem mon 2: ";
		cin >> DiemMon2;
		if (DiemMon2 < 0 || DiemMon2>10)
		{
			cout << "Diem khong hop le!" << endl;
		}
	} while (DiemMon2 < 0 || DiemMon2>10);

	DTB = (DiemMon1 + DiemMon2) / 2;
}
void HocSinh::XuatHS()
{
	cout << "Ma hoc sinh: " << MaHs << endl;
	cout << "Ho ten hoc sinh: " << HoTen << endl;
	cout << "Diem mon 1: " << DiemMon1 << endl;
	cout << "Diem mon 2: " << DiemMon2 << endl;
	cout << "Diem trung binh: " << DTB << endl;
}
int HocSinh::operator>=(HocSinh hs)
{
	if (DTB >= hs.DTB)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int HocSinh::operator<=(HocSinh hs)
{
	if (DTB <= hs.DTB)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int HocSinh::operator==(HocSinh hs)
{
	if (DTB == hs.DTB)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int HocSinh::operator!=(HocSinh hs)
{
	if (DTB != hs.DTB)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int HocSinh::operator<(HocSinh hs)
{
	if (DTB < hs.DTB)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int HocSinh::operator>(HocSinh hs)
{
	if (DTB > hs.DTB)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
