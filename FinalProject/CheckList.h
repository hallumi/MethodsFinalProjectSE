#pragma once

#include "../Common/Control.h"

class CheckList : public Control
{
private:



public:
	CheckList();

	void drawCheckList(int left, int bottom, int width, int height);

	~CheckList();
};

