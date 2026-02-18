/*
Given a string, you have to return a string in which each character (case-sensitive) is repeated once.

Examples (Input -> Output):
* "String"      -> "SSttrriinngg"
* "Hello World" -> "HHeelllloo  WWoorrlldd"
* "1234!_ "     -> "11223344!!__  "
Good Luck!
*/

#include <string>

std::string double_char(const std::string& str)
{
  std::string result = "";
  
  for(char c : str) {
    result += c;
    result += c;
  }
  return result;
}
