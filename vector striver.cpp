#include <bits/stdc++.h>

using namespace std;

void exploreVectors() {
  vector <int> v1;
  // empty vector
   
  v1.push_back(1); //{1}
  v1.emplace_back(2); //{1,2}

  vector <pair<int,int>> pairvector;
  pairvector.push_back({1,2});
  pairvector.emplace_back(3,4);

  // emplace back can push the elements without
  // curly braces incase of pairs

  // vector of size 5 with every element 100
  vector<int> v3(5,100);
  // {100,100,100,100,100}

  // a vector of size 5 
  // initialize with 0
  // might be some garbage value in case of some commpiler

  vector<int> vv(5);
  //{0,0,0,0,0}

  // inherting while defining
  vector<int> vvv(5,20);
  // {20,20,20,20,20}
  vector<int> inherit(vvv);
  // {20,20,20,20,20}
  // inherit will be same as vvv 
  // similar to inheriting

  // iterators 
  // v1 = {100,100,100,100,100}
  vector<int>::iterator i1 = v3.begin();
  i1++;
  i1 = v3.end();

  /*  
  v3.end()  doesn't means the last elements address
  it means the memory address after the last element
  */

  // for not allowing to do it++ 
  // we have to use cbegin();
  //vector<int>::iterator ii1  = vv.cbegin();

  // ways to pring the vector
  cout<<endl;
  for( auto iii = inherit.begin(); iii != inherit.end(); iii++) {
    cout<<*iii<<" ";
  }
  cout<<endl;

  for( auto print: inherit ) {
    cout<<print<<" ";
  }
  cout<<endl;

  // erasing the element in vector
  // .erase() takes iterator and deletes the iterator element

  // {20,20,20,20,20}
  inherit.erase(inherit.begin());
  // now after earse {20,20,20,20}

  // also  we can move the iterator for erasing
  inherit.erase(inherit.begin()+2);

  cout<<"After erasing:"<<endl;
   for( auto print: inherit ) {
    cout<<print<<" ";
  }
  cout<<endl;

  // erasing a range 
  // we can erase a range in vector also using .erase()
  inherit.erase(inherit.begin()+1, inherit.begin()+2);
  // it will erase the element from being()+1 to (begin() + 2 ) -1
  // it will not erase begin() + 2 but erase below it

  vector<int> w(2,100); // {100,100}
  w.insert(w.begin(),300); // {300,100,100}
  // inserting multiple elements
  w.insert(w.begin()+1,2,10);
  // inserting two 10 after beginging {300,10,10,100,100}

  // inserting vector in vector using insert
  vector<int> copy(2,50);
  w.insert(w.begin(),copy.begin(),copy.end());
  // {50,50,300,10,10,100,100}

  // knowing the size of the vector
  cout<<endl<<"Size of w: "<<w.size();

  // poping the last element from the vector
  w.pop_back();

  // we can swap two arrays using .swap()
  // v1.swap(v2)

  // to clear the whole vector we use
  w.clear();

  // and to check whether the vector is empty or not 
  cout<<endl<<w.empty();

}

int main() {
  exploreVectors();
}
