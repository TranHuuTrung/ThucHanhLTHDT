#ifndef DATHUC_H
#define DATHUC_H
#include <iostream>
using namespace std;
class Dathuc{
	private:
		int n;       //khi khong co con tro thi chi can dug ham sao chep mac dinh la du
		double *hs;  //nhung khi co con tro thi phai dung ham sao chep 
		            //tao mang dong de luu cac he so cua da thuc
	public:
		Dathuc(int n);
		Dathuc(const Dathuc &A);
		void Nhap();
		void Xuat();
		void Tong(Dathuc A, Dathuc B);
		void Hieu(Dathuc A, Dathuc B);
		void Nhan(Dathuc A, Dathuc B);
		double Giatri();
		~Dathuc();
			
};




#endif
