#include <iostream>
using namespace std;

int main() 
{

  int n, rn = 0, r;

  cout << "Enter an integer: ";
  cin >> n;

  while(n != 0) 
  {
    r = n % 10;
    rn = rn * 10 + r;
    n /= 10;
  }

  cout << "Reversed Number = " << rn;

  return 0;
}