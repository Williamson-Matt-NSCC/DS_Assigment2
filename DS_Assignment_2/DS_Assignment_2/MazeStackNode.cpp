#include <iostream>
#include "MazeStackNode.h"

using namespace std;

MazeStackNode::MazeStackNode() : _data(0), _next(NULL)
{
}

MazeStackNode::MazeStackNode(int data, MazeStackNode* next) : _data(data), _next(next)
{
}

MazeStackNode::~MazeStackNode()
{
}

int MazeStackNode::getData()
{
	return _data;
}

void MazeStackNode::setData(int data)
{
	_data = data;
}

MazeStackNode* MazeStackNode::getNext()
{
	return _next;
}

void MazeStackNode::setNext(MazeStackNode *next)
{
	_next = next;
}
