// bai10_tinhdientichhinhchunhat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	cout << "tinh chu vi va dien tich hinh chu nhat\n";
	double dai, rong, dientich, chuvi;
	cout << "nhap chieu dai:"; cin >> dai;
	cout << "nhap chieu rong:"; cin >> rong;
	chuvi = (dai + rong) * 2;
	dientich = dai * rong;
	cout << "chu vi hinh chu nhat la:" << chuvi << endl;
	cout << "dien tich hinh chu nhat la:" << dientich << endl;
	return 0;
}

