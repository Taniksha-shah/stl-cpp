#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
    map<string,string> myDictionary;
    
    myDictionary.insert(pair<string, string>("Apple","A fruit that is typically red or green."));
    myDictionary.insert(pair<string, string>("Banana","A long yellow fruit."));

    myDictionary["Apple"] = "A fruit";   // to access and change the value of a key
    cout << myDictionary.size() << endl;  // to print the size of th container- map

    for(auto pair : myDictionary) {
        cout << pair.first << " - " << pair.second << endl;
    }

    cout << myDictionary.clear() << endl; // to clear out container- map
    return 0;
}

//map - elements are in ascending/alphabetical order
//unordered_map - in the order elements are added
