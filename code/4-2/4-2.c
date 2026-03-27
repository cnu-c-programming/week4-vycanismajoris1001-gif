#include <stdio.h>

int sum (int arr[], int n) {
  int total = 0;
  for (int i=0; i<n; i++) {
    total += arr[i];
  }
  return total;
}

double average (int arr[], int n) {
  int total = 0;
  double avg;
  for (int i=0; i<n; i++) {
    total += arr[i];
    avg = total / n;
  }
  return avg;
}

int max (int arr[], int n) {
  int m = arr[0];
  for (int i=0; i<n; i++) {
    if (arr[i]>m)
      m = arr[i]
}
  return m;
}

int main() {
  int arr[] = {3, 7, 1, 9, 4, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("sum: %d\n", sum(arr, n));
  printf("avg: %.2f\n", average(arr, n));
  printf("max: %d\n", max(arr, n));
  return 0;
}
