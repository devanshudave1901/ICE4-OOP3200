// GameObjcet.cpp file

#include "GameObject.h"
// default constructor with initializations
GameObject::GameObject():m_id(0) , m_position((Vector2D()))
{

}
// parametirized constructor
GameObject::GameObject(const int id, const float x,const float y)
{
	SetID(id);
	SetPosition((x, y));
}

GameObject::GameObject(int id, const Vector2D& position)
{
	SetID(id);
	SetPosition(position);
}
// destructor
GameObject::~GameObject() = default;

// copy constructor defination
GameObject::GameObject(const GameObject& other_object)
{
	SetID(other_object.m_id);
	// member wise copy
	SetPosition(other_object.m_position);

}
// assignment operator overload defination
GameObject& GameObject::operator=(const GameObject& other_object)
{
	SetID(other_object.m_id);
	SetPosition(other_object.m_position);
	return (*this);
}
// getter for getting the value of the poosition private variable
Vector2D GameObject::GetPosition() const
{
	return m_position;
}
// Getter for getting the value of the id from the m_id private variable
int GameObject:: GetID() const
{
	return m_id;
}

// setting the position ..defination part..which sets the value of x and y
void GameObject::SetPosition(const float x, const float y)
{
	m_position.Set(x, y);
}
// setting value them_position to new_position
void GameObject::SetPosition(const Vector2D& new_position)
{
	m_position = new_position;
}
// mutator of the setID
void GameObject::SetID(const int id)
{
	m_id = id;
}
// defination of the ToString() method
std::string GameObject::ToString() const
{
	std::string output_string;
	//build the string
	output_string += "ID           :" + std::to_string(GetID()) + "\n";
	output_string += "Position     :" + GetPosition().ToString() + "\n";
	// return the string
	return  output_string;
}
