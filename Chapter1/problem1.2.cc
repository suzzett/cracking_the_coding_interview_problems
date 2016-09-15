/**
** Implement a function void reverse (char* str) in C or C++ which reverses a null-terminated string
**/

//#include<iostream>
#include "stdio.h"
void reverse(char* str);

int main()
{
  char str[] = "This is a test string!";
  reverse(str);
  //std::cout << str << std::endl;
  printf("%s\n", str);
}

void reverse(char* str)
{
  char* endOfStr = str;
  char currChar;
  while (*endOfStr)
  {
    endOfStr++;
  }
  endOfStr--;
  while (str < endOfStr)
  {
    currChar = *str;
    *str = *endOfStr;
    str++;
    *endOfStr = currChar;
    endOfStr--;
  }
}
