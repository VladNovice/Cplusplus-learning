
#include <iostream>

using namespace std;

int dd() {

   cout << "начало цикла" << endl;

   for (int i = 0; i++)
   {
      cout << "переменная i =" << i << endl;

      if (i == 5) {
         break;
      }
      
   }

}