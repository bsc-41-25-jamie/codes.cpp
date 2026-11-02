#include<iostream>
#include<fstream>
using namespace std;
#include<string>
 
int main()
{
    ofstream file("text.txt");
    file << "This is the Advanced Computer Programming Module";
    file.close();

    string filedata= "";
    ifstream filein("text.txt");
    while(file << filedata){
        cout << filedata << endl;
    }

}
