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
      cout << "Yes?\nYou have GENITIVE:\n\nm. [des/eines]\nf. [der/einer]\nnt. [des/eines]\npl. [der/meiner]";
    }
    }
    }
    }
    }
    }else if(start=="yes"){
       cout << "Are you using \n||aus, bei, mit, nach, seit, von, zu or gegenüber?\n";
       cin >> start;
       if(start=="no"){
         cout << "Are you using \n||an, auf, hinter , in, neben, über, vor or zwischen?\n";
         cin >> start;
         if(start=="no"){
          cout << "Are you using \n||bis, durch, für, gegen, wider, ohne, um or entlang?\n";
          cin >> start;
          if(start=="no"){
              cout << "Then, if you are using\n||trotz, während, wegen or innerhalb||\nYou have GENITIVE:\nEXAMPLE:\n";
              cout << "Yes?\nYou have GENITIVE:\n\nm. [des/eines]\nf. [der/einer]\nnt. [des/eines]\npl. [der/meiner]";    

          }else{
            cout << "You have made a mistake.\n";
          }

         }else{
         if(start=="yes"){
          cout << "Is movement from A to B indicated?\n";
          cin >> start;
          if(start=="yes"){
             cout << "Yes?\nYou have ACCUSATIVE:\n\nm. [den/einen]\nf. [die/eine]\nnt. [das/ein]\npl. [die/meine]"; 
          }else{
            if(start=="no"){
              cout << "No?\nYou have DATIVE:\n\nm. [dem/einem]\nf. [der/einer]\nnt. [dem/einem]\npl. [den/meinen]";  
            }else{
              cout << "Pls type only: yes or no";
            }
            
          }
         }else{
            cout <<"Wrong, you can only write: yes or no";
         }
         }
       }else{
         if(start=="yes"){
          cout << "Yes?\nYou have DATIVE:\n\nm. [dem/einem]\nf. [der/einer]\nnt. [dem/einem]\npl. [den/meinen]";  
         }else{
            cout <<"Wrong, you can only write: yes or no";
         }
       }

    }
    return 0;
}