#include <iostream>
using namespace std;


bool songuyento(int n)
{
	if (n < 2) return false;
	for(int i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}


int main()
{
	cout << "Hello world!" << endl;
	cout << "Nhap vao mot so nguyen: ";
	int n;
	cin >> n;
	if (songuyento(n))
	{
		cout << n << " la so nguyen to." << endl;
	}
	else
	{
		cout << n << " khong la so nguyen tocc." << endl;
	}
}


//int main()
//{
//	int n, sum = 0;
//	cout << "Nhap vao so luong so nguyen: ";
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		sum += i;
//	}
//	cout << "Tong cac co nguyen tu 0 den" << n - 1 << " la: " << sum << endl;
//	return 0;
//}

//
//int n, a[100];
//cout << "Nhap vao so nguyen duong n: ";
//cin >> n;
//
//for (int i = 0; i < n; i++)
//{
//	cout << "Nhap vao so nguyen thu " << i + 1 << "";
//	cin >> a[i];
//}
//int sum = 0;
//for (int j = 0; j < n; j++)
//{
//	sum += a[j];
//}
//
//cout << "Tong cac so nguyen da nhap la: " << sum << endl;
//return 0;
