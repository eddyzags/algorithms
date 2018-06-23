// Author : zagabe.ed@gmail.com (Eddy ZAGABE)
//
// This is an implementation of the selection sort algorithm.
// The algorithm is represented by the class named Ssort which takes an
// input as parameter and return an sorted array. No memory space is
// used. (See README.md for more information)
//
// Average case : O(n^2)
// Worst case space complexity : O(1)

#ifndef SSORT_HH_
#define SSORT_HH_

#include <vector>

class Ssort {
 public:
  // Constructor
  Ssort() : minIndex_(0), index_(0) {}
  ~Ssort() {}

  // Sort an array (using selection sort)
  void sort(std::vector<int> &array);

 private:
  // Swap the first and second value in the array
  void swap(std::vector<int> &array, int firstValue, int secondValue);

  // Index to the next element in the sorted subarray to be compared
  int minIndex_;
  
  // Index to the smallest value to be compared with the element at
  // the index minIndex_
  int index_;
};

// Swap two values using one tmp variable
void Ssort::swap(std::vector<int> &array, int firstValue, int secondValue) {
  int tmp;

  tmp = array[firstValue];
  array[firstValue] = array[secondValue];
  array[secondValue] = tmp;
}

// Execute the selection sort algorithm
void Ssort::sort(std::vector<int> &array) {
  int count = 0;

  // Loop until minIndex_ reach the end. (Until the sorted subarray
  // reach the end)
  for (minIndex_ = 0; minIndex_ < array.size(); minIndex_++) {
    count = minIndex_;

    // Loop to find the smallest value
    for (index_ = count + 1; index_ < array.size();) {
      if (array[index_] < array[count]) {
        count = index_;
        index_ = count + 1;
      } else {
        index_++;
      }
    }

    // Once the smallest value is found. We compare it with the
    // minIndex_
    if (array[minIndex_] > array[count]) Ssort::swap(array, minIndex_, count);
  }
}

#endif  // SSORT_HH_
