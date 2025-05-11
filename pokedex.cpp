#include<iostream>
#include<string>
#include<map>
#include<list>
using namespace std;

int main() {
    map<string, list<string>> pokedex;

    list<string> pikachuAttacks = {"thunder shock" , "tail whip" , "quick attack"};
    list<string> charmanderAttacks = {"scary face" , "flame thrower"};
    
    pokedex.insert(pair<string, list<string>> ("Pikachu", pikachuAttacks));
    pokedex.insert(pair<string, list<string>> ("Charmander", charmanderAttacks));

    for(auto pair : pokedex) {
        cout << pair.first << " - ";

        for(auto powers : pair.second) {
            cout << powers << ", ";
        }

        cout << endl;
    }
    return 0;
}