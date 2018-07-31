#include "panel.h"
#include "../Common/Graphics.h"
#include "TextBox.h"
#include "Label.h"
#include "Button.h"
#include "CheckList.h"

/*panel::panel()
{
	//setHeight(30);
	//setWidth(30);
}*/


panel::panel(int x, int y, int width , int height)
{

	Graphics g;
	g.setBackground(Color::Black);
	g.setForeground(Color::White);
	Control::draw(g, x, y, width, height, Border::doubleline);
	

}
void panel::ActivateObjects()
{
	Button b(45, 35, 13, 2);
	TextBox t(10, 28, 80, 6);
	Label l(10, 10, 17, 7);
	CheckList c;
	c.drawCheckList(60,10, 30, 10);
	

}

panel::~panel()
{
}
