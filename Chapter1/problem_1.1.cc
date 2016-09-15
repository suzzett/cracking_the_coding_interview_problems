/**
** Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?
**/

#include<iostream>
#include<unordered_map>
#include<limits>

bool hasAllUniqueCharacters(std::string str);
int main()
{
  std::string str = "This is";
  std::cout << "The string '" << str << "'" << ((hasAllUniqueCharacters(str))?"":" does not") << " contain all unique characters." << std::endl;
  return 0;
}

//Using hashtable
//Complexity: O(nlg(n)) because search could take lg(n) every time, and we might have to search for upto n times.
//Note: ln(n) for search is average time complexity. The worst time complexity could easily be n
/*
bool hasAllUniqueCharacters(std::string str)
{
  std::unordered_map<char, bool> readChars;
  for (unsigned int i = 0; i < str.length(); i++)
  {
    if (readChars.find(str.at(i)) != readChars.end()) return false;
    readChars[str.at(i)] = true;
  }
  return true;
}
*/

//If I cannot use any other data structures
//This is clearly O(n^2) solution
bool hasAllUniqueCharacters(std::string str)
{
  for (unsigned int i = 0; i < str.size(); i++)
  {
    for (unsigned int j = i+1; j < str.size(); j++)
    {
      if (str.at(i) == str.at(j)) return false;
    }
  }
  return true;
}
