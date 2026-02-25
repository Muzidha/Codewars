/*
Given two integers a and b, which can be positive or negative, find the sum of all the integers between and including them and return it. If the two numbers are equal return a or b.
Note: a and b are not ordered!
Examples (a, b) --> output (explanation)
(1, 0) --> 1 (1 + 0 = 1)
(1, 2) --> 3 (1 + 2 = 3)
(0, 1) --> 1 (0 + 1 = 1)
(1, 1) --> 1 (1 since both are same)
(-1, 0) --> -1 (-1 + 0 = -1)
(-1, 2) --> 2 (-1 + 0 + 1 + 2 = 2)
Your function should only return a number, not the explanation about how you get that number.

*/
#include <iostream>
#include <cmath>


int get_sum(int a, int b)
{
  int awal = (a < b) ? a:b;
  int akhir = (a > b) ? a:b;
  
  int n = akhir - awal + 1 ;
  
  return n * (awal + akhir ) / 2;
}

int main() {
    int p ;
    int q ;

    std::cin >> p ;
    std::cin >> q ;

    get_sum(p, q);

    std::cout << "" << get_sum(p, q) << std::endl;
}