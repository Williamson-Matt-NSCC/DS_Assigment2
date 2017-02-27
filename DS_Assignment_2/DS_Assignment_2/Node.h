#ifndef NODE_H
#define NODE_H

class Node
{
private:
	Node *North;
	Node *East;
	Node *South;
	Node *West;
	bool isAnIntersection;

public:
	Node();
	Node(Node* North, Node* East, Node* South, Node* West);
	virtual ~Node();

	Node *getNorth();
	void setNorth(Node *node);

	Node *getEast();
	void setEast(Node *node);
	
	Node *getSouth();
	void setSouth(Node *node);

	Node *getWest();
	void setWest(Node *node);

	bool getIsAnIntersection();
	int getAvailableDirections();
};

#endif // !NODE_H


