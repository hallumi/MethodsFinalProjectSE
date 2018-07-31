#include "CheckList.h"
#include "../Common/Graphics.h"
#include <iostream>

using namespace std;


CheckList::CheckList()
{

}
void CheckList::drawCheckList(int left, int bottom,int width,int height)
{
	Graphics g;
	g.setBackground(Color::Black);
	g.setForeground(Color::White);
	g.write(left, bottom - 1," CheckBox:");
	Control::draw(g, left, bottom, width, height, Border::doubleline);


	HANDLE hStdin;
	DWORD fdwSaveOldMode;

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	
	//int x = 0, y = 0;
	
		DWORD cNumRead, fdwMode, i;
		INPUT_RECORD irInBuf[128];
		int counter = 0;

		// Get the standard input handle. 

		hStdin = GetStdHandle(STD_INPUT_HANDLE);
		
		g.moveTo(63, 13);
		cout << "\xDB Sport";
		g.moveTo(77, 13);
		cout << "\xDB Movies";
		g.moveTo(63, 17);
		cout << "\xDB VideoGames";
		g.moveTo(77, 17);
		cout << "\xDB Motorcycle";

		HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);


}

CheckList::~CheckList()
{


}
