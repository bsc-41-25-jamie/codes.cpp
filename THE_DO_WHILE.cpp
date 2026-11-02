#include <iostream>
using namespace std;
int main(){

int value;

  cout<<"Enter an integer value between 5 and 10"<<endl;
  cin>>value;
  while(cin.fail()|| value < 5 || value > 10){

  
  if(cin.fail())
  {
    cin.clear();
    cin.ignore(1000, '\n');
  
    cout<<"sorry, you entered an invalid number , please try again"<<endl;

  }else{
    cout << "you enter"<< value << ". please enter a number between 5 and 10"<<endl;
  }
  cout << "enter an integer value between 5 and 10"<< endl;

  cin >> value;

}
  cout << "your input valu("<<value<<")has been accepted."<< endl;

  return 0;
} 


