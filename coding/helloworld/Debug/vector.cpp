#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std; 

string data[200][200];//declaring variable to store word globally to access in all functions 

//*****************
//function to print the words of the entered text
//*****************
void printWords(string str) 
{ 
    int i=1;
    string word;   
    stringstream iss(str);   
    while (iss >> word){
        data[i][200]=word;
        cout<<i<<" : "<<data[i][200]<<endl;
        i++;
    }
}
//*********************
//function to find the count of the word in the entered text
//*********************
void findcount(string str,string substr) 
{ 
    int count=0;
    string word;   
    stringstream iss(str);   
    while (iss >> word){
        if(word==substr)
        count++;
    }
    cout<<"The occurance of the word "<<substr<<" is "<<count<<" times in the entered text.";
} 
//*********************
  
int main() 
{ 
    
    vector <string> colour; // Declaring Vector of String type.
    string text; //variable to accept text from user.
    int choice; // variable to accept choice of word from user.

    cout<<"Enter the line of text"<<endl;
    getline(cin,text);
    //********************
    cout<<"The words in the entered text are : "<<endl;
    printWords(text); 
    cout<<"Select a word to form vector elements : ";
    cin>>choice;
    //********************

    // Initialize vector with strings using push_back command
    cout<<endl;
    colour.push_back("blue"+data[choice][200]); 
    colour.push_back("Red"+data[choice][200]); 
    colour.push_back("Orange"+data[choice][200]); 
    colour.push_back("Yellow"+data[choice][200]); 
    cout<<"The vectors with the selected word is as follows : "<<endl;
    
    // Print Strings stored in Vector 
    for (int i=0; i<colour.size(); i++)     
        cout << colour[i] << "\n";    
    // Finding the number of occurance of the string in the entered text.        
    findcount(text,data[choice][200]);
}