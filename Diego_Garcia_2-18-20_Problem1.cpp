// Calculating descriptive statistics
#include <iostream>
#include <ofstream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

// Calculate the sum of a vector of numbers

float GetSum(std::vector<float> numbers){
  std::cout<<"Getting Sum"<< std::endl;
  float sum = 0;
  for (float x: numbers){
    sum += x;
  }
  return sum;
}

// calculate the mean of a vector of numbers

float GetMean(std::vector<float> numbers, float sum){
  std::cout<<"Getting Mean"<<std::endl;
  float mean=0;
  mean = sum/numbers.size()
  return mean;
}

// calculate the standard deviation of a vector of numbers
float GetSigma(std::vector<float> numbers, float mean){
  float running_sum = 0
  for(float x: numbers){
    running_sum += (x - mean) * (x - mean);
  }
  
  sigma2 = running_sum/( numbers.size() - 1);
  std::cout  <<"Sigma^2 is " << sigma2<< std:: endl;

  //calculating simga now
  float sigma = pow( sigma2, 0.5);
  return sigma;
}

int main (int argc, char *argv[])
{
  
