#include <iostream>
using namespace std;

main()
{
string name;
int matric;
int intermediate;
int ecat;
float matricPercentage;
float intermediatePercentage;
float ecatPercentage;
float matricWeightage;
float intermediateWeightage;
float ecatWeightage;
float aggregate;
cout << "Enter your name:";
cin >> name;
cout << "Enter matric marks:";
cin >> matric;
matricPercentage = (matric/1100.0) * 100;
matricWeightage = (matricPercentage * 10)/100;
cout << "Enter intermediate marks:";
cin >> intermediate;
intermediatePercentage = (intermediate/550.0) * 100;
intermediateWeightage = (intermediatePercentage * 40)/100;
cout << "Enter ecat marks:";
cin >> ecat;
ecatPercentage = (ecat/400.0) * 100;
ecatWeightage = (ecatPercentage * 50)/100;
aggregate = matricWeightage + intermediateWeightage + ecatWeightage;
cout << "Aggregate is :" << aggregate;
}
