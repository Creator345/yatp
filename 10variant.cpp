#include<iostream>

using namespace std;

int sum_of_numbers(int number){
    
    int sum = 0;
    while (number > 0){
        sum += number % 10;
        number /= 10;
    }
    return sum;
}


int main(){
    
    int count(0),
        m, n;
    cin >> m >> n;
    bool flag;
    for (int i = m; i <= n; i++){
        flag = false;
        for (int j = 1; j < i; j++){
            if(sum_of_numbers(j) + j == i){
                
                cout << i << ": " << j << ' ' << sum_of_numbers(j) << endl; 
                flag = true;
                break;
            }
        }
        if (flag == false){
            count += 1;
            cout << "FALSE: " << i << endl;
            
        }
    }
    cout << "\n";
    cout << "Answer : "<< count << endl;

}