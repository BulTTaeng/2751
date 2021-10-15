#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int N;

  cin >> N;

  int input;  
  vector<int> a;
  for(int i =0; i<N; i++){
    cin >> input;
    a.push_back(input);
  }

  sort(a.begin(), a.end() );

  for(int i =0; i<N; i++){
    cout << a[i] << "\n";
  }

  return 0;
}