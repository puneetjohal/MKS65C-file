#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
  //open test
  int retIntFoo = open("foo.txt", O_RDONLY); //read only
  printf("--- Open Test ---\nint returned when opening foo = %d\n", retIntFoo);
  int retIntWoo = open("woo.txt", O_WRONLY); //write only
  printf("int returned when opening woo = %d\n", retIntWoo);
  int retIntMoo = open("moo.txt",  O_CREAT | O_RDWR); //read and write, create
  printf("int returned when creating and opening moo = %d\n\n", retIntMoo);

  //write test
  int numWrote = write(retIntWoo,"Hello World\n",12);
  printf("called write on retIntWoo and %d bytes were written\n",numWrote);

  close(retIntWoo);
  retIntWoo=open("woo.txt", O_RDONLY);

  //read test
  char buf[13];
  int numRead= read(retIntWoo,buf,12);
  printf("called read on retIntWoo and %d bytes were read\n",numRead);
  buf[12]='\0';
  printf("Contents Read:%s\n",buf);


  //close test
  retIntFoo = close(retIntFoo);
  printf("--- Close Test ----\nint returned when closing foo = %d\n", retIntFoo);
  retIntWoo = close(retIntWoo);
  printf("int returned when closing woo = %d\n", retIntWoo);
  retIntMoo = close(retIntMoo);
  printf("int returned when closing moo = %d\n\n", retIntMoo);

  return 0;
}
