// Author : zagabe.ed@gmail.com (Eddy ZAGABE)
//
// This is an implementation of the binary search which is an
// algorithm for finding an item from an ordered list. The algorithm
// is represented by the class Bsearch.
// The idea is that the algorithm will guess the value (always the
// middle of the array or subarray) and remove a half if the value is
// not in it.
//
// Average case : O(log n)
//

#ifndef BSEARCH_HH_
#define BSEARCH_HH_

#include <cmath>
#include <vector>

class Bsearch {
 public:
  // Constructor
  Bsearch() : min_(0), max_(0), guessLimit_(0) {}

  // Destructor
  ~Bsearch () {}

  // Return true if the value is in the array (using Binary search
  // algorithm)
  bool search(const std::vector<int> &array, const int value);

  // Return the maximum number of guess in a given array
  int getMaxGuess(const std::vector<int> &array);

 private:
  // Index of the minimum and maximum in the array or subarray
  int min_;
  int max_;

  // Max guess
  int guessLimit_;
};

// Return the maximum number of guess
int Bsearch::getMaxGuess(const std::vector<int> &array) {
  if (array.size() % 2 == 0) {
    return log2(array.size());
  } else {
    return log2(array.size() + 1);
  }
}

// Implementation of the binary search
bool Bsearch::search(const std::vector<int> &array, const int value) {
  int count, guess;

  min_ = 0;
  max_ = array.size() - 1;
  guessLimit_ = Bsearch::getMaxGuess(array);

  // Compare if the guessed value is less, equal or higher than the
  // disered value. If it is not equal, discard the half of the array
  // where the disered value is not in it. 
  for (count = 0; count < guessLimit_; count++) {
    
    // Compute the middle of the array
    guess = (min_ + max_) / 2;

    // Compare the guessed value
    if (array[guess] == value) {
      return true;
    } else if (array[guess] > value) {
      max_ = guess - 1;
    } else {
      min_ = guess + 1;
      max_ = array.size() - 1;
    }
  }
  return false;
}

#endif  // BSEARCH_HH_
