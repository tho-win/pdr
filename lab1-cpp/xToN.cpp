/**
Name: Tho Nguyen
Email: tnn7yc@virginia.edu
Date: 9/1/18
File Name: xToN.cpp
*/

#include <iostream>
using namespace std;

int xton(int x, int n){
  int i=1, res= x;
  if (n==0) {
	 return 1;
  }
  res= res*xton(x, n-1);
  return res;
}

int main(){
  int x, n, res;
  cout << "Enter value of x" << endl;
  cin >> x;
  cout << "Enter value of n" << endl;
  cin >> n;
  res= xton(x,n);
  cout <<x<< "^" <<n<< " = " <<res<< endl;
  return 0;
}
