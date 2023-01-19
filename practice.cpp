#include <iostream> 
using namespace std;
int a=50;
int c;
int sum(int a , int b);
main()
{
int b=20;
c=0;
c=sum(a,b);
int a=10;
cout << "a= " << a << endl;
cout << "b= " << b << endl;
cout << "c= " << c << endl;
}
int sum(int a , int b)
{
cout << "a= " << a << endl;
cout << "b= " << b << endl;
cout << "c= " << c << endl; 
return a+b;
}