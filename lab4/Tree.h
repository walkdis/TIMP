#pragma once

#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

#include "Tree.h"

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
