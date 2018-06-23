// Author : zagabe.ed@gmail.com (Eddy ZAGABE)
//
// This is an implementation of the Quicksort algorithm. The algorithm
// is represented by the class Qsort and will execute recursively (See
// README.md for more information)
//
// Average case : O(n log n)

#ifndef QSORT_HH_
#define QSORT_HH_

#include <vector>

class Qsort {
 public:
  // Constructor
  Qsort() {}

  // Destructor
  ~Qsort() {}

  // Sorting member function that calls the recursive function
  void sort(std::vector<int> &array) {
    Qsort::quickSort(array, 0, array.size() - 1);
  }

 private:
  // Return the new index of the pivot and rearrange the array
  int partition(std::vector<int> &array, int p, int r);

  // Swap the first and the second value in the array
  void swap(std::vector<int> &array, int first, int second);

  // Sort an array (using Quick sort algorithm)
  void quickSort(std::vector<int> &array, int p, int r);
};

// Swap two elements (first and second) in the array
void Qsort::swap(std::vector<int> &array, int first, int second) {
  int tmp;

  tmp = array[first];
  array[first] = array[second];
  array[second] = tmp;
}

// Rearrange the array :
// All elements that are less than or equal to the pivot are to its
// left and the rest, to its right. The new position of the pivot is
// returned
int Qsort::partition(std::vector<int> &array, int p, int r) {
  int j, q;

  // Start from the begining of the subarray
  j = p;
  q = p;

  // Loop until the end of the subarray and swap the element if they
  // are less than or equal to the privot ('r' which is the right most
  // element in the array)
  for (; j < r; j++) {
    if (array[j] <= array[r])
      Qsort::swap(array, j, q++);
  }

  // Once the array is rearrange, swap the pivot (r) to the right
  // place (q)
  Qsort::swap(array, r, q);
  return q;
}

// Recursive function that execute the algorithm
void Qsort::quickSort(std::vector<int> &array, int p, int r) {
  int q;

  if (p < r) { // Base case
    // Rearrange the array depending upon the pivot (right mose
    // element in the array)
    q = Qsort::partition(array, p, r);

    // Reproduce the same procedure with the two subarrays (pivot
    // excluded)
    Qsort::quickSort(array, p, q - 1);
    Qsort::quickSort(array, q + 1, r);
  }
}

#endif  // QSORT_HH_
