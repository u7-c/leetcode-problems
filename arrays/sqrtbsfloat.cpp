//this is almost same as sqrtbs.cpp
#include<iostream>
using namespace std;

 long long int sqrtInteger(int n) {
        
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
//what this morepreicison actually do?
//THIS IS REALLY IMPORTANT ISKO RATTA MAARLO CHAHE

double morePrecision(int n, int precision, int tempSol) {
    //factor  se isliye initialise kiya takki precision mai 0.1 , 0.01 jaise numbers aa sake
    double factor = 1;
    double ans = tempSol;
//pehla loop 0.1 se o.9 tak push karega jitna precision ka number dia hoga usse pehle tak
    for(int i=0; i<precision; i++) {
        factor = factor/10;
//yeh kya karta hai suppose upar se answer 0.3 aaya yeh main number mai add krta hai
//for example for sqrt of 37 ye 6 ke baad upr wale loop ka answer + karega that s 6.3
//fir usse check krega ke ans ke kitna close suppose 6.4 pe greater aajata that means the loop wil break and answer will be 6.3
        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = sqrtInteger(n);
    //idhr hane basic number aur dono more precision laga ke find out kiya
    //ki with float number zis it the sqrt of 37?
    cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}