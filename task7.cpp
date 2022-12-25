#include <iostream>
using namespace std;

main ()
{
int MB;
int convertedBits;
cout << "Enter megabytes:";
cin >> MB;
convertedBits = MB * (1024 * 1024 * 8);
cout << "Required Bits are :" << convertedBits;
}