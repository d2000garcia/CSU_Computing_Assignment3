
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

class FourVector {
    float E, px, py, pz;
  public:
  FourVector(float, float, float, float);
  void SetFourVector (float, float, float, float);
  float GetMass (){
    return (pow(pow(E,2)-pow(px, 2)-pow(py,2)-pow(pz,2)), 0.5);
  }
  float GetEta (){
    float ratio  = pow((pow(px, 2)+pow(py,2)+pow(pz,2)), 2);
    ratio = acos(pz/ratio);
    float eta = - log( tan(ratio/2));
    return eta;
  }
  float DeltaPhi;
  float DeltaEta;
};

FourVector::FourVector (float a, float b, float c, float d){
  E = a:
  px = b;
  py = c;
  pz = d;
}


  
