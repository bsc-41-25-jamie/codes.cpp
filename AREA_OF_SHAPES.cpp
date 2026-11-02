#include<iostream>
#include<limits>
#include<string>
using namespace std;
 double square(double sideA , double sideB){
            cout<<"enter the sides to be calculated"<<endl;
            cin>>sideA>>sideB;
            double areaOfSquare = sideA * sideB;
            cout<<areaOfSquare<<endl;
            
            return areaOfSquare;
        }
        double rectangle(double length , double width){
            cout<<"Enter the length and width"<<endl;
            cin>>length>>width;
            double areaOfRectangle = length * width;
            cout<<areaOfRectangle<<endl;
            return areaOfRectangle;
        }
        double triangle(double base , double height){
            cout<<"Enter the base and height"<<endl;
            cin>>base>>height;
            const double  num = 0.5;  
            double areaOfTriangle = num*(base * height);
            cout<<areaOfTriangle<<endl;
            return areaOfTriangle;
        }
       


int main()
{
    bool isRunning = true;
    double length,width,base,height,sideA,sideB;
    int choice;
     while(isRunning){
    cout<< "AREA OF SHAPES"<<endl;
    cout<<" 1.Square"<<endl;
     cout<<"2. rectangle"<<endl;
      cout<<"3. triangle "<<endl;
       cout<<"4.Quite the programme"<<endl;
        cout<<"Enter choice of shape to be calculated"<<endl;
        cin>>choice;


       
    
         if(choice==1)
         {
            square(sideA,sideB);
            continue;
         }else if(choice==2)
         {
            rectangle(length,width);
            continue;
         }else if(choice==3)
         {
            triangle(base,height);
            continue;
        
         
         }else if(choice == 4){
            isRunning = false;
            cout<<"you've quit"<<endl;
            break;
         }
          else
         {
           cout<< "you've entered an invalid option :("<<endl;
           cin.clear();
        cin.ignore(numeric_limits<streamsize> :: max(), '\n');
           continue;
         }
         
       }     
      return 0;
}