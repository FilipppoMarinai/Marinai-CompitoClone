/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

Filippo Marinai 30/03/2023
*/

#include <iostream>
using namespace std;
int main()
{
  int i=10 ,n;
  cout<<"Quante volte voi stampare la frase? ";
  cin>>n;
  while (i>n)
  {
   cout<<"Bada come la fuma"<<endl; 
   n++;
  }
  system("pause");
}
