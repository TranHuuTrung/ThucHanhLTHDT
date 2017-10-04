#include "dathuc.h"
Dathuc::Dathuc(int n)
{
	this->n = n;
	this->hs = new double[n+1];
}
Dathuc::Dathuc(const Dathuc &A)
{
	this->n = A.n;        //gan so bac cua da thuc A cho da thuc moi
	this->hs=new double[A.n+1];   //tao 1 mang dong cho da thuc moi co kich thuoc bang da thuc A
	for(int i=0; i<=A.n; i++)
	{
		this->hs[i] = A.hs[i];  //gan tung he so cua da thuc A cho da thuc moi
	}
}
void Dathuc::Nhap()
{
	do{
		 cout<<"Nhap bac cua da thuc  ";
	     cin>>this->n;
	     if(this->n < 1)
	     {
	     	cout<<"Kiem tra lai! Nhap bac(>=1) ";
	     	cin>>this->n;
	     }
	}while(this->n<1);

	for(int i=this->n; i>=0; i--)
	{
		cout<<"Nhap he so bac "<<i<<" = ";
		cin>>this->hs[i];
	}
}
void Dathuc::Xuat()
{
	if(this->n <=1)
	{
		cout<<this->hs[1]<<" X + ";
		cout<<this->hs[0];
	}
	else 
	{
	    for(int i=this->n; i>1; i--)
        {
    	cout<<this->hs[i]<<" X^"<<i<<" + ";
        }
		cout<<this->hs[1]<<" X + ";
		cout<<this->hs[0];	
	}
    cout<<"\n";
}
void Dathuc::Tong(Dathuc A, Dathuc B)
{ 
    
    if(A.n > B.n ) 
     {
        n = A.n;
        hs = new double[n+1];
     	for(int i=n; i>B.n; i--)
      	{
      		hs[i] = A.hs[i];
    	}
    	for(int i = B.n; i>=0; i--)
    	{
    	  hs[i]=A.hs[i]+B.hs[i];
    	}
     }
     else 
     {
     	n = B.n;
     	for(int i=n; i>A.n; i--)
      	{
	      hs[i] = B.hs[i];
    	}
    	for(int i = A.n; i>=0; i--)
    	{
    		hs[i]=A.hs[i]+B.hs[i];
    	}
     }
     

}
void Dathuc::Hieu(Dathuc A, Dathuc B)
{
	while(A.n != B.n)
	{
		if(A.n > B.n)
		{
			for(int i = B.n+1; i<=A.n; i++) 
			{
				B.n++;
				B.hs[i]=0;
			}
		}
		if(A.n < B.n)
		{
			for(int i = A.n+1; i <= B.n; i++)
			{
				A.n++;
				A.hs[i]=0;
			}
		}
	}
	n=A.n;
	hs = new double[n+1];
	for(int i=n; i>=0; i--) hs[i]=A.hs[i]-B.hs[i];
}
void Dathuc::Nhan(Dathuc A, Dathuc B)
{
	n = A.n + B.n;
	hs = new double[n+1];
	for(int i=0; i<=n; i++)
	{
		hs[i]= 0;
	}
	for(int i=A.n; i>=0; i--)
	{
		for(int j=B.n; j>=0; j--)
		{
			for(int k = n; k>=0; k--)
			{
				if(i+j==k)
				{
					hs[k]+=A.hs[i]*B.hs[j];
				}
			}
		}
	}
}
double Mu(double a, int b){
		double kq=1;
		for(int i=0; i<b; i++)
		{
			kq*=a;
		}
		return kq;
	}
double Dathuc::Giatri()
{
	double x;
	cout<<"Nhap x  = ";
	cin>>x;
	double GT = 0;
	for(int i=this->n; i>=0; i--)
	{
	     GT+=(this->hs[i]*Mu(x,i));
	}
	return GT;
}

Dathuc::~Dathuc()
{	

}






