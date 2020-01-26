#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{	//It generates a random number that initializes at zero.
	srand(static_cast<unsigned int>(time(0)));

	//It starts the tries at zero and goes up after an amount of tries.
	int tries = 0;
	//This is the lowest number the drone can choose from when finding the number.
	int searchGridLowNumber = 1;
	//This is the highest number the drone can choose from when finding the number.
	int searchGridHighNumber = 144;
	//The exact number its gonna come up with by using the random number.
	int exactTargetLocation = rand() % 144 + 1;
	//This is a defined code that is being used by a line of code.
	int seekingTargetLocation;

	cout << "\t***A hunter kill drone is arriving in the area T minus 3 seconds***\n\n ";
	cout << "HK 152 is in the area and has started searching for organic life form.\n\n ";

	do {
		//adds the number of tries.
		++tries;
		// Here it puts the high and low number then subtracts it. It then devides the number that it come up with and adds it to the low number.
		seekingTargetLocation = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;

		//if the target number is seekingtargetlocation is greater than the exacttargetlocation. It comes up with a number and is then added to the target that it was looking for.
		if (seekingTargetLocation > exactTargetLocation)
		{
			cout << "HK 152 receiving ping # " << tries << endl;
			cout << "Alert! search radius was to high # " << seekingTargetLocation << endl;
			searchGridHighNumber = seekingTargetLocation - 1;
		} 
		//if the target number is seekingtargetlocation is less than the exacttargetlocation. It comes up with a number and is then added to the target that it was looking for.
		else if (seekingTargetLocation < exactTargetLocation)
		{
			cout << "HK 152 receiving ping # " << tries << endl;
			cout << "Alert! search radius was to Low # " << seekingTargetLocation << endl;
			searchGridLowNumber = seekingTargetLocation + 1;
		}
		//This statement then shows the final number that the enemy is located in.
		else
		{
			cout << "enemy was hiding at location # " << exactTargetLocation << endl;
			cout << "Target was found at location # " << seekingTargetLocation << endl;
			cout << "Skynet HK 152 Aerial took # " << tries << endl;
		}
		
	}
	//This comes up with the final numbers that it was looking for.
	while (seekingTargetLocation != exactTargetLocation);
	//returns nothing.
	return 0;

}

