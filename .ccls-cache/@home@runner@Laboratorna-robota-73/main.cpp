#include <iostream>
using namespace std;
int main() {
int A,B;
cout <<"Введіть значення A: ";
  cin>>A;
cout<<"Введіть значення B: ";
cin >> B;
if ((A<0&&B>=0) || (A>=0 && B<0))
  {
  A =-A;
  B =-B;
  }
  else {
  A = 0;
  B = 0;
  }
  cout<<"A= " <<A << endl;
cout <<"B= " << B << endl;
return 0;
}