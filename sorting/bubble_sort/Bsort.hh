// Author: zagabe.ed@gmail.com (Eddy ZAGABE)
//
// Simple implementation of the Bubble sort algorithm
//

#ifndef BSORT_HH_
#define BSORT_HH_

#include <vector>

class Bsort {
 public:
  // Constructor
  Bsort() {}

  // Descrutor
  virtual ~Bsort() {}

  // Return a sorted array using bubble sort algorithm
  void sort(std::vector<int> &array);
};

void Bsort::sort(std::vector<int> &array) {
  int tmp;
  
  if (array.size() <= 1) return;

  for (int i = 0; i < array.size(); i++)
    for (int j = 0; j < array.size() - 1; j++)
      if (array[j] > array[j + 1]) {
        tmp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = tmp;
      }
}

#endif  // BSORT_HH_
