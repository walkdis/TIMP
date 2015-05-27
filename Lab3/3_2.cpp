#include <iostream>
#include <list>

using namespace std;
class List {
     list<int> catalog;
     int countOfFiles;
 public:
     List();
     void add(int);
     void del(int);
     int  get();
     void printAll();
     ~List();
};

List::List(){
    countOfFiles = 0;
}
void List::add(int value){
    catalog.push_back(value);
    ++countOfFiles;
}
void List::del(int pos){
    int i = 0;
    for(list<int>::iterator it = catalog.begin(); it != catalog.end(); ++it){
        if(i == pos){
            catalog.pop_back();
        }
        ++i;
    }
}

void List::printAll(){
    for(list<int>::reverse_iterator it = catalog.rbegin(); it != catalog.rend(); ++it){
        cout << *it <<endl;
    }
}
List::~List(){}



int main()
{
    List * catalog = new List();
    int count = 0;
    cin >> count;
    for(int i = 0; i < count; i ++){
        int number = 0;
        cin >> number;
        catalog->add(number);
    }
    catalog->printAll();
    delete catalog;
    return 0;
}
