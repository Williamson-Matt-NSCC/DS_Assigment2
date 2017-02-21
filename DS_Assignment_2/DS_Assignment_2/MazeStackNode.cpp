#include <iostream>
#include "MazeStackNode.h"

using namespace std;

MazeStackNode::MazeStackNode() : North(NULL), East(NULL), South(NULL), West(NULL)
{
}

MazeStackNode::MazeStackNode(MazeStackNode* north, MazeStackNode* east, MazeStackNode* south, MazeStackNode* west) : North(north), East(east), South(south), West(west)
{
}

MazeStackNode::~MazeStackNode()
{
}

MazeStackNode* MazeStackNode::getNorth()
{
	return North;
}

void MazeStackNode::setNorth(MazeStackNode *north)
{
	North = north;
}

MazeStackNode* MazeStackNode::getEast()
{
	return East;
}

void MazeStackNode::setEast(MazeStackNode *east)
{
	East = east;
}

MazeStackNode* MazeStackNode::getSouth()
{
	return South;
}

void MazeStackNode::setSouth(MazeStackNode *south)
{
	South = south;
}

MazeStackNode* MazeStackNode::getWest()
{
	return West;
}

void MazeStackNode::setWest(MazeStackNode *west)
{
	West = west;
}

