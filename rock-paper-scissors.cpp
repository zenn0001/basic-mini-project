#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

int main() {
  //choices
  string choices[] = {"Rock", "Paper", "Scissors"};

  //your choice variable
  int yourchoice;
  
  // ai choice
  int randomchoices = sizeof(choices) / sizeof(choices[0]);
  srand(static_cast<unsigned int>(time(NULL)));
  int ai = rand() % randomchoices; 

  while (true){
  cout << "Rock(0), Paper(1), Scissors(2)" << endl;

  cout << "Your choice: ";
  cin >> yourchoice;
   
  if (yourchoice > 2){
    cout << "Invalid choice!" << endl;
    continue;
  }

  switch (yourchoice){
    case 0:
     cout << "you choose: " << choices[0] << endl;
     cout << "opponents choice: " << choices[ai] << endl;
     break;
    case 1:
       cout << "you choose: " << choices[1] << endl;
       cout << "opponents choice: " << choices[ai] << endl;
      break;
    case 2:
      cout << "you choose: " << choices[2] << endl;
      cout << "opponents choice: " << choices[ai] << endl;
      break;

    default:
      cout << "Invalid choice!" << endl;
      break;
  } 

  if (yourchoice == ai){
    cout << "TIE" << endl;
  }
   else if ((yourchoice == 0 && ai == 1) || (yourchoice == 1 && ai == 2) || (yourchoice == 2 && ai == 1)){
    cout << "you lost" << endl;
   }


   else {
    cout << "you win" << endl;
   }



  string tryagain;
  while (true) {
 cout << "do you want to try again? type 'y' for yes or type 'n' for no: ";
  cin >> tryagain;
  if (tryagain == "y") {
    break;
  
  }
  else if (tryagain == "n") {
    cout << "Exiting...\n";
    return 0;
 }

 else {
   cout << "Invalid input. Please type 'y' or 'n'.\n";
 }
}

}
return 0;
}