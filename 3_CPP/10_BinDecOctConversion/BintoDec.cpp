#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    string k;
    cout<<"Enter the binary: ";
    cin>>k;
    string s="";
    int ans=0;
    int power;
    for(int i=0;i<k.length();i++){
         s=k[i];
         int c=stoi(s);
         power=k.length()-i-1;
         ans=ans+c*pow(2,power);
    }
    cout<<"Decima value is: "<<ans;
    return 0;
}
