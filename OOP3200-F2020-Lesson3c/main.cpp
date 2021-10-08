//Name - Devanshu Dave
// Type - ice 4
// Date - 08-10-2021.
// Description - The c++ code which uses standard tempate library and compare the two inputs.


// header files
#include <iomanip>
#include <iostream>
#include <vector>
#include "GameObject.h"

//  Function of the BuildGameObject Created which creates tje vector of GameoBjects and takes input and stores the information
 static void BuildGameObjects(std::vector<GameObject*>& game_objects, const int num = 2)
 {
	// for loop
	for (auto count = 0; count < num; ++count)
	{
		// input
		int id;
		std::cout << "Enter the  game object ID: ";
		std::cin >> id;
		Vector2D point;
		std::cout << "Enter the gameObject Position (x, y): ";
		std::cin >> point;
		std::cout << "\n--------------------------------------------------------------" << std::endl;
		std::cout << "You entered " << id << "for the gameObject's ID " << std::endl;
		std::cout << "You Entered " << point << " for the gameObject's Positions" << std::endl;
		std::cout << "--------------------------------------------------------------\n" << std::endl;

		GameObject* gameObject = new GameObject(id, point);
		// pushing the data to the vector
		game_objects.push_back(gameObject);
		
	} 
 }
 // Function created which perform the functionality of comparing two objects of game.
static void CompareGameObjects(GameObject* object1, GameObject* object2)
 {
	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first game object is: " << object1->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second game object is: " << object2->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first game object and second game object is: "
		<< Vector2D::Distance(object1->GetPosition(), object2->GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first game object to the second game object is: "
		<< Vector2D::SignedAngle(object1->GetPosition(), object2->GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "First Game object Details:" << std::endl;

	std::cout << object1->ToString() << std::endl;
	std::cout << "Second Game object Details:" << std::endl;

	std::cout << object2->ToString() << std::endl;
 }
int main()
{
	// creation of the vector named game_objects
	std::vector<GameObject*> game_objects;

	// variable declared named no_of_objects with int data type
	int no_of_objects;
	// asking to input for how many game objects to be created
	std::cout << "How many Game objects you want to create";
	// input
	std::cin >> no_of_objects;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	// object created which build the vector.
	BuildGameObjects(game_objects, no_of_objects);
	// declared the index1 variabl ewith int data type
	int index1;
	// asking fot he first object indic which needed to be compared to second/ other
	std::cout << "What is The First Object index?: ";
	// input
	std::cin >> index1;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	// declared the index2 variable with int data type

	int index2;
	std::cout << "What is The Second Object index?: ";
	std::cin >> index2;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	// compareGameObjects function called which compares two objects
	CompareGameObjects(game_objects[index1], game_objects[index2]);
	CompareGameObjects(game_objects[index1], game_objects[index2]);

}

