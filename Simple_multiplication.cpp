/*
This kata is about multiplying a given number by eight 
if it is an even number and by nine otherwise.
*/

int simpleMultiplication(int a){
    int hasil;
  
  if ( a % 2 != 0) {
    hasil = a * 9 ;
  } else {
    hasil = a*8;
  }
  
  return hasil;
}