
#include <iostream>
using namespace std;
int main () {
  //int a;
  //cout << "a = " << a << endl;
  //il valore della variabile è imprevedibile se non dichiarato.
  //prova a inserire valore definito
  int x = 123;
  cout << "x =" << x << endl;
  //possiamo riassegnare il valore di x;
  //in questo caso non dobbiamo ripetere il tipo di x
  x = 256;
  cout << "x =" << x << endl;
  
  double z = 123.43;
  double y = 180.92;
  cout << "Quoziente = " << z/y << endl;
  //possiamo dichiarare variabili di tipo carattere
  char ch = 'a';
  cout << "Carattere = " << ch << endl;
  ch = '\212';
  cout << "Carattere = " << ch << endl;
  //stampa codice ASCII
  cout << "5" << endl;
  cout << '5' << endl;
  cout << 5 << endl;
  cout << 5. << endl;
  //alla stampa non c'è nessuna differenza
  //invece per C++ sono oggetti distinti.

  //tipologia orario
  int hour, minute;
  char colon;
  hour = 11;
  minute = 59;
  colon = ':';
  cout << "The current time is " << hour << colon << minute << endl;
  
  return 0;
}
