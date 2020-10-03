#include <stdio.h>
#include <algorithm>
#include <assert.h>
#include <set>
#include <map>
#include <complex>
#include <iostream>
#include <time.h>
#include <stack>
#include <stdlib.h>
#include <memory.h>
#include <bitset>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
#include <vector>

using namespace std;

const int MaxN = 1e5 + 10;
const int MOD = 1e9 + 7;
const int INF = 1e9;

int main() {
//  freopen("input.txt", "r", stdin);
  int a[3], b[3];
  for (int i = 0; i < 3; ++i) {
    cin >> a[i];
  }
  int c1 = 0, c2 = 0;
  for (int i = 0; i < 3; ++i) {
    cin >> b[i];
    if (a[i] > b[i]) c1++;
    else if (a[i] < b[i]) c2++;
  }
  cout << c1 << ' ' << c2 << endl;
  return 0;
}
