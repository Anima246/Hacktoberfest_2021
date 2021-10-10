//Write a method called vowelCount that accepts a String as a parameter and produces/returns an array of integers representing the count of each vowel in the String. 
//The array returned by your method should hold five elements: the first is the count of the 'A's, the second is the count of 'E's, the third 'I"s, the fourth 'O's and the fifth the number of 'U's. 

//Your count should check for both upper and lower case versions.

//For example the call vowelCount("I think therefore I am") should return the array [1,3,3,1,0].

#include <iostream>  // standard input output library
#include <tuple>  // tuple library is  used to return multiple values
using namespace std;

// vowelCount function defined
tuple <int, int, int, int, int> vowelCount(string s){
    static int arr[5];  // static used so that array is initialised by 0 itself
    // condition to check for vowels and incrementing when vowel occur
    for(int i = 0; s[i]!='\0'; ++i){
        if(s[i]=='a' || s[i]=='A')
        {
            arr[0]= arr[0] + 1;
        }
        
        if(s[i]=='e' || s[i]=='E')
        {
            arr[1]= arr[1] + 1;
        }
        
        if(s[i]=='i' || s[i]=='I')
        {
            arr[2]= arr[2] + 1;
        }
        
        if(s[i]=='o' || s[i]=='O')
        {
            arr[3]= arr[3] + 1;
        }
        
        if(s[i]=='u' || s[i]=='U')
        {
            arr[4]= arr[4] + 1;
        }
        
    }
    // returning the array of vowels
    return {arr[0],arr[1], arr[2], arr[3], arr[4]};
}

int main()
{
    string st;
    getline(cin,st);
    // auto is used for structure binding declaration
    auto [value1, value2, value3, value4, value5] = vowelCount(st);  
    cout<<value1 <<" "<<value2<<" "<<value3<<" "<<value4<<" "<<value5;
    
}
