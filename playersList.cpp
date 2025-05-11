#include<iostream>
#include<list>
using namespace std;

void displayRatings (const list<int>& playerRatings) {
    cout << "Player Ratings :" << endl;

    for(list<int>::const_iterator it = playerRatings.begin() ; it  != playerRatings.end() ; it++ ) {
        cout << *it << endl; 
    }
}

int main() {
    list<int> playerList = {2,5,3,7,4,8,2,9,6};

    list<int>beginner;
    list<int>pro;

    for(list<int>::iterator it = playerList.begin() ; it  != playerList.end() ; it++ ) {
        int rating = *it;

        if(rating >=1 && rating <=5) {
            beginner.push_back(rating);
        }
        else if (rating >=6 && rating <=10) {
            pro.push_back(rating);
        }
    }

    displayRatings(beginner);
    displayRatings(pro);
    
    return 0;
}