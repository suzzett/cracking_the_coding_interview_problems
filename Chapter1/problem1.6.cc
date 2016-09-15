/**
** Given an image represented by an NxN matrix, where each pixel in the image is 4 bytes,
** write a method to rotate the image by 90 degrees. Can you do this in place?
** Sujit Poudel
** Date: 15/09/2016
**/

#include<iostream>
#include<vector>
#include "Functions.h"

typedef std::vector<std::vector<int> > ImageData;

void rotate(ImageData &image);
int main()
{
  std::cout << "---Test 1---" << std::endl;
  ImageData image({{1,2,3,4,17}, {5,6,7,8,18}, {9,10,11,12,19}, {13,14,15,16,20}, {21,22,23,24,25}});
  printVector2D(image);
  rotate(image);
  printVector2D(image);

  std::cout << std::endl << "---Test 2---" << std::endl;
  ImageData image2({{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}});
  printVector2D(image2);
  rotate(image2);
  printVector2D(image2);
}

void rotate(ImageData &image)
{
  int m = image.size();
  int tmp, topLeft, topRight, bottomLeft, bottomRight;
  for (unsigned int i = 0; i < (image.size()/2); i++)
  {
    for (unsigned int j = 0; j < (image[i].size()+1)/2; j++)
    {
      topLeft       = image[i]    [j];
      topRight      = image[j]    [m-i-1];
      bottomRight   = image[m-i-1][m-j-1];
      bottomLeft    = image[m-j-1][i];

      image[j][m-i-1]       = topLeft;
      image[i][j]           = bottomLeft;
      image[m-j-1][i]       = bottomRight;
      image[m-i-1][m-j-1]   = topRight;
    }
  }
}

#include "Functions.cc"
