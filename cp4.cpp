#include<iostream>
#include<fstream>
using namespace std;
void readData(string &letter);
main()
{
    string alphabets="abcdefghijklmnopqrstuvwxyz";
    string record;
    string letter;
    string answer;

    readData(letter);
for (int i = 0; i < alphabets.size(); i++)
{
    bool isPresentInInput = false;
    for (int j = 0; j < letter.size(); j++)
    {
        if (alphabets[i] == letter[j])
        {
            isPresentInInput = true;
            break;
        }
    }
    if(!isPresentInInput) 
    {answer += alphabets[i];}
}
cout<<answer;
fstream file;
file.open("letters.txt", ios::app);
file<<answer;
file.close();

}

void readData(string &letter)
{
    fstream input;
    cout<<"Enter string: ";
 
    cin>>letter;
    input.open("letters.txt", ios::out);
    input<<letter<<endl;
    input.close();

}