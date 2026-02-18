/*
Given an array of integers, return a new array with each value doubled.
For example:

[1, 2, 3] --> [2, 4, 6]
*/

std::vector<int> maps(const std::vector<int> & values) {
  std::vector<int> hasil;
  hasil.reserve(values.size());
  
  for(int x : values) {
    hasil.push_back(x*2);
  }
  
  return hasil;
}