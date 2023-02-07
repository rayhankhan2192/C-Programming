#include <bits/stdc++.h>
using namespace std;

int main(){
    int array[5] = {2,5,1,3,4};
    int i,j,min_index;
    //outer loop for iterate over all the number
    for(i=0; i<5; i++){
        min_index = i;
        //inner loop to find minimum number
        for(j=i+1; j<5; j++){
            if(array[j]<array[min_index]){
                min_index = j;
            }
        }
        swap(array[min_index],array[i]);
     }
     for(i=0; i<5; i++){
        printf("%d ",array[i]);
     }
    return 0;
}
