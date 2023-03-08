// Given 2 integer arrays X and Y of same size. Consider both arrays as vectors
// and print the minimum scalar product (Dot product) of 2 vectors.
#include <iostream>
using namespace std;
int arrymaltiplex(int arr[], int arr2[], int size) {

  int k = 0;
  for (int i = 0; i < size; i++) {
    k += arr[i] * arr2[size - 1 - i];
  }
  return k;
}

int main() {
  int size;
  cin >> size;
  int arr[size];
  int arr2[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < size; i++) {
    cin >> arr2[i];
  }
  cout << arrymaltiplex(arr, arr2, size);
}