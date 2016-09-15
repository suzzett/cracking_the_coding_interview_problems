/**
** Given two strings, write a method to device if one is a permutation of the other.
**/

#include<iostream>
#include<unordered_map>

bool isPermutationOf(std::string str1, std::string str2);
int main()
{
  std::string str1 = "hello";
  std::string str2 = "hlloe";
  std::cout << str1 << " is " << ((isPermutationOf(str1, str2))?"":"not ") << "permutation of " << str2 << std::endl;
}

bool isPermutationOf(std::string str1, std::string str2)
{
  if (str1.length() != str2.length()) return false;
  std::unordered_map<char, int> str1Map, str2Map;
  for (unsigned int i = 0; i < str1.size(); i++) str1Map[str1[i]]++;
  for (unsigned int i = 0; i < str2.size(); i++) str2Map[str2[i]]++;
  for (auto it = str1Map.begin(); it != str1Map.end(); it++) if (it->second != str2Map[it->first]) return false;
  return true;
}
