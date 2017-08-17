#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
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
    cout << "\n" << endl;

    cout << "Thank you!" << endl;



    return 0;
}


