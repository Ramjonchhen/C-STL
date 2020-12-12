#include <bits/stdc++.h>

using namespace std;

void vectorDemo() {

  vector <int> v1;

  v1.push_back(7);
  v1.push_back(7);
  v1.push_back(7);
  v1.push_back(7);
  v1.push_back(9);
  v1.push_back(10);
  v1.push_back(0);
  v1.push_back(1);

  // sorting the vector
  // sorting takes the NlogN time
  sort(v1.begin(),v1.end());

  // displaying the vecor two way
  // by creating the iterator
  /*
  iterators are like pointers and to 
  access the element we derefernce them
  */
  vector<int>::iterator i1 ;

  for( i1 = v1.begin(); i1 != v1.end(); i1++ ) {
    cout<<*i1<<" ";
  } 
  cout<<endl;

  // anothe way of iteration 
  cout<<"Printing through the int x method\n";
  for(int x: v1 )  {
    cout<<x<<" ";
  }
  cout<<endl;

  /* for modifying the valute of vector
      using int x: method we can use 
      by refrence
  */

  for( int &x: v1 ) {
    x++;
    /*
    any changes made to the x will be applied
    for the respective vector element
    */
  }

  // upper bound and lower bounds
  /*
  upper bound finds a element > x
  lower bound finds the element >= x
  they return iterators 
  */

  vector<int>::iterator it1 = lower_bound(v1.begin(),v1.end(),7);
  //iterators can also be written as
  // using the auto
  auto it2 = upper_bound(v1.begin(),v1.end(),7);

  // printing the iterators
  cout<<"\n Upper bound and lower bounds\n";
  cout<<"Lower bound:"<<*it1<<endl;
  cout<<" Upper bound: "<<*it2<<endl;
  // also we can perform arithmetic operation on iterators
  // through whic we can find the no of times a 
  // element is present by  minusing upper bound iterator
  // by the lower bound iterator
  cout<<"No of times 7 is present:"<<it2-it1<<endl;

  /*after the vector is sorted 
  we can perform binary search on it
  using binary_search which returns bool */

  bool b1 = binary_search(v1.begin(),v1.end(),7);
  cout<<b1;
}

void setDemo() {
  /* 
  for vector we have to sort the element 
  after every insertion and deletion
  for getting element at logN complexting
  every time we have to sort the element 
  to get upper bound, lower bound etc

  we need a data struture where we can insert, delete the 
  element in logN time. We have set in which if we 
  insert data in random order the data will be in the sorted form so we can perform operation directly in
  logN time
  */

  set <int> s1;
  //to insert number in set we use .insert
  // insert operation performs on logN time
  s1.insert(3);
  s1.insert(0);
  s1.insert(4);
  s1.insert(1);

  for( int x: s1 ) 
    cout<<x<<" ";
  cout<<endl;

  // find operator finds the element and 
  // returns an iterator
  // if the element is not present 
  // it will return the iterator end

  auto i1 = s1.find(3);

  if( i1 == s1.end() ) {
    cout<<"Element is not present\n";
  }
  else {
    cout<<"Element is present:"<<*i1<<endl;
  }

  /* 
  for upper bound and lower bound in set
  we don't have to call function like in the vector
  it is associated with the class  as the set will be sorted
  we can call it like s1.upper_bound(element to find upper bound)

  */

  auto i2 = s1.upper_bound(3);
  cout<<"Upper bound of 3 is :"<<*i2<<endl;

  /*
  uppper bound of largest element will return 
  iterator equal to the end iterator
  in this case s1.end() for 
  */

  auto i3 = s1.upper_bound(100);
  if ( i3 == s1.end() ) {
    cout<<"Upper bound of the element does'nt exist"<<endl;
  }
  else {
    cout<<"Upper bound of the element is: "<<*i3;
  }
}

void mapDemo() {
  /*
  Map maps one thing to the other
  we can map like integer to character
  character to the integer and so on

  in logN time we can map something to something

  also we can find/delete a key in map in log(N) time
  .find(key) .erase(key)
   */

   map <int,int> m1;

   m1[100] = 0;

   cout<<m1[100]<<endl;

   map <char,int> m2;
   string name = "Ram Jonchhen";

  for(char x: name) 
    m2[x]++;

  cout<<"No of h in "<<name<<" is: "<<m2['h'];

  //deletes the entry of o key
  m2.erase('o');

  // find returns the iterator of the key 
  // if the element is not found then it returns the iterator to the end

  /* 
  if the element is found then the iterator can 
  be accesed as
  iterator->first 
  which gives the element to map
  and iterator->second
  which gives the mapped value
   */

  map< char,int>::iterator ii1 = m2.find('h');
  cout<<ii1->second;
}




int main() {
  mapDemo();
}
