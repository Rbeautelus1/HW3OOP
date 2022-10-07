#include <iostream>
using namespace std;

//add class definitions below this line

class Subway {
  public:
    Subway(){
      passengers = 0;
      total_fares = 0;
    }
    int GetPassengers();
    void Board(int);
    void Disembark(int);
    double GetFares();

    private:
    const double fare = 2.40; //variable cannot be reassigned
    int passengers;
    double total_fares;
    
};

int Subway::GetPassengers()
{
  return passengers;
}

double CalculateFares(int p, double fare)
  {
    return fare * p;
  }

void Subway::Board(int p)
{
  if(p>=0)
  {
    passengers+=p;
  }
  cout << "Boarded passengers entered: " << passengers << endl;
  total_fares = CalculateFares(p,fare);
  
  }
  
  void Subway::Disembark(int p)
  {
    if(p<0)
    {
      cout << "Wrong number of passengers exiting " << endl;
    }
    else {
      passengers -= p; 
    }
    cout << "Disembark passengers exited: " << passengers << endl;
  }

  double Subway::GetFares()
  {
    return total_fares;
  }



//add class definitions above this line   
int main() {
  
  //DO NOT EDIT code below this line

  Subway s;
  cout << s.GetPassengers() << endl;
  s.Board(23);
 s.Disembark(12);
  cout << s.GetPassengers() << endl;
  cout << s.GetFares() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}

