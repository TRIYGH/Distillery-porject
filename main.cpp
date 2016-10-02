//T. Robert Ward
//May 29, 2013

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "*******  DISTILLERY BOTTLE CALCULATOR  *******\n" << endl;

    int numBarrels, numBottlesNeeded_roundedUp;
    double bottlesNeeded, barrelHeight, barrelDiameter, volumeInches, totalVolume, gallons, liters;

    cout << "How many barrels are being delivered? ";
    cin >> numBarrels;

    cout << "\n\nPlease enter for each barrel:\n";
    cout << "HEIGHT (in inches): ";
    cin >> barrelHeight;

    cout << "\nDIAMETER (in inches): ";
    cin >> barrelDiameter;

    // Calc It

    volumeInches = 3.14159 * pow((barrelDiameter / 2), 2) * barrelHeight;

    totalVolume = numBarrels * volumeInches;  /* ...of all barrels */

    totalVolume = totalVolume * .95;  /* reduce it by 5%  */

    gallons = totalVolume / 231;

    liters = gallons * 3.785;

    bottlesNeeded = liters / 2;

    numBottlesNeeded_roundedUp = ceil( bottlesNeeded);

    cout << "\n\nYou need " << numBottlesNeeded_roundedUp << " bottles.  But since they come in cases of 12, \nyou will need to order ";
    cout << ceil(numBottlesNeeded_roundedUp / 12) << " cases.\n\n";
    cout << "The last bottle will not be completely full, so the employees can \ndrink the " << bottlesNeeded - (numBottlesNeeded_roundedUp - 1) << " liter(s) that remains.";
    cout << endl;

    return 0;
}
