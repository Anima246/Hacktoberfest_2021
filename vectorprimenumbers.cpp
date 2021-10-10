#include<iostream>
#include<vector>
using namespace std;

void prime(int x){
    int count=0;
    int m=x/2;
    for(int i=2; i<=m; i++){
        if(x%i==0){
            //cout<<"not prime";
            count=1;
            break;
        }
    }
    if(count==0){
        cout<<x<<" ";
    }
}
int main(){
    int n,count=0;
    cout<<"enter the size of the array: ";
    cin>>n;
    vector<int> numbers(n);
    for (int i=0; i<n; i++){
        cin>>numbers[i];
    }
    cout<<"prime numbers in the vector array are: \n";
    for (int i=0; i<n;i++){
        prime(numbers[i]);
    }    
    return 0;
}
