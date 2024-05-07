#include <iostream>
using namespace std;

void swapnumbers(int* A, int* B){
  int numbers = *A;
  *A = *B;
  *B = numbers;

}

int main(){
  int varA = 25;
  int varB = 100;

  cout << "varA before swap:" << varA << endl;
  cout << "varB before swap:"<< varB <<endl;

  swapnumbers(&varA, &varB);

  cout << "varA after swap:"<< varA << endl;
  cout<<"varB after swap:" << varB << endl;

  return 0;
}