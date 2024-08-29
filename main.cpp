#include <iostream>

using namespace std;

int main() {
   const int size = 10;
   int arr[size]{5, 65, 32, 76, 988};

   for (int i = 0; i < size; i++) {
      cout << arr[i] << endl; 
   }
}