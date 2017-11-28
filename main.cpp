
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
int main()
{
  int choice;
  cout << "1. Simple Interest" << endl;
  cout << "2. Compound Interest" << endl;
  cin >> choice;
  
  switch (choice)
  {
    case 1:
  
    double interest, principle, rate, time, total;

    system("title Investment Interest Calculator");
    system("color a");

    cout << "         *****************************************************************" << endl;
    cout << "Welcome to the Investment Interest Calculator \n" << endl;

    cout << "How much will be invested?" << endl;
    cin >> principle;
    cout << "\n" << endl;

    cout << "At what rate will it be invested?" << endl;
    cin >> rate;
    cout << "\n" << endl;


    cout << "How long will it be invested for, in years? \n";
    cin >> time;
    cout << "\n" << endl;


    interest = principle * rate * time;
    rate = rate / 100;
    total = interest + principle;

    cout << "The total Interest after " << time << " years is: \n" << interest << endl;
    cout << "\n" << endl;

    cout << "The total amount will be: \n" << total << endl;



    return 0;
  }
  
  case 2:
  {
    // Amount = principle (1 + rate) ^ time
    
    float Amount, P, rate, t;
    
    cout << "How much will be invested? " << endl;
    cin >> P;
    
    cout << "What is the rate (%) ?" << endl;
    cin >> rate;
    
    rate = rate / 100;
    
    cout << "How long will this investment last in years? " << endl;
    cin >> t;
    
    Amount = P * (1 + rate) ** t;
    
    cout << "Total amount = $" << Amount << endl;
    
    return 0;
  }
  
}
