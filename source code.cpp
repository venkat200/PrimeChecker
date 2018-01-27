#include<iostream.h>

void main()
{
 int a,count=0;
 cout<<"enter number to check whether it is prime or composite :";
 cin>>a;
 
  for(int i=1;i<=a;i++}
  {
    if(a%i==0)
    count++;
  }
 
  if(count==2)
  cout<<"number is prime";
 else
  cout<<"number is composite";
}

