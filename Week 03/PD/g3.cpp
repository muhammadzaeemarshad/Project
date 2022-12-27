#include <iostream>
using namespace std;
main(){
int initialvelocity;
cout << " Enter Initial Velocity.. ";
cin >> initialvelocity;
int acceleration;
cout << " Enter Acceleration.. ";
cin >> acceleration;
int time;
cout << " Enter Time.. ";
cin >> time;
int finalvelocity;
finalvelocity=(acceleration*time)+initialvelocity;
cout<< "Final Velocity.." <<finalvelocity;
} 