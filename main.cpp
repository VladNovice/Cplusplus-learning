#include <iostream>

using namespace std;

int main() {
   const int ROWs = 3;
   const int COLs = 4;

   int arr[ROWs][COLs];

   for (int i = 0; i < ROWs; i++) {
      for (int j = 0; j < COLs; j++) {
         arr[i][j] = rand() % 10;
      }
   }


   for (int i = 0; i < ROWs; i++) 
   {
      for (int j = 0; j < COLs; j++)
   {
      cout << arr[i][j] << "\t";
   }

   cout << endl;

   }
}