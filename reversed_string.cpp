/*Complete the solution so that it reverses the string passed into it.

'world'  =>  'dlrow'
'word'   =>  'drow'
*/

#include <string>
#include <algorithm>

std::string reverseString(const std::string &str)
{
   std::string rev = str;
   std::reverse(rev.begin(), rev.end());
  
    return rev ;
}

/*Cara terbaik
    || ||
    VV VV
*/

#include <algorithm>
#include <string>

std::string reverseString(const std::string& str) {
  return std::string(str.rbegin(), str.rend());
}
