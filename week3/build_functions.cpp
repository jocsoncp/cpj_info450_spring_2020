#include <iostream>
using namespace std;
char  get_user_input();
void to_upper_case(char &letter);
int main(){
  char user_input_letter;
  cout << "Type in a letter grade, lowercase or uppercase." << endl; 
  if ('0' != (user_input_letter = get_user_input())){
    to_upper_case(user_input_letter);
    switch (user_input_letter){
      case 'A': cout << "Super Great job on an A!" << endl;break;
      case 'B': cout << "Great job on a B!" << endl;break;
      case 'C': cout << "Good job on a C!" << endl;break;
      case 'D': cout << "Keep at it, you can get there." << endl;break;
      case 'F': cout << "F is for #fail" << endl;break;
      default : cout << "This is not a valid grade: " << user_input_letter << endl;
    }
  }
  cout << "You have entered 0.  Exiting." << endl; 
}
char  get_user_input(){
   //Implement this function
    char character;
    cin >> character;
    return character;
}
void to_upper_case(char &letter){
   //Implement this function
   if (letter >= 97 && letter <= 122)
   {
        letter = letter - 32;
   }
}