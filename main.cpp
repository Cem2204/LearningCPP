#include <iostream>
using namespace std;
int main() {

    int room_A , room_B;
    cout << "Lütfen odanın ilk kenarının ölçüsünü Metre olarak girin : " ;
    cin >> room_A;
    cout << "Lütfen odanın ikinci kenarının ölçüsünü Metre olarak girin : " ;
    cin >> room_B;
    cout << "Odanın alanı " << room_A * room_B << " metrekaredir.";

    return 0;


}
