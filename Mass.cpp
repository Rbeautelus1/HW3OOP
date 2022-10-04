#include <iostream>
#include <string>
using namespace std;

//add class definitions below this line

class Mass 
{
  private:
    double milligrams;
    double grams;
    double kilograms;

public:
  Mass(double mg, double g, double kg) {
      milligrams = mg;
      grams = g;
      kilograms = kg;
  }

  double TotalWeight(){
    double t = kilograms + grams/1000 + (double)milligrams / 1000000;
    return t;
  }
 // string CompareWeight()




//string Mass::CompareWeight()
string CompareWeight(Mass m)
{
  if(TotalWeight() > m.TotalWeight())
    cout << "First object is heavier";
  
  else if(TotalWeight() < m.TotalWeight())
  cout << "Second object is heavier";

  else
  cout << "The object weight is the same";
}
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT the code below

  Mass m1(800, 17, 3);
  Mass m2(730, 38, 2);
  cout << m1.TotalWeight() << endl;
  cout << m2.TotalWeight() << endl;
  cout << m1.CompareWeight(m2) << endl;

  //DO NOT EDIT the code above
  
  return 0;
  
}
