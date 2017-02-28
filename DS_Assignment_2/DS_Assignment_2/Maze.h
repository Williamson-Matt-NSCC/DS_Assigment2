#pragma once
#include <string>
#include <fstream>

using namespace std;
class Maze
{
	//define a 2d array of strings
	string** MazeArray;


	//private methods
	string* readInArray(string fileName);
	string getFileName();
	istream& safeGetline(istream& is, string& t);

public:
	Maze();
	~Maze();

	//read in maze txt file based on the filename given 
	void populateArray(string filename);
};

