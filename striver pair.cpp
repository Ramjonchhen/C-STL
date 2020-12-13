#include <bits/stdc++.h>

using namespace std;

void explorePairs() {
  pair<int,int> p1 = {2,3};
  /* to print out the elments we use .first and .second
  */
  cout<<p1.first<<" "<<p1.second<<endl;

  // pair with pair
  pair<int,pair<int,int>> p2 = { 3, { 4, 5 } };

  cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second;

  pair <int,int> arr[] = { {1,2}, {2,3},{3,4} };
  // array having pari as an index
  cout<<arr[0].first;
}

int main() {
  explorePairs();
}
