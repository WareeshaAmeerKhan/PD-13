#include<iostream>
#include<fstream>
using namespace std;
void readData(string name[], int age[], int &idx);
string getField(string record, int field);
int main()
{
    string name[100];
    int age[100];
    int idx=0;
    readData(name, age, idx);
    for(int i = 0; i < idx; i++){
    if(age[i]%2==0)
    {
        cout<<"  ################"<<endl;
        cout<<"  #  "<<age[i]<<" HB "<<name[i]<<"! "<<"#"<<endl;
        cout<<"  ################";
    }
    else if(age[i]%2!=0)
    {
        cout<<"  ****************"<<endl;
        cout<<"  *  "<<age[i]<<" HB "<<name[i]<<"! "<<"*"<<endl;
        cout<<"  ****************";
    }
    }

}

string getField(string record, int field)
{
    int commaCount=1;
    string item;
    for(int x=0; x<record.length();x++)
    {
        if(record[x]==',')
        {
            commaCount=commaCount+1;
        }
        else if(commaCount==field)
        {
            item=item+record[x];
        }
    }
    return item;
}

void readData(string name[], int age[], int &idx)
{
    string record;
    fstream data;
    data.open("cake.txt", ios::in);
    while(!(data.eof()))
    {
        getline(data, record);
        name[idx]=getField(record, 1);
        age[idx]=stoi(getField(record, 2));
        idx=idx+1;
    }
}