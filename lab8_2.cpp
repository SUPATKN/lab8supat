#include<iostream>
using namespace std;

int main(){
    string UserName, Movie, Day, LastS;
    int ID;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin,UserName);

    cout << "Fahsai: Wow!!! " << UserName << " is a really cool name."<< endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?"<< endl;
    cout << UserName << ": ";
    cin >> ID;
    cin.ignore();
    int gear = (ID/10000000)-12;
    
    cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you."<< endl;

    cout << "Fahsai: Let's go to the cinema together!!!"<< endl;
    cout << "Fahsai: What movie do you want to watch?"<< endl;
    cout << UserName << ": ";
    getline(cin,Movie); 

    cout << "Fahsai: So....which day are you free to go with me?"<< endl;
    cout << UserName << ": ";
    getline(cin,Day); 
    
    cout << "Fahsai: " << Day << "....that is OK!!! I'm looking forward to watching " << Movie << " with you."<< endl;

    cout << UserName << ": ";
    cin >> LastS;
    cout << "Fahsai: 555+ see you "<< Day <<". Bye Bye \\(^ ^)/";
    return 0; 

}
