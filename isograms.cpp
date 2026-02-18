/*
An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram.
Assume the empty string is an isogram. Ignore letter case.
Example: (Input --> Output)
"Dermatoglyphics" --> true
"aba" --> false
"moOse" --> false (ignore letter case)
*/

#include <string>
#include <cctype>

bool is_isogram(const std::string& str)
{
    int N = str.size();
 
      for(int i = 0; i < N ; i++){
        for(int j = i + 1; j < N ; j++){
          if(std::tolower(str[j]) == std::tolower(str[i])){
            return false;
          }
        }
      }
 return true;     
}