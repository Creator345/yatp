#include <iostream>

using namespace std;


void withMath(int a,  int b){
    cout << (b / 4 + b / 100 ) - (a / 4 + a / 100 + a / 400 - a  / 100 / 4) << endl;
    
}


void withCycle(int a, int b){
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % 4 == 0 || (i % 100 == 0 && i % 400 == 0))
        count++;
    }
    cout << count << endl;
    
}

int withRec(int a, int  b, int count)
{
    if (a > b) return count;
    if (a % 4 == 0 || (a % 100 == 0 && a % 400 == 0))
     count++;
    return withRec(++a, b, count);

}






int main(){
    int a, b;
    cin >> a >> b;
    withMath(a, b);
    withCycle(a, b);

    cout <<withRec(a, b, 0) << endl;


}