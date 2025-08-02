#include <bits/stdc++.h>
using namespace std;

class Rect {
public:
  int l;
  int b;

  Rect(){ //defauult constructor
    l = 0;
    b = 0;
  }

  Rect(int x, int y){ //parameterised constructor
    l = x;
    b = y;
  }

  Rect(Rect& r){ //copy constructor ==> initialise an object by an another existing object (should be in same class)
    l = r.l;
    b = r.b;
  }

  ~Rect(){ //copy constructor ==> initialise an object by an another existing object (should be in same class)
    cout<<"Destructor is called"<<endl;
  }

};


int main() {
  Rect* f1 = new Rect();
  cout<<f1->l<<" "<<f1->b<<endl; //0 0
  delete f1;

  Rect f2(2,3);
  cout<<f2.l<<" "<<f2.b<<endl; //3 4
  
  Rect f3 = f2;
  cout<<f3.l<<" "<<f3.b<<endl; //3 4

  return 0;
}