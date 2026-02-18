/*
Your task is to find the first element of an array that is not consecutive.
By not consecutive we mean not exactly 1 larger than the previous element of the array.
E.g. If we have an array [1,2,3,4,6,7,8] then 1 then 2 then 3 then 4 are all consecutive but 6 is not, so that's the first non-consecutive number.
If the whole array is consecutive then return null2.
The array will always have at least 2 elements1 and all elements will be numbers. The numbers will also all be unique and in ascending order. The numbers could be positive or negative and the first non-consecutive could be either too!

1 Can you write a solution that will return null2 for both [] and [ x ] though? (This is an empty array and one with a single number and is not tested for, but you can write your own example test. )
2

Swift, Ruby and Crystal: nil
Haskell: Nothing
Python, Rust, Scala, Lambda Calculus: None
Julia: nothing
Nim: none(int) (See options)
C++: std::nullopt
*/

#include <optional>
#include <vector>

std::optional<int> firstNonConsecutive(const std::vector<int>& numbers) {
  // Return the first non-consecutive number,
  // or std::nullopt (empty optional) if there is no such number.
  // Also note that you don't have to explicitly wrap a number into an optional, e.g.:
  // `return 1;`
  // -- will be implicitly wrapped into an optional by the compiler.
  
  if (numbers.size() < 2) {
    return std::nullopt;
  } else { 
    for(size_t i = 1 ; i < numbers.size(); i++) {
    if (numbers[i] != numbers[i-1] + 1) {
      return numbers[i];
      }
    }
  }
  
  return std::nullopt;
}