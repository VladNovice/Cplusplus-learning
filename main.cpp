#include <iostream>

using namespace std;

int main() {

   cout << "начало цикла" << endl;
   for (int i = 1; i < 5; i++)
   {
      cout << "сработал 1 цикл for, операция №" << i << endl;

      for (int j = 1; j < 5; j++)
      {
         cout << "сработал 2 цикл for итерация №" << j << endl;
      }
   }
   
   return 0; 
}
