#include <iostream>
using namespace std;
void fastsort(int m[],int size);
int main(int argc[]) {
    int a,b;
    a = 1;
    b = 2;
    cout<<a+b<<endl;
    int test[10] = {2,4,3,1,0,7,5,8,6,9};
    fastsort(test,10);
    for(int i:test){
        cout<<i;
    }
    return 0;
}

void fastsort(int test[],int size){

    for(int j =2;j<size;j++){
        if(test[j]<test[j-1]){

        }
    }

}
