//author: Zh, a.i., davon pangloss
//idea: an algorithm find the right "Fälle" in German
///19.Nov.2020
#include <string>
#include <iostream>
using namespace std;

int main() {
    string start;
    cout << "Are you using a prepostion?\n";
    cin >> start;   // Taking input
    if(start=="no"){
    cout << "Is it the SUBJECT of the sentence?\nExample:The MAN buys a dog.\n";
    cin >> start;
    if(start=="no"){
    cout << "Is it after ||sein||(the verb to be)?\nExample: The dog is a PUPPY.\n";
    cin >> start;
    if(start=="no"){
    cout << "Is it after ||folgen, helfen glauben or begegnen?||\n";
    cin >> start;
    if(start=="no"){
    cout << "Is it after the INDIRECT OBJECT?\nAre you translating the idea of ||to|| or ||for||\n";
    cin >> start;
    if(start=="no"){
    cout << "Is it the INDIRECT OBJECT?\nEXAMPLE: The man buys a DoG\n";
    cin >> start;
    if(start=="no"){
      cout << "Are you showing possession??\nEXAMPLE: That is my MOTHER'S room.\n\n";
      cout << "Yes?\nYou have GENITIVE:\n\n m. [des/eines]\nf. [der/einer]\nnt. [des/eines]\npl. [der/meiner]";

    }
    }
    }
    }
    }
    }
    return 0;
}