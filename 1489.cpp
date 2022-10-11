#include<iostream>
#include<cmath>
#include<iomanip>


using namespace std;



int main(){

    int a = -1,
        b = -1, 
        c = -1;

    cin >> a >> b >> c;

    int x1 = -1,
        x2 = -1,
        y1 = -1,
        y2 = -1;

    cin >> x1 >> y1;
    cin >> x2 >> y2;




    double dot1_on_z_3D = -1,
           dot1_on_x_3D = -1,
           dot1_on_y_3D = -1;

    //боковые грани C для первой точки
    //.
    if (x1 <= c){
        dot1_on_z_3D = x1;
        dot1_on_x_3D = 0;
        dot1_on_y_3D = y1 - b - c;
    }else{
        //.
        if (x1 >= a + c){
            dot1_on_z_3D = x1 - a;
            dot1_on_x_3D = a;
            dot1_on_y_3D = y1 - b - c;
        }else{
        //средние грани для первой точки
            //.
            dot1_on_x_3D = x1 - c;
            //.
            if (y1 <= b){
                dot1_on_z_3D = 0; 
                dot1_on_y_3D = b - y1;
            }else{
                //
                if (y1 <= c + b){
                    dot1_on_z_3D = y1 - b;
                    dot1_on_y_3D = 0;
                }else{
                    if(y1 <= 2 * b + c){
                        dot1_on_z_3D = c;
                        dot1_on_y_3D = y1 - b - c;
                    }else{
                        dot1_on_y_3D = b;
                        dot1_on_z_3D = c - y1 - b - c - b; 
                    }
                }
            }
        }
    }






    double dot2_on_z_3D = -1,
        dot2_on_x_3D = -1,
        dot2_on_y_3D = -1;

    //боковые грани C для второй точки

    if (x2 <= c){
        dot2_on_z_3D = x2;
        dot2_on_x_3D = 0;
        dot2_on_y_3D = y2 - b - c;
    }else{
        if (x2 >= a + c){
            dot2_on_z_3D = x2 - a;
            dot2_on_x_3D = a;
            dot2_on_y_3D = y2 - b - c;
        }else{
        //средние грани для первой точки
            dot2_on_x_3D = x2 - c;
            if (y2 <= b){
                dot2_on_z_3D = 0; 
                dot2_on_y_3D = b - y2;
            }else{
                if (y2 <= c + b){
                    dot2_on_z_3D = y2 - b;
                    dot2_on_y_3D = 0;
                }else{
                    if(y2 <= 2 * b + c){
                        dot2_on_z_3D = c;
                        dot2_on_y_3D = y2 - b - c;
                    }else{
                        dot2_on_y_3D = b;
                        dot2_on_z_3D = c - y2 - b - c - b; 
                    }
                }
            }
        }
    }

    double ans = sqrt((dot2_on_x_3D - dot1_on_x_3D) * (dot2_on_x_3D - dot1_on_x_3D) + (dot2_on_y_3D - dot1_on_y_3D) * (dot2_on_y_3D - dot1_on_y_3D) + (dot2_on_z_3D - dot1_on_z_3D) * (dot2_on_z_3D - dot1_on_z_3D));
    cout << setprecision(6) << ans << endl;
}