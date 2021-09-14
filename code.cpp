#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{ int n1, n2 , n3;
cout<<"Enter 3 (1digit) numbers:";
cin>>n1>>n2>>n3;
if(n1<=9 && n2<=9 && n3<=9)
{
cout<<n1<<n2<<n3<<endl;
cout<<n2<<n3<<n1<<endl;
cout<<n3<<n2<<n1<<endl;
cout<<n1<<n3<<n2<<endl;
cout<<n2<<n1<<n3<<endl;
cout<<n3<<n1<<n2<<endl;
}
else
{cout<<"u didnt enter a 1digit number";

}
return 0;

}
