/*
You will be given an array a and a value x. All you need to do is check whether the provided array contains the value.
a can contain numbers or strings. x can be either.
Return true if the array contains the value, false if not.
*/

#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
  
  for(std::string one : seq) {
    if(one == elem) {
      return true;
    }
  }
    return false;
}

