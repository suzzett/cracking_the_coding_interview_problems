/**
** Write a method to replace all space is a string with %20. You may assume that the string
** has sufficient space at the end of the string to hold the additional characters and that
** you are given the true length of the string. (Note: if implementing in Java please use a
** character array so that you can perform this operation in place)
**/

#include<iostream>
std::string replaceAllSpaces(std::string str, int actualSize);
std::string replaceAllSpacesInPlace(std::string str, int actualSize);

int main()
{
  std::string str = "Mr John Smith    ";
  std::cout << replaceAllSpacesInPlace(str, 13) << std::endl;
}

std::string replaceAllSpaces(std::string str, int actualSize)
{
  std::string newStr;
  int spaceCount = 0;
  char currChar;
  for (unsigned int i = 0; i < str.length()-(spaceCount*2); i++)
  {
    currChar = str.at(i);
    if (currChar == ' ')
    {
      spaceCount++;
      newStr += "%20";
    }
    else newStr += currChar;
  }
  return newStr;
}

//In Place
std::string replaceAllSpacesInPlace(std::string str, int actualSize)
{
  char currChar;
  int newPlacePtr = str.length()-1;
  while (actualSize-->0)
  {
    currChar = str.at(actualSize);
    if (currChar == ' ')
    {
      str.at(newPlacePtr--) = '0';
      str.at(newPlacePtr--) = '2';
      str.at(newPlacePtr--) = '%';
    }
    else str.at(newPlacePtr--) = currChar;
  }
  return str;
}
