#include <stdio.h>
#include <fcntl.h>

int main(){
  //open test
  int retIntFoo = open("foo.txt", O_RDONLY); //read only
  printf("--- Open Test ---\nint returned when opening foo = %d\n", retIntFoo);
  int retIntWoo = open("woo.txt", O_WRONLY); //write only
  printf("int returned when opening woo = %d\n", retIntWoo);
  int retIntMoo = open("moo.txt", O_RDWR | O_CREAT); //read and write, create
  printf("int returned when creating and opening moo = %d\n\n", retIntMoo);

  //read test


  //write test


  //close test
  retIntFoo = close(retIntFoo);
  printf("--- Close Test ----\nint returned when closing foo = %d\n", retIntFoo);
  retIntWoo = close(retIntWoo);
  printf("int returned when closing woo = %d\n", retIntWoo);
  retIntMoo = close(retIntMoo);
  printf("int returned when closing moo = %d\n\n", retIntMoo);

  return 0;
}
