#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  cin >> n;
  int a[10][10];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  }
  for (int j = 0; j < n; j++)
  {
    for (int i = 0; i < n; i++)
    {
      while (i <= j)
      {
        i++;
      }
      if (a[i][j] != 0 && i < n)
      {
        cout << "Not an Upper triangular matrix";
        return 0;
      }
    }
  }
  cout << "Upper triangular matrix";
  return 0;
}
