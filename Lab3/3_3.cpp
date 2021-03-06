#include <iostream>
#include <vector>

using namespace std;
class List{
    vector<int> catalog;
    int countOfFiles;
 public:
    List();
    void add(int);
    void del(int);
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
    for(vector<int>::iterator it = catalog.begin(); it != catalog.end(); ++it){
        if(i == pos){
            catalog.erase(it);
        }
        ++i;
    }
}
void List::printAll(){
    for(vector<int>::iterator it = catalog.begin(); it != catalog.end(); ++it){
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
