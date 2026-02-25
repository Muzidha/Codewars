/*
Your team is writing a fancy new text editor and you've been tasked with implementing the line numbering.
Write a function which takes a list of strings and returns each line prepended by the correct number.
The numbering starts at 1. The format is n: string. Notice the colon and space in between.
Examples: (Input --> Output)
[] --> []
["a", "b", "c"] --> ["1: a", "2: b", "3: c"]
*/

#include <string>
#include <vector>

std::vector<std::string> number(const std::vector<std::string> &lines)
{
  std::vector<std::string> result;
  int uru = 1;
  
  for(const std::string& x : lines){
    result.push_back(std::to_string(uru) + ": " + x );
    uru++;
  }
  
  return result;
}