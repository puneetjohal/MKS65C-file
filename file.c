#include <stdio.h>
#include <fcntl.h>

int main(){
  //open test
  int retIntFoo = open("foo.txt");
  printf("--- Open Test ---\nint returned when opening foo = %d\n", retIntFoo);
  int retIntWoo = open("woo.txt");
  printf("int returned when opening woo = %d\n\n", retIntWoo);

  //read test


  //write test



  //close test
  retIntFoo = close(retIntFoo);
  printf("--- Close Test ----\nint returned when closing foo= %d\n", retIntFoo);
  retIntWoo = close(retIntWoo);
  printf("int returned when closing woo = %d\n\n", retIntWoo);

  return 0;
}
