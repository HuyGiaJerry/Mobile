#include <iostream>
#include <string>
#include <iomanip> // Thêm thu vien setprecision

using namespace std;

class MonHoc
{
	private:
		string tenmon;
		float diemtp, diemthi;
		int sotc;
	public:
		MonHoc();
		~MonHoc();
		void input();
		void output();
		float DTB();
		int SoTC();
};
class SinhVien
{
	private:
		string MaSv, TenSv;
		int SoMH;
		MonHoc *arr;
	public:
		SinhVien();
		~SinhVien();
		friend istream& operator >> (istream& in,SinhVien& a);
		friend ostream& operator << (ostream& out,SinhVien a);
		float DTK();
};
MonHoc::MonHoc(){};
MonHoc::~MonHoc(){};
void MonHoc::input()
{
	cout << "nhap ten mon: ";
	cin.ignore();
	getline(cin,tenmon);
	cout << "nhap diem thanh phan: ";
	cin >> diemtp;
	cout << "nhap diem thi: ";
	cin >> diemthi;
	cout << "nhap so tin chi: ";
	cin >> sotc;
}
void MonHoc::output()
{
	cout << tenmon << " " << diemtp << " " << diemthi << " " <<  sotc << endl;
}
float MonHoc::DTB()
{
	return diemtp*0.3 + diemthi*0.7;
}
int MonHoc::SoTC()
{
	return sotc;
}
SinhVien::SinhVien(){};
SinhVien::~SinhVien()
{
	delete[] arr;
}
istream& operator >> (istream& in,SinhVien& a)
{
	a.arr = new MonHoc[a.SoMH];
	cout << "nhap ma sinh vien: ";
	getline(in,a.MaSv);
	cout << "nhap ten sinh vien: ";
	getline(in,a.TenSv);
	cout << "nhap so mon hoc: ";
	in >> a.SoMH;
	in.ignore();
	for( int i = 0; i < a.SoMH ; i++)
	{
		cout << "nhap thong tin mon hoc thu " << i+1 << endl;
		a.arr[i].input();
	}
	return in;
}
ostream& operator << (ostream& out,SinhVien a)
{
	cout << a.MaSv << " " << a.TenSv << endl;
	for(int i = 0 ; i < a.SoMH; i++)
	{
		cout << " thong tin mon hoc thu " << i+1 << endl;
		a.arr[i].output();
	}
    return out;
}
//float SinhVien::DTK()
//{
//	float sum_DTB = 0;
//	float sum_SoTC = 0;
//	for(int i = 0; i < SoMH; i++)
//	{
//		sum_DTB += arr[i].DTB() + arr[i].SoTC();
//		sum_SoTC += arr[i].SoTC(); 
//	}
//	return sum_DTB / sum_SoTC;
//}
int main()
{
	SinhVien sv;
	cout << "nhap thong tin sinh vien: " << endl;
	cin >> sv;
	cout << "thong tin sinh vien: " << sv << endl;
//	cout << "Diem trung binh tong ket cua sinh vien: " << fixed << setprecision(2) << sv.DTK() << endl;
	return 0;
}