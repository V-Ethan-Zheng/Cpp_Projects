# include <iostream>
using namespace std;

void bubble(int *arr, int length){
    for(int i = 0; i < length; i++){
      for (int j = 0; j < length - i - 1; j++) {
        int *a = &arr[j];
        int *b = &arr[j + 1];
        if (*a > *b) {
          int temp = *a;
          *a = *b;
          *b = temp;
        }
        }
    }
}

void PrintArray(int *arr, int length) {
  for (int i = 0; i < length; i++) {
    cout << arr[i] << endl;
  }
}

int main()
{
  int arr[] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5,};
  int length = sizeof(arr)/sizeof(arr[0]);
  bubble(arr, length);
  PrintArray(arr, length);
  return 0;
}