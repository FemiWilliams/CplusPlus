//Game Menu

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> inventory;
    string game;
    bool quit = false;
    
    while(quit == false){
               int choice;
               cout << "Choose one:\n\n";
               cout << "1 - List games\n";
               cout << "2 - Add new game\n";
               cout << "3 - Remove game\n";
               cout << "4 - Quit\n\n";
               cin >> choice;
               
               if(choice == 1){
                         if(inventory.empty()){
                             cout << "\nYou have no games.\n\n";
                         }
                         else{
                              for(int i = 0; i < inventory.size(); i++){
                                      int j = i + 1;
                                      cout << j << " - " << inventory[i] << endl << endl;
                              }
                         }
                         
               }
               else if(choice == 2){
                    cout << "Enter new game: ";
                    cin >> game;
                    inventory.push_back(game);
               }
               else if(choice == 3){
                    int removal;
                    int newRemoval;
                    if(inventory.empty()){
                       cout << "\nYou have no games.";
                    }
                    else{
                    cout << "\nEnter number of game to be removed: ";
                    cin >> removal;
                    newRemoval = removal - 1;
                    inventory.erase(inventory.begin()+ newRemoval);
                    }
               }
               else if(choice == 4){
                    quit = true;
               }
    }
    system("PAUSE");
    return 0;
               
}
                    
