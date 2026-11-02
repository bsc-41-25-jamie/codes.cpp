#include<random>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    unform_int_distribution<int> distrib(0,11);
    int daysUntilExpiration = distrib(gen);
if(daysUntilExpiration == 0){
cout<<"Your subscription has expired"<<endl;
}else if(daysUntilExpiration == 1){
    cout<<"Your subscription expires whithin a day! Renew now and save 20%!"<<endl;
}else if(daysUntilExpiration <= 5){
  cout<<"Your subscription expires in " << daysUntilExpiration<< " days time "
"Renew now and save 10%!"<<endl;
}else if(daysUntilExpiration <= 10){
   cout<<"Your subscription has expired." <<endl;

}else{
    cout<<"You have an active subscription"<<endl;
}
return 0;
}