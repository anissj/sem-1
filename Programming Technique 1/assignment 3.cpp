// Name: Anis Safiyya 
// Matrics number: A23CS0049
// Date: 21/12/2023
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
void dispStatus (int);
void dispOutput (int);
void getInput (int&, int&, int&, int&);
int calcAverage (int, int);

int main() {
    int total, highest,nstate;    
    char state[50],enter,highstate[50];
    int tc, nc, td, tr, ac; 

    nstate=0;
    do{
    cout<<"<<<< DATA >>>>>>> "<<endl;    
    cout<<"State name      : ";
    cin.get(state,50);
    getInput(tc, nc, td, tr);
    
    cout<<"\n <<<< SUMMARY >>>>>>>\n";
    ac = tc + nc - td - tr;
    dispOutput(ac);    
    
    total += ac;
    nstate+=1;
    if (highest<ac){
    highest = ac;
    strcpy (highstate , state);
    }
    cout<<"\nPress <ENTER> to continue..."<<endl;
    cin.ignore();
    cin.get(enter);
    }while(isspace(enter));
    
    cout<<"<<<<< ACTIVE CASES >>>>>\n";
    cout<<"Total  : "<<total<<endl;
    cout<<"Highest: "<<highest<<" ("<<highstate<<")\n";
    int Average = calcAverage(nstate,total);
    cout<<"Average for "<<nstate<<" states: "<<Average;
    
    system ("pause");
    return 0;
}

void dispStatus(int a){
    if (a==0)
    cout<<"Status          : Green zone";
    else if (a>=1 && a<=20)
    cout<<"Status          : Yellow zone";
    else if (a>=21 && a<=40)
    cout<<"Status          : Orange zone";
    else
    cout<<"Status          : Red zone";
}

void getInput(int& p, int& q, int& r, int& s){
    cout<<"Total cases     : ";
    cin>>p;
    cout<<"New cases       : ";
    cin>>q;
    cout<<"Total death     : ";
    cin>>r;
    cout<<"Total recovered : ";
    cin>>s;
}

void dispOutput(int a){
    cout<<"Active cases    : "<< a <<endl;
    dispStatus(a);
}

int calcAverage(int n, int t){
    return t/n;

}