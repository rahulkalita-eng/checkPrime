#include<iostream>
using namespace std;

//check if prime
bool checkPrime(int n) {
    int i;
    bool isPrime = true;
    if(n == 0 || n == 1) {
        isPrime = false;     //0 & 1 are not prime numbers
    } else {
        for(i=2; i<=n/2; ++i) {
            if(n%i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

//driver code
int main() {
    int n,i;
    bool flag = false;
    cout<<"Enter a positive integer: ";
    cin>>n;
    for(i=2; i<=n/2; ++i) {
        if(checkPrime(i)) {
            if(checkPrime(n-i)) {
                cout<<n<<"="<<i<<"+"<<n-i<<endl;
                flag = true;
            }
        }
    }
    if(!flag) 
        cout<<n<<" can't be expressed as sum of two prime numbers";
    return 0;
}


