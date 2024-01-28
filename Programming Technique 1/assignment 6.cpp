//Anis Safiyya Binti Janai A23CS0049

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void readFile(fstream&, float dataF[], int&);
void computeC(float dataF[], float dataC[], int);
float average(float dataC[], int);
void grade(char cgrade[], float dataC[], int, int&, int&, int&);
void writeFile(fstream&, float dataC[], float dataF[], int, char cgrade[]);

int main() {

    fstream input("input.txt", ios::in);
    fstream output("output.txt", ios::out);
    float dataF[8];
    float dataC[8];
    float avg = 0.0;
    int numdata=0, a=0, b=0, c=0;
    char cgrade[8];

    if(!input)
    {
        cout<<"ERROR: cannot open file\n";
        exit(1);
    }

    readFile(input, dataF, numdata);

    computeC(dataF, dataC, numdata);

    avg = average (dataC, numdata);

    grade(cgrade, dataC, numdata, a, b, c);

    writeFile(output, dataF, dataC, numdata, cgrade);

    input.close();
    output.close();

    cout<<"Average of temperature in Celcius: "<<avg<<endl;
    cout<<"Number of high temperature: "<<a<<endl;
    cout<<"Number of medium temperature: "<<b<<endl;
    cout<<"Number of low temperature: "<<c<<endl;

    return 0;
}

void readFile(fstream& input, float dataF[], int &i)
{
     while ( input.good() ) 
    {
       input >> dataF[i];
        i++;
    } 
}

void computeC(float dataF[], float dataC[], int numdata)
{
    for(int i=0; i<numdata; i++)
    {
        dataC[i] = (dataF[i] - 32) * 5/9;
    }
}

float average(float dataC[], int numdata)
{
    float totalC=0, ave=0;

    for(int i=0; i<numdata; i++)
    {
        totalC += dataC[i];
    }
    ave = totalC/numdata;
    cout<<fixed<<setprecision(1);

    return ave;
}

void grade (char cgrade[], float dataC[], int numdata, int &a, int &b, int &c)
{
    for(int i=0; i<numdata; i++)
    {
        if(dataC[i] >= 35.0)
        {
            cgrade[i] = 'H';
            ++a;
        }
        else if(dataC[i] < 35.0 && dataC[i] >= 20.0)
        {
            cgrade[i] = 'M';
            ++b;
        }
        else
        {
            cgrade[i] = 'L';
            ++c;
        }
    }
}

void writeFile(fstream& output, float dataF[], float dataC[], int numdata, char cgrade[])
{
    output<<"C(Celcius)\t\tF(Farenheit)\t\tDescription"<<endl;
    output<<"==========\t\t============\t\t==========="<<endl;
    for(int i=0; i<numdata; i++)
    {
        output<<fixed<<setprecision(2)<<dataC[i]<<"\t\t\t"<<dataF[i]<<"\t\t\t"<<cgrade[i]<<endl;
    }
}