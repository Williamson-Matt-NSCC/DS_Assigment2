#include <iostream>
#include "Node.h"

using namespace std;

Node::Node() : North(NULL), East(NULL), South(NULL), West(NULL)
{
}

Node::Node(Node* north, Node* east, Node* south, Node* west) : 
	North(north), East(east), South(south), West(west)
{
}

Node::~Node()
{
}

Node* Node::getNorth()
{
	return North;
}

void Node::setNorth(Node *north)
{
	North = north;
}

Node* Node::getEast()
{
	return East;
}

void Node::setEast(Node *east)
{
	East = east;
}

Node* Node::getSouth()
{
	return South;
}

void Node::setSouth(Node *south)
{
	South = south;
}

Node* Node::getWest()
{
	return West;
}

void Node::setWest(Node *west)
{
	West = west;
}

bool Node::getIsAnIntersection()
{
	bool b;

	switch (getAvailableDirections())
	{
		case 1|2:
			return false;
		case 3|4:
			return true;
	}
}

int Node::getAvailableDirections()
{
	int available = 0;

	if (getNorth() != NULL)
	{
		available++;
	}

	if (getEast() != NULL)
	{
		available++;
	}

	if (getSouth() != NULL)
	{
		available++;
	}

	if (getWest() != NULL)
	{
		available++;
	}

	return available;
}



