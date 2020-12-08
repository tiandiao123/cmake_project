#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

double power(double base, int exponent){

    int result = base;
    int i;

    if(exponent == 0){
    return 1;
    }

    for(int i=1;i<exponent;i++){
       result = result*base;
    }


    return result;
}




int main(int argc, char *argv[]){

    if(argc < 3){
        printf("provide base and expoent?");
	return -1;
    }

    double base = atof(argv[1]);
    double exponent = atoi(argv[2]);



    double res = power(base, exponent);
    cout<<"final ersult is :"<<endl;
    cout << res << endl;
    return 0;

}
