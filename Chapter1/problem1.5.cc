/**
** Implement a method to perform basic string compression using the counts of repeated
** characters. For example, the string aabcccccaaa would become a2b1c5a3. If the "compressed"
** string would not become smaller than the original string, your method should return the
** original string. You can assume the string has only upper and lower case letters.
**/

#include<iostream>
#include<sstream>

std::string compress(std::string str);
int main()
{
  std::string str = "aabccde";
  std::cout << "'" << str << "' is compressed to: " << compress(str) << std::endl;
}

std::string compress(std::string str)
{
  char currChar;
  std::stringstream ss;
  for (unsigned int i = 0; i < str.length(); i)
  {
    currChar = str.at(i);
    int currCharCount = 0;
    ss << currChar;
    while (i < str.length() && currChar == str.at(i))
    {
      currCharCount++;
      i++;
    }
    ss << currCharCount;
  }
  std::string compressedStr = ss.str();
  return compressedStr.length()< str.length()?compressedStr:str;
}
