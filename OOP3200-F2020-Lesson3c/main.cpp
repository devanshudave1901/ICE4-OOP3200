#include <iomanip>
#include <iostream>
#include <vector>
#include "GameObject.h"

 static void BuildGameObjects(std::vector<GameObject*>& game_objects, const int num = 2)
 {
	for (auto count = 0; count < num; ++count)
	{
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
		game_objects.push_back(gameObject);
		
	}



 }

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

	std::cout << object1->GetPosition().ToString() << std::endl;
	std::cout << "Second Game object Details:" << std::endl;

	std::cout << object2->GetPosition().ToString() << std::endl;
 }
int main()
{
	std::vector<GameObject*> game_objects;


	int no_of_objects;
	std::cout << "How many Game objects you want to create";
	std::cin >> no_of_objects;
	std::cout << "--------------------------------------------------------------\n" << std::endl;


	BuildGameObjects(game_objects, no_of_objects);

	int index1;
	std::cout << "What is The First Object index?: ";
	std::cin >> index1;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	int index2;
	std::cout << "What is The Second Object index?: ";
	std::cin >> index2;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	CompareGameObjects(game_objects[index1], game_objects[index2]);
}

