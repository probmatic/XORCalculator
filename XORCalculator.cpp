// Sup nerds?

//Pass an array full of 1's and 0's to a function to be XOR'd with a different array
//Then return the XOR output back


//*************STILL NEED TO FIGURE OUT A WAY TO RETURN THE XOR'D ARRAY BACK TO INT MAIN FUNCTION***********//


#include "pch.h" //might not need this. My computer did for some reason..
#include <iostream>


using namespace std;


void returnXORArrayBackToMain(int returnArray[], int returnSize); //array that calculates and outputs the XOR array

int main()
{
	cout << "Start of XOR calculator when XOR'd to a bit string of all 1's:" << endl;

	int arrayInput[12];

	cout << "Enter 12 digits, space between each number, and press enter after all 12 are typed in." << endl;

	for (int m = 0; m < 12; m++)
	{
		cin >> arrayInput[m]; //taking input and putting it into the array

	}

	returnXORArrayBackToMain(arrayInput, 12); //Calling this function to calculate the XOR'd string

	system("pause");
	return 0;
}



void returnXORArrayBackToMain(int arrayInput[], int returnSize)
{
	int xorString[12];
	int otherString[12] = { 1,1,1,1,1,1,1,1,1,1,1,1 }; //String to XOR the inputed bitstring to

	for (int i = 0; i < returnSize; i++)
	{
		xorString[i] = ((arrayInput[i]) ^ (otherString[i])); //XOR the two strings
	}

	for (int j = 0; j < returnSize; j++)//print out otherString to see calculation
	{
		cout << otherString[j] << " ";
	}
	cout << endl << "________________________" << endl;
	
	for (int o = 0; o < returnSize; o++) //printing out XOR'd array
	{
		
		cout << xorString[o] << " ";
	}

}
