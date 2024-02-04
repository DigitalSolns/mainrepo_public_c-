#include <iostream>
using namespace std;

int main() {

  // declare an int pointer
  int* pointInt;
  int* vptr;

  // declare a float pointer
  //a ptr
  float* pointFloat;

  // dynamically allocate memory
  pointInt = new int;
  pointFloat = new float;

  // assigning value to the memory
  *pointInt = 45;
  *pointFloat = 45.45f;

  cout << *pointInt << endl;
  cout << *pointFloat << endl;

  // deallocate the memory
  delete pointInt;
  delete pointFloat;

  return 0;
}
