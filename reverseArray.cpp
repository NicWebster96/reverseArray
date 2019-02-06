// Created by Nicholas Webster

#include <iostream>
#include <array>

using namespace std;

// Create a function that receives as arguments an int array (by reference)
//  and its size. Reverse the elements in place.
//  Example: Before: 1 2 3 4 After: 4 3 2 1

void reverseArray(int arr[], int size) {
  int tmp;
  for(int i = 0; i < size/2; ++i) {
    tmp = arr[i];
    arr[i] = arr[size-i-1];
    arr[size-i-1] = tmp;
  }
}

void printArray(int arr[], int size) {
  for(int i = 0; i < size; ++i) {
    cout << arr[i] << ' ';
  }
  cout << "\n";
}

int main() {
  const int size = 4;
  int myArray[size] = {1, 2, 3, 4};

  cout << "Before: ";
  printArray(myArray, size);

  reverseArray(myArray, size);
  
  cout << "After: ";
  printArray(myArray, size);

  return 0;
}
