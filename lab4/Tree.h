#pragma once

#include "Lib.h"

class Tree {
public:
	Tree();
	Tree(int value, Tree* parent);

	void addChild(Tree * elem);
	void printChild() const;
  void printOne() const;
  void printTwo() const;
  void printThree() const;
  int getChildCount() const;

private:

	int value;
	Tree* parent;
	Tree** child;
	int  childCount;
};
