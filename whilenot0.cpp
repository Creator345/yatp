#include<iostream>

using namespace std;

int main(){
    int input;
    
    cin >> input;
    char m = ' ',
         m1 = ' ';
    int max = input,
        secmax = input,
        temp;
    bool ans = true;
    int i = 0;
    while (input != 0){
        i++;
        temp = input;
        cin >> input;
        if (input > temp)
        {
            m = 'u';
        }else{
            if (input < temp){
                m = 'd';

            }else m = 'n';
        }
        if (i > 1 && m != m1)  
            ans = false;
        
        if (input > max){
            secmax = max;
            max = input;
        }
        
    }

    cout << max << ' ' << secmax << ' ' << m <<  endl;

}