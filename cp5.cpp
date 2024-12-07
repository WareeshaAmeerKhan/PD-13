#include<iostream>
#include<fstream>
using namespace std;
main()
{
    string output, result;
    cout<<"Enter string: ";
    string word;
    getline(cin, word);
    for(int x=0; word[x]!=0; x++)
    {
        if(word[x]=='a' || word[x]=='A')
        {
            result= ".-"; 
        }
        if(word[x]=='b' || word[x]=='B')
        {
            result= "-..."; 
        }
        if(word[x]=='c' || word[x]=='C')
        {
            result= "-.-."; 
        }
        if(word[x]=='d' || word[x]=='D')
        {
            result= "-.."; 
        }
        if(word[x]=='e' || word[x]=='E')
        {
            result= "."; 
        }
        if(word[x]=='f' || word[x]=='F')
        {
            result= "..-."; 
        }
        if(word[x]=='g' || word[x]=='G')
        {
            result= "--."; 
        }
        if(word[x]=='h' || word[x]=='H')
        {
            result= "...."; 
        }
        if(word[x]=='i' || word[x]=='I')
        {
            result= ".."; 
        }
        if(word[x]=='j' || word[x]=='J')
        {
            result= ".---"; 
        }
        if(word[x]=='k' || word[x]=='K')
        {
            result= "-.-"; 
        }
        if(word[x]=='l' || word[x]=='L')
        {
            result= ".-.."; 
        }
        if(word[x]=='m' || word[x]=='M')
        {
            result= "--"; 
        }
        if(word[x]=='n' || word[x]=='N')
        {
            result= "-."; 
        }
        if(word[x]=='o' || word[x]=='O')
        {
            result= "---"; 
        }
        if(word[x]=='p' || word[x]=='P')
        {
            result= ".--."; 
        }
        if(word[x]=='q' || word[x]=='Q')
        {
            result= "--.-"; 
        }
        if(word[x]=='r' || word[x]=='R')
        {
            result= ".-."; 
        }
        if(word[x]=='s' || word[x]=='S')
        {
            result= "..."; 
        }
        if(word[x]=='t' || word[x]=='T')
        {
            result= "-"; 
        }
        if(word[x]=='u' || word[x]=='U')
        {
            result= "..-"; 
        }
        if(word[x]=='v' || word[x]=='V')
        {
            result= "...-"; 
        }
        if(word[x]=='w' || word[x]=='W')
        {
            result= ".--"; 
        }
        if(word[x]=='x' || word[x]=='X')
        {
            result= "-..-"; 
        }
        if(word[x]=='y' || word[x]=='Y')
        {
            result= "-.--"; 
        }
        if(word[x]=='z' || word[x]=='Z')
        {
            result= "--.."; 
        }
        if(word[x]==' ')
        {
            result= "-.-.-.-"; 
        }
        output+=result+" ";
    }
    cout<<output;

}