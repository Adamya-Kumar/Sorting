/* Q 11.  Given an unsorted array of integers, design an algorithm and implement it using a program to sort 
an array of elements by partitioning the array into two subarrays based on a pivot element such
that one of the sub array holds values smaller than the pivot element while another subarray 
holds values greater than the pivot element. Pivot element should be selected randomly from the 
array. Your program should also find number of comparisons and swaps required for sorting the
array */

#include <iostream>
using namespace std;
int swaps = 0, comparisions = 0;

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to print the array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// function to rearrange array (find the partition point)
int partition(int array[], int low, int high) {
    
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
        comparisions++;
    if (array[j] <= pivot) {
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
      swaps++;
    }
  }
  
  // swap pivot with the greater element at i
  swap(&array[i + 1], &array[high]);
  swaps++;
  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
      
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on righ of pivot
    int pi = partition(array, low, high);

    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);

    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

// Driver code
int main() {
  cout<<"AJAY GOSWAMI --> F --> 20011502"<<endl;
  cout<<"Question 11"<<endl;
  // int data[] = {8, 7, 6, 1, 0, 9, 2};
  int data[] = {23 ,65 ,21 ,76 ,46 ,89 ,45 ,32 };
  int n = sizeof(data) / sizeof(data[0]);
  
  cout << "Unsorted Array: \n";
  printArray(data, n);
  
  // perform quicksort on data
  quickSort(data, 0, n - 1);
  
  cout << "Sorted array in ascending order: \n";
  printArray(data, n);
  cout<<"Number of swaps :"<<swaps << endl;
  cout<<"Number of comparisions :"<<comparisions << endl;
}