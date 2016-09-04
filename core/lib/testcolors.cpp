#include <iostream>
#include "rlutil.h"
using namespace std;

int main(){

int control, i;

printf("Enter number ->");
cin >> control;

for(i=0;i<=control;i++){
    cout << "Color digit:" << i << endl;
    rlutil::setColor(i);

}

    rlutil::setColor(8);

    return 0;
}
