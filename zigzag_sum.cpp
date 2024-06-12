#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n, m;
  cin >> n >> m;
  int a[10][10];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  int sum = 0;

  int i = 0;
  for (int j = 0; j < m; j++)
  {
    sum += a[i][j];
  }
  int b = n - 1;
  for (int j = 0; j < m; j++)
  {
    sum += a[b][j];
  }

  for (int i = 1; i < n - 1; i++)
  {
    for (int j = m - 2; j > 0; j--)
    {
      sum += a[i][j];
    }
  }
  cout << "Sum of Zig-Zag pattern is " << sum;
  return 0;
}
