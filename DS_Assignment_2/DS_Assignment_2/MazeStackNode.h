#ifndef MAZE_STACK_NODE_H
#define MAZE_STACK_NODE_H

class MazeStackNode
{
private:
	MazeStackNode *North;
	MazeStackNode *East;
	MazeStackNode *South;
	MazeStackNode *West;

public:
	MazeStackNode();
	MazeStackNode(MazeStackNode* North, MazeStackNode* East, MazeStackNode* South, MazeStackNode* West);
	virtual ~MazeStackNode();

	MazeStackNode getNorth();
	void setNorth(MazeStackNode *node);

	MazeStackNode getEast();
	void setEast(MazeStackNode *node);
	
	MazeStackNode getSouth();
	void setSouth(MazeStackNode *node);

	MazeStackNode getWest();
	void setWest(MazeStackNode *node);
};

#endif // !MAZE_STACK_NODE_H


