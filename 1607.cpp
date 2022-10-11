#include<iostream>

int main(){
 int petya, petya_add, taxist, taxist_minus;
 std::cin >> petya >> petya_add >> taxist >> taxist_minus;
 while (true){
    if (petya >= taxist){
        std::cout << petya;
        break;
    }
    petya += petya_add;
    if (petya >= taxist){
        std::cout << petya;
        break;
    }
    taxist -= taxist_minus;

 }
}