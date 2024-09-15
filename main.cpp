#include <iostream>

using namespace std;

int main()
{
    string charName = "Kim";
    string gender = "male";
    string pronoun;
    string label;
    bool isMature;

    int charAge = 24;

    if(charAge > 18){
        isMature = true;
    } else {
        isMature = false;
    }


    if(gender == "female" && isMature) {
        pronoun = "she";
        label = "woman";
    } else if(gender == "male" && isMature){
        pronoun = "he";
        label = "man";
    } else if(gender == "female" && !isMature){
        pronoun = "she";
        label = "girl";
    } else if(gender == "male" && !isMature){
        pronoun = "he";
        label = "boy";
    }

    cout << "There was a "<< label <<" named " << charName << endl;
    cout << pronoun <<" was " << charAge << " years old" << endl;
    cout << pronoun << " liked the name " << charName << endl;
    cout << "But did not like being " << charAge << endl;
    return 0;
}
