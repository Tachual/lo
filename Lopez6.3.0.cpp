#include <time.h>
#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
 system("color 04");

  srand(time(NULL));
  int numAleatorio;
   numAleatorio=rand()%100;

   cout<<"El numero aleatorio es: "<<numAleatorio;





 return 0;
 }
