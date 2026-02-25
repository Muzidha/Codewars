/*
You will be given an array of numbers. You have to
sort the odd numbers in ascending order while leaving the even numbers at their original positions.

Examples
[7, 1]  =>  [1, 7]
[5, 8, 6, 3, 4]  =>  [3, 8, 6, 5, 4]
[9, 8, 7, 6, 5, 4, 3, 2, 1, 0]  =>  [1, 8, 3, 6, 5, 4, 7, 2, 9, 0]
*/

#include <algorithm>

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
      std::vector<int> ganjil;
      
      for(int x : array){
        if(x % 2 != 0) {
          ganjil.push_back(x);
        }
      }
      
      std::sort(ganjil.begin(), ganjil.end());
      
      int tempat = 0;
      for(int& x : array){
        if(x % 2 != 0 ) {
          x = ganjil[tempat++];
        }
      }
        return array;
    }
};