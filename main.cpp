#include <iostream>

using namespace std;

int main() {
   int height;
   int width;
   cout << "Задайте ширину для фигуры" << endl;
   cin >> width;
   cout << "Задайте высоту для фигуры" << endl;
   cin >> height;

   for (int indexheight = 0; indexheight < height; indexheight++) {
         cout << "\n" << "*";

      for (int indexwidth = 1; indexwidth < width; indexwidth++) {
      cout << "*";
      }
   }
    cout << endl << endl;
}