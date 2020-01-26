#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int tries = 0;
	int searchGridLowNumber = 1;
	int searchGridHighNumber = 144;
	int exactTargetLocation = rand() % 144 + 1;

	int seekingTargetLocation;

	cout << "\t***A hunter kill drone is arriving in the area T minus 3 seconds***\n\n ";
	cout << "HK 152 is in the area and has started searching for organic life form.\n\n ";

	do {
		
		++tries;
		seekingTargetLocation = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
		
		if (seekingTargetLocation > exactTargetLocation)
		{
			cout << "HK 152 receiving ping # " << tries << endl;
			cout << "Alert! search radius was to high # " << seekingTargetLocation << endl;
			searchGridHighNumber = seekingTargetLocation - 1;
		} 
		else if (seekingTargetLocation < exactTargetLocation)
		{
			cout << "HK 152 receiving ping # " << tries << endl;
			cout << "Alert! search radius was to Low # " << seekingTargetLocation << endl;
			searchGridLowNumber = seekingTargetLocation + 1;
		}
		else
		{
			cout << "enemy was hiding at location # " << exactTargetLocation << endl;
			cout << "Target was found at location # " << seekingTargetLocation << endl;
			cout << "Skynet HK 152 Aerial took # " << tries << endl;
		}
		
	}
	while (seekingTargetLocation != exactTargetLocation);
	return 0;

}

