#include <bits/stdc++.h>
using namespace std;

class Parent{
public:
  int x;

protected:
  int y;

private:
  int z;

};

class Child1: public Parent{
  //x remain public
  //y remain protected
  //z not be accessible
};

class Child2: private Parent{
  //x remain private
  //y remain private
  //z not be accessible
};

int main() {
  
  return 0;
}