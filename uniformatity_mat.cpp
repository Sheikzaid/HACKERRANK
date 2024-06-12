#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[10][10];
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if ((a[i][j] % 2) == 0)
      {
        count++;
      }
    }
  }
  int count1 = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if ((a[i][j] % 2) != 0)
      {
        count1++;
      }
    }
  }
  if (count == n * n || count1 == n * n)
  {
    cout << "Yes";
  }
  else
  {
    cout << "No";
  }

  return 0;
}
