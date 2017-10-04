#include "dathuc.h"
#include <iostream>
using namespace std;
int main()
{
	Dathuc A(0);
	Dathuc B(0);
	Dathuc C(0);
    A.Nhap();
    B.Nhap();
   // B.Xuat();
    //C.Tong(A, B);
    //C.Hieu(A,B);
   // C.Xuat();
    C.Nhan(A,B);
    C.Xuat();
   // cout<< B.Giatri();
	return 0;
}
