#include <iostream>

using namespace std;

int main() {

   cout << "начало цикла" << endl;

   for (int i = 0; i < 6; i++) 
   {
      cout << "переменная i = " << i << endl;

      if (i == 5) {
         break;
      }
      
   }

   return 0; 
}
