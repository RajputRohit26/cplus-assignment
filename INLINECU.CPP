#include<iostream.h>
#include<conio.h>


	    inline int cube(int x)
	    {
		 return x*x*x;
	    }
	    inline int mul(int a,int b)
	    {
		 return a*b;
	    }


int main()
{
     clrscr();
     int num1,num2;
     cout<<"\nEnter Number 1 : ";
     cin>>num1;
     cout<<"Enter Number 2 : ";
     cin>>num2;
     cout<<"\nMul Of : "<<mul(num1,num2);
     cout<<"\n\nEnter Value Of X : ";
     cin>>num1;
     cout<<"cube :"<<cube(num1);
     getch();
}
