// /* Q 10. Given an unsorted array of integers, design an algorithm and implement it using a program to sort
// an array of elements by dividing the array into two subarrays and combining these subarrays after
// sorting each one of them. Your program should also find number of comparisons and inversions
// during sorting the array.*/

// // Merge sort in C++

// #include <iostream>
// using namespace std;
// int comparisions = 0;
// // Merge two subarrays L and M into arr
// void merge(int arr[], int p, int q, int r) {

//   // Create L ← A[p..q] and M ← A[q+1..r]
//   int n1 = q - p + 1;
//   int n2 = r - q;

//   int L[n1], M[n2];

//   for (int i = 0; i < n1; i++)
//     L[i] = arr[p + i];
//   for (int j = 0; j < n2; j++)
//     M[j] = arr[q + 1 + j];

//   // Maintain current index of sub-arrays and main array
//   int i, j, k;
//   i = 0;
//   j = 0;
//   k = p;

//   // Until we reach either end of either L or M, pick larger among
//   // elements L and M and place them in the correct position at A[p..r]
//   while (i < n1 && j < n2) {
//       comparisions++;
//     if (L[i] <= M[j]) {
//       arr[k] = L[i];
//       i++;
//     } else {
//       arr[k] = M[j];
//       j++;
//     }
//     k++;
//   }

//   // When we run out of elements in either L or M,
//   // pick up the remaining elements and put in A[p..r]
//   while (i < n1) {
//     // comparisions++;
//     arr[k] = L[i];
//     i++;
//     k++;
//   }

//   while (j < n2) {
//     // comparisions++;
//     arr[k] = M[j];
//     j++;
//     k++;
//   }
// }

// // Divide the array into two subarrays, sort them and merge them
// void mergeSort(int arr[], int l, int r) {
//       // comparisions++;
//   if (l < r) {
//     // m is the point where the array is divided into two subarrays
//     int m = l + (r - l) / 2;

//     mergeSort(arr, l, m);
//     mergeSort(arr, m + 1, r);

//     // Merge the sorted subarrays
//     merge(arr, l, m, r);
//   }
// }

// // Print the array
// void printArray(int arr[], int size) {
//   for (int i = 0; i < size; i++)
//     cout << arr[i] << " ";
//   cout << endl;
// }

// // Driver program
// int main() {
//   int arr[] = {21, 32, 34, 46, 51, 54, 65, 76, 78, 97};
//   int size = sizeof(arr) / sizeof(arr[0]);

//   mergeSort(arr, 0, size - 1);

//   cout << "Sorted array: \n";
//   printArray(arr, size);
//   cout<<"\n Number of comparisions :"<<comparisions<<endl;
//   return 0;
// }



// merge sort
#include <iostream>
using namespace std;

int comparisions = 0;
void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
void Merge(int A[], int l, int mid, int h)
{
  int i = l, j = mid + 1, k = l;
  int B[100];

  while (i <= mid && j <= h)
  {
    // comparisions++;
    if (A[i] < A[j])
      B[k++] = A[i++];
    else
      B[k++] = A[j++];
  }
  for (; i <= mid; i++)
    B[k++] = A[i];
  for (; j <= h; j++)
    B[k++] = A[j];

  for (i = l; i <= h; i++)
    A[i] = B[i];
}
void MergeSort(int A[], int l, int h)
{
  comparisions++;
  int mid;
  if (l < h)
  {
    mid = (l + h) / 2;
    MergeSort(A, l, mid);
    MergeSort(A, mid + 1, h);
    Merge(A, l, mid, h);
  }
}
int main()
{
  cout<<"AJAY GOSWAMI --> F --> 20011502"<<endl;
  cout<<"Question 10"<<endl;
  int A[] = {21, 32, 34, 46, 51, 54, 65, 76, 78, 97}, n = 10, i;

  MergeSort(A,0, n);

  for (i = 0; i < 10; i++)
    cout<<A[i]<<" ";
  cout<<"\n";

  cout<<"comparisions :"<<comparisions+1;

  return 0;
}