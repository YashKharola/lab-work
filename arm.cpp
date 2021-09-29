#include<iostream>
using namespace std;
void arm(int n);
int main()
{
int n;
cout<<"Enter the number\n";
cin>>n;
arm(int n);
}










void arm(int n)
{
int n,sum=0,r,temp;
temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(sum==temp)
{
cout<<"no. is armstrong number\n";
}
else
{
cout<<"no. is not a armstrong numbeer\n";
}
}

