#include <stdio.h>
//#include <fcntl.h>

int main(){
  //open test
  int retInt = open("foo.txt");
  printf("--- Open Test ---\nint returned = %d\n\n", retInt);

  //close test
  retInt = close(retInt);
  printf("--- Close Test ----\nint returned = %d\n\n", retInt);

  //read test


  //write test



  return 0;
}
