// Dark Cavern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//A simple adventure game 
// Setting a dark cave


#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string playerName;
char progress = 'n';
const int maxItems = 3;
char lightOn = 'n';
string inventory[maxItems];
char pickUpKey = 'n';
int numItems = 0;
char takeTorch = 'n';
char takeGold = 'n';
char takeRelic = 'n';


int main()
{
	cout << "Welcome to Pandora Cavern traverler. What is your name?\n";
	cin >> playerName; // gets players name
	cout << "\n Welcome " << playerName << "! Well there is the entrance.\n Are you ready to make you way down? (y/n)\n"; // asks player if they want to play game.
	cin >> progress;

	if (progress == 'n')
	{
		cout << " Ok. Well come back when your ready.\n"; //ends the game if player doesnt want to proceed
		return 0;
	}

	cout << "You enter the cave. Upon entering you notice your in a huge open cavern.\n";
	cout << " You make your way around the cave looking for any lost artifacts.\n Out of the corner of your eye you notice a faint glow.\n";
	cout << " As you approach a weird grinding noise comes from your feet. \n The cave floor crumbles through. You fall!\n";
	cout << endl << endl << endl;
	cout << "You come to and notice it is pitch black and you cannot see.\n Would you like to turn on your flashlight?(y/n)\n";
	cin >> lightOn;
	cout << endl << endl << endl;

	while (lightOn == 'n') // if player did not turn on flashlight will make them till they do
	{
		cout << "You should turn on the flashlight so you can see.\n"; 
		cout << "Would you like to turn on your flashlight?";
		cin >> lightOn;
	}

	cout << "You turn on the light and notice you are in a small room.\n As your scanning your surroundings use see a shiny key.\n";
	cout << "Do you want to add the key to your bag (y/n)\n";
	cin >> pickUpKey;
	cout << endl << endl << endl;

	if (pickUpKey == 'n')
	{
		cout << "Are you sure you might need it? Do you want to pick up key?\n"; //forces player to pick up key
		cin >> pickUpKey;
	}
	else
	{
		inventory[0] = "key"; // adds key to inventory
		cout << inventory[0] << " has been added to bag.\n";
	}

	cout << "As you scan the room you come to a door.\n";
	cout << "You realize the door is locked and decide to try using " << inventory[0] << endl;

	cout << " You make your way through the door into a long corridor.\n";
	cout << " As your first looking in u see a torch on the wall. Do you take torch? (y/n)\n";
	cin >> takeTorch;
	cout << endl << endl << endl;

	if (takeTorch == 'n') // proceeds with game on fact torch was not taken
	{
		cout << "With your flashlight you proceed down the path.\n";
		cout << " After about 75 feet your flashlight starts to studder then goes out.\n";
		cout << " You now must proceed in the dark.\n" << "Who knows what your going to miss now?\n";
		cout << "After what seems like forever you see a light in the distance.\n";
		cout << endl << endl << endl;
	}
	if (takeTorch == 'y') // proceeds with game if torch is taken
	{
		cout << "You grab the torch and proceed with torch and flashlight.\n";
		cout << " After about 75 feet your flashlight starts to studder then goes out.\n";
		cout << "Your now glad that you did not leave the torch behind.\n";
		cout << " As you continue down the path you notice a small cut in with the relic you were searching for.";
		cout << "Do you take relic? (y/n)";
		cin >> takeRelic;
		cout << endl << endl << endl;

		if (takeRelic == 'n') // makes player take relic
		{
			cout << "Are you sure? That is the reason you ventured into the cave./n Do you want to take relic? (y/n).";
			cin >> takeRelic;
		}
		if (takeRelic == 'y')
		{
			cout << "You put the relic in your pack with exciment. Then continue down the hallway.\n";
			inventory[1] = "relic";
		}
	}

	cout << " As you make it to the area you have realized that your almost back at the top.\n";
	cout << " The room your in is pure gold.\n" << "Based on legends this gold is cursed and whomever tries and take will suffer greatly.\n";
	cout << " Do you take the gold? (y/n)";
	cin >> takeGold;
	cout << endl << endl << endl;

	if (takeGold == 'y') // kills player ending game if they take cursed gold
	{
		inventory[2] = "gold";
		cout << " You take gold and put it in your pack\n";
		cout << " All of the sudden the room starts to rumble and then the ceiling collapses.\n";
		cout << "This kills you instantly. Guess the legends were true.\n\n\n\n";
		return 0;
	}
	if (takeGold == 'n')
	{
		cout << " You smartly decided not to test the legends and continue your journey to the top.\n";
	}

	cout << " You take a old staircase you found in the corner and climb to the top.\n\n\n";

	if (inventory[1] == "relic")
	{
		cout << "Well done " << playerName << "!! You have traversed the cave and made it out with the relic.\n\n\n\n\n\n";
	}

	if (inventory[1] != "relic")
	{
		cout << "Well done " << playerName << "!! You have traversed the cave and made it out.\n Sadly your travel was in vein as you did not find the relic.\n\n\n\n\n\n";
	}

	return 0;
}

