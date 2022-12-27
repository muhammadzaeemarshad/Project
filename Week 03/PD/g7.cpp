#include <iostream>
using namespace std;
main(){
int bagsize;
cout << " Enter Bag Size In Pounds..";
cin >> bagsize;
int costofbag;
cout << "Enter Cost Of The Bag..";
cin >> costofbag;
int area;
cout << " Enter Area Covered By Each Bag In Square Feet..";
cin >> area;

int costoffertilizerperpound;
costoffertilizerperpound=costofbag*area;
cout << "Cost of the fertilizer per pound.." << costoffertilizerperpound;
int costoffertilizingtheareapersquarefeet;
costoffertilizingtheareapersquarefeet=bagsize*area;
cout << "Cost of the fertilizing per square feet.." << costoffertilizingtheareapersquarefeet;
}