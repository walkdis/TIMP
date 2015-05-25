#include "Lib.h"
#define NULL 0

Tree::Tree() : value(0), parent(NULL), child(NULL), childCount(0) {
}

Tree::Tree(int value, Tree* parent) {
	this->value = value;
	this->parent = parent;
	if (parent) parent->addChild(this);
	this->child = NULL;
	this->childCount = 0;
}

void Tree::addChild(Tree* elem) {
	if(!childCount) {
		child = new Tree*[1];
		child[0] = elem;
		childCount++;
	}	else {
    Tree** a = new Tree*[childCount + 1];
		for(int i = 0; i < childCount; i++) {
			a[i] = child[i];
		}
		a[childCount] = elem;
		childCount++;
		delete [] child;
		child = a;
	}
}

void Tree::printChildren() const {
  cout << "This " << value << "\nChild: ";
	if (child)
	{
		for (int i = 0; i < childCount; i++)
		{
			cout << child[i]->value << " ";
		}
	}
	else cout<<"NULL";
	cout<<"\n";
}

int Tree::getChildCount() const {
  return childCount;
}

void Tree::printOne() const {
  cout << value << " ";
  for (int i = 0; i < childCount; i++){
    child[i]->printOne();
  }
}

void Tree::printTwo() const {
  for (int i = 0; i < childCount; i++){
    children[i]->printTwo();
  }
  cout << value << " ";
}

void Tree::printThree() const {
  int j = 0;
  for (int i = 0; i < childCount; i++){
    child[i]->printThree();
    if (!j) cout << value << " ";
    j++;
  }

  if (!j) 
  cout << value << " ";
}
