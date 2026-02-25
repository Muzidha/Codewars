/*
Sentence Smash
Write a function that takes an array of words and smashes them together into a sentence and returns the sentence. You can ignore any need to sanitize words or add punctuation, but you should add spaces between each word. Be careful, there shouldn't be a space at the beginning or the end of the sentence!

Example
['hello', 'world', 'this', 'is', 'great']  =>  'hello world this is great'
Assumptions
You can assume that you are only given words.
You cannot assume the size of the array.
You can assume that you do get an array.
What We're Testing
We're testing basic loops and string manipulation. This is for beginners who are just learning loops and string manipulation.

Disclaimer
This is for beginners so we want to test basic loops and string manipulation.
*/

#include <vector>
#include <string>

std::string smash(const std::vector<std::string>& words)
{ std::string sum;
 
  for(size_t i = 0 ; i < words.size(); ++i){
    sum += words[i];
    if(i+1 < words.size()){
      sum += " ";
    }
  }
   return sum;
}