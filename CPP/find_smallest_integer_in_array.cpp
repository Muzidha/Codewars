/*
Given an array of integers your solution should find the smallest integer.
For example:
Given [34, 15, 88, 2] your solution will return 2
Given [34, -345, -1, 100] your solution will return -345
You can assume, for the purpose of this kata, that the supplied array will not be empty.
*/

#include <vector>

using namespace std; 

int findSmallest(vector <int> list)
{
  int small = list[0];
  
  for(int x : list) {
    if(x < small ) {
      small = x;
    }
  }
  
  return small ;
}

//terbaik

#include <algorithm>
#include <vector>

int findSmallest(const std::vector<int>& xs) {
  return *std::min_element(xs.cbegin(), xs.cend());
}