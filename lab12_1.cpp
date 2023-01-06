// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;
int main (){
    cout << "Press Enter 3 times to reveal your future.";
    string grade ;
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int i = rand()%9;
    string x;
    if (i == 0) x = "A" ;
    else if (i==1) x = "B+";
    else if (i==2) x = "B";
    else if (i==3) x = "C+";
    else if (i==4) x = "C";
    else if (i==5) x = "D+";
    else if (i==6) x = "D";
    else if (i==7) x = "F";
    else x = "W";



    cout << "You will get " << x << " in this 261102."; 
}