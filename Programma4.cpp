/* dati 2 numeri interi in assegnazione, calcolarne e visualizzarne la somma, la sottrazione (primo e secondo), prodotto, divisione e modulo

#include <iostream>
#include <math.h>
using namespace std;
int main () {
  int a=8, b=7;
  cout << "a =" << a << "b" << b << endl;
  cout << " Calcola somma, sottrazione, moltiplicazione, divisione e modulo dei due interi forniti in assegnazione" << endl;

  cout << "Somma:" << a << "+" << b << "=" << a+b << endl;
  cout << "Differenza:" << a << "-" << b << "=" << a-b << endl;
  cout << "Prodotto:" << a << "*" << b << "=" << a*b << endl;
  cout << "Quoziente:" << a << "/" << b << "=" << a/b << endl;
  cout << "Modulo:" << a << "%" << b << "=" << a%b << endl;

  return 0;
  
}
*/

/* se uso double, devo scriverlo al posto di int di a=5 e b=7. Modulo non posso farlo con double.
Se uso // commento solo nella linea. fare prova a casa
Modulo è il resto della divisione. 5/7 dà resto 5*/