#include<iostream>
#include<cmath>
using namespace std;
int fac(int n)
{
  int i=1;
  int f=1;
  while (i<=n) 
  {
     f = f*i;
     i = i+1;
  }
  return f;
}

int main() {
float i,n,num1,num2,m;
cout << "----------------------------" << endl;
cout << "-       CALCULDORA         -" << endl;
cout << "----------------------------" << endl;
cout << "" << endl;
cout << "que operacion desea realizar?:" << endl;
cout << "1.-multimplicacion" << endl;
cout << "2.-divicion" << endl;
cout << "3.-factorial" << endl;
cout << "Ingrese opcion" << endl;
cin >> n;

if (n==1) {
     cout << "ingrese primer numero:" << endl;
     cin >> num1;
     cout << "ingrese segundo numero:" << endl;
     cin >> num2;
     cout <<"la multiplicacion es:"<< num1*num2 << endl;
     } else {
if (n==2) {
     cout << "ingrese primer numero:" << endl;
     cin >> num1;
     cout << "ingrese segundo numero:" << endl;
     cin >> num2;
     cout << "la divicion es:"<<num1/num2 << endl;
     } else {
if (n==3) {
     cout << "ingrese numero para factorial:" << endl;
     cin >> num1;
     m=fac(num1);
     cout <<"el resultado es:"<<m;
}

}
}

return 0;
}
