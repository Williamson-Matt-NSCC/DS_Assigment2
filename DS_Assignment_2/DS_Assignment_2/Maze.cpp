#include "Maze.h"



string* Maze::readInArray(string fileName)
{
	int numRows = 0;
	int numCols = 0;
	string tempLine;
	string* tempArr;

	try 
	{
		ifstream ifs(fileName);

		while (!ifs.eof())
		{

			if (tempLine.length() > numCols)
				numCols = (int)tempLine.length();



		}

	}
	catch (exception e)
	{

	}

}

string Maze::getFileName()
{
	return string();
}

//safeGetline used from stack overflow
//http://stackoverflow.com/questions/6089231/getting-std-ifstream-to-handle-lf-cr-and-crlf

istream& Maze::safeGetline(istream& is, string& t)
{
	t.clear();

	// The characters in the stream are read one-by-one using a std::streambuf.
	// That is faster than reading them one-by-one using the std::istream.
	// Code that uses streambuf this way must be guarded by a sentry object.
	// The sentry object performs various tasks,
	// such as thread synchronization and updating the stream state.

	istream::sentry se(is, true);
	streambuf* sb = is.rdbuf();

	for (;;) {
		int c = sb->sbumpc();
		switch (c) {
		case '\n':
			return is;
		case '\r':
			if (sb->sgetc() == '\n')
				sb->sbumpc();
			return is;
		case EOF:
			// Also handle the case when the last line has no line ending
			if (t.empty())
				is.setstate(ios::eofbit);
			return is;
		default:
			t += (char)c;
		}
	}
}


void Maze::populateArray(string filename)
{
	//get file name

	//read in array

}

Maze::Maze()
{
}


Maze::~Maze()
{
}