// Author : zagabe.ed@gmail.com (Eddy ZAGABE)
//
// This is an implementation of the selection sort algorithm. The
// algorithm is represented by the class named Isort. The member
// function sort take an input as parameter and return an sorted
// array. (See README.md for more information)
//
// Average case : O(n^2)
// Worst case space complexity : O(1)

#ifndef ISORT_HH_
#define ISORT_HH_

#include <vector>

class Isort {
 public:
  // Constructor
  Isort() : key_(0) {}

  // Destructor
  ~Isort() {}

  // Function member that executes the sorting algorithm
  void sort(std::vector<int> &array);

 private:
  // The index of the key_ to be compared with all the elements to its
  // left.
  int key_;

  // Insert values in the array
  void insert(const int index, std::vector<int> &array);
};

// Insert the value at index - 1 to index
void Isort::insert(const int index, std::vector<int> &array) {
  array[index] = array[index - 1];
  array[index - 1] = key_;
}

// Sort an array using insertion sort algorithm
void Isort::sort(std::vector<int> &array) {
  int count;
  int rightOfCount;

  // Loop until the count reached the end of the array
  for (count = 1; count < array.size(); count++) {

    // Assignment of the key
    key_ = array[count];

    // Insert repeatedly the key_ with the values in the sorted
    // subarray until the key_ is bigger than the value
    for (rightOfCount = count - 1;
         key_ < array[rightOfCount] && rightOfCount >= 0; rightOfCount--) {
      Isort::insert(rightOfCount + 1, array);
    }
  }
}

#endif  // ISORT_HH_
