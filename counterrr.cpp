#include <bits/stdc++.h>
using namespace std;

class Counter{
    int counter;
    public:
        void set(int n){
            if (n < 0){
                counter = 0;
            } else{
                counter = n;}
        } 
        void inc(){
            counter++;
        }
        void dec(){
            if(counter > 0)
            counter--;
        }
        void print(){
            cout << counter << endl;
        }
};

int main(){
    Counter c;    
    int input;
    cin >> input;
    while(input != -9){
        switch(input){
            case 0:
                int n;
                cin >> n;
                c.set(n);
                break;
            case 1:
                c.inc();
                break;
            case -1:
                c.dec();
                break;
            case 9:
                c.print();
                break;

    }
    cin >> input;
    }
}
