#ifndef MY_STACK_OBJECT_H
#define MY_STACK_OBJECT_H
#include <string>

using namespace std;

class MyStackObject
{
public:
	MyStackObject();
	~MyStackObject(void);

	void add(string coordVal);
	void getTop();
	void pop();
	void seek();
	void goBackToLastIntersection();


};

#endif // !MY_STACK_OBJECT