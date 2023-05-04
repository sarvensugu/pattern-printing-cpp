#include <iostream>

using namespace std;

int main(){

    // 1. print numbers in boxes

    // int count = 1;

    // for (int i = 0; i < 4; i++){

    //     for (int j = 0; j < 4; j++){

    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    // 2. print right triangle

    // for (int i = 0; i < 4; i++){

    //     for (int j = 0; j < 4; j++){

    //         if (i >= j){
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // 3. print inverted right triangle

    // for (int i = 0; i < 4; i++){

    //     for (int j = 0; j < 4; j++){

    //         if (i > j){
    //             cout<<"  ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // 4. print left triangle

    // for (int i = 0; i < 4; i++){

    //     for (int j = 0; j < 4; j++){

    //         if ( i + j >= 3){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    for (int i = 0; i < 5; i++){

        for (int j = 0; j < 5; j++){

            if ( i + j >= 5){
                cout<<"  ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}