/*
Given a set of numbers, return the additive inverse of each.
Each positive becomes negatives, and the negatives become positives.
[1, 2, 3, 4, 5] --> [-1, -2, -3, -4, -5]
[1, -2, 3, -4, 5] --> [-1, 2, -3, 4, -5]
[] --> []
*/

#include <vector>

std::vector<int> invert(std::vector<int> values)
{
  for(int& x : values){
    x = -x;
  }
  
  return values;
}