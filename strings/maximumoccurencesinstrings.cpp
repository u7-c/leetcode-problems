#include<iostream>
#include<string>
using namespace std;
char getmaxocccharacter(string s){
    int arr[100]={0};
    for (int i=0;i<s.length();i++){
        char ch= s[i];
        int number =0;
        if (ch >='a' && ch<='z'){
            number= ch-'a';
        }
         if (ch >='A' && ch<='Z'){
            number= ch-'A';
        }
        arr[number]++;
    }
    int maxi=-1;
    int ans=0;
    for (int i=0;i<s.length();i++){
        if(maxi < arr[i]){
            ans=i;
            maxi= arr[i];
        }
    }
    char finalAns='a'+ ans;
    return finalAns;

}
int main(){
    string s;
    cin >> s;
    cout << getmaxocccharacter(s) << endl;
    return 0;
}