#include<iostream>
using namespace std;
class Vehicle{
    private :
    string vehicleNumber;
    string vehicleType;
    int EntryHours;
    public :
    Vehicle(string v, string T, int h){
        vehicleNumber = v;
        vehicleType = T;
        EntryHours = h;
    }
    void showdetails(){
        cout<<"Vehicle Number      :  "<<vehicleNumber<<endl;
        cout<<"Vehicle Type        :  "<<vehicleType<<endl;
        cout<<"Entry Hours         :  "<<EntryHours<<endl;

    }
};
