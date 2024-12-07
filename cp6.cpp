#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string extractText(string &record) 
{
    string result;
    bool text = false;

    for (int i = 0; i < record.length(); i++) 
    {
        if (record[i] == '"' && !text) 
        {
            text = true;  
        } 
        else if (record[i] == '"' && text) 
        {
            break;  
        }
        else if (text) 
        {
            result += record[i];
        }
    }

    if (result=="") 
    {
        return "What... Why did you make this?";
    }
    return result;
}

int main() 
{
    fstream data;
    string record;
    
    data.open("data.txt", ios::in);
    while (getline(data, record)) 
    {
        cout << extractText(record) << endl;
    }
    data.close();
}
