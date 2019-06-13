#pragma once
#include <iostream>
using namespace std;
#include<string>

class HocSinh
{
private:
	string MaHs;
	string HoTen;
	float DiemMon1;
	float DiemMon2;
	float DTB;
public:
	void NhapHS();
	void XuatHS();
	int operator>=(HocSinh);
	int operator<=(HocSinh);
	int operator==(HocSinh);
	int operator!=(HocSinh);
	int operator<(HocSinh);
	int operator>(HocSinh);
	HocSinh();
	HocSinh(string hoten, string mahs, float diemmon1, float diemmon2);
	~HocSinh();
};

