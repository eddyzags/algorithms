// Author : zagabe.ed@gmail.com (Eddy ZAGABE)
//
// This is an implementation of the merge sort algorithm. He's
// represented by the class Msort.
// The merge sort use an algorithm design paradigm based on recursion
// (See README.md for more information)
//
// Average case : O(n log n)
// Worst case space complexity : O(n)

#ifndef MSORT_HH_
#define MSORT_HH_

#include <vector>
#include <cmath> // for floor()

class Msort {
 public:
  // Constructor
  Msort() {}

  // Destructor
  ~Msort() {}

  // Sorting member function that calls the recursive function
  void sort(std::vector<int> &array) {
    Msort::mergeSort(array, 0, array.size() - 1);
  }

 private:
  // Merge two subarrays
  void merge(std::vector<int> &array, int p, int q, int r);

  // Execute the merge sort algorithm recursively
  void mergeSort(std::vector<int> &array, int p, int r);
};

// Merge function
void Msort::merge(std::vector<int> &array, int p, int q, int r) {
  std::vector<int> lowHalf;
  std::vector<int> highHalf;
  int c, cLowHalf, cHighHalf;

  // Set the index to the begining of the entire subarray[p...r]
  c = p;

  // Initialize the low half of the subarray[p...q]
  for (; c <= q; c++) {
    lowHalf.push_back(array[c]);
  }

  // Initialize the high half of the subarray[q + 1...r]
  for (; c <= r; c++) {
    highHalf.push_back(array[c]);
  }

  c = p;
  cLowHalf = 0;
  cHighHalf = 0;

  // Loop that compare the lowHalf and the highHalf and place the
  // item in good order
  for (; cLowHalf < lowHalf.size() && cHighHalf < highHalf.size();) {
    if (lowHalf[cLowHalf] < highHalf[cHighHalf])
      array[c++] = lowHalf[cLowHalf++];
    else
      array[c++] = highHalf[cHighHalf++];
  }

  // Add the rest of the low half part
  for (; cLowHalf < lowHalf.size(); cLowHalf++) {
    array[c++] = lowHalf[cLowHalf];
  }

  // Add the rest of the high half part
  for (; cHighHalf < highHalf.size(); cHighHalf++) {
    array[c++] = highHalf[cHighHalf];
  }
}

// Merge sort's recursive function
void Msort::mergeSort(std::vector<int> &array, int p, int r) {
  int q;

  if (p < r) { // Base case
    q = floor((p + r) / 2); // the result is rounded down
    Msort::mergeSort(array, p, q);
    Msort::mergeSort(array, q + 1, r);
    Msort::merge(array, p, q, r);
  }
}

#endif  // MSORT_HH_
