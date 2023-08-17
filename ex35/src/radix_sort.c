#include <stdio.h>

void display(int array[], int size);
void radixsorting(int array[], int size);

int main(){
    int a[8] = {12, 63, 5, 23, 0, 200, 325, 199};
    int n = sizeof(a)/ sizeof(a[0]);
    radixsorting(a,n);
    display(a, n);
}

int getMaxelem(int arr[], int n){
    int i;
    int max_ele = arr[0];
    for (i=1;i<n;i++){
        if(arr[i]>max_ele){
            max_ele=arr[i];
        }
    }
    return max_ele;
}

void countingSort(int arr[], int size, int place){
    int i;
    int output[size+1];
    int max = (arr[0]/place) % 10;

    for(i=1;i<size;i++){
        if(((arr[i]/place)%10)>max){
            max = arr[i];
        }
    }
    int count[max+1];

    for(i=0;i<max;i++){
        count[i]=0;
    }

    for(i=0;i<size;i++){
        count[(arr[i]/place)%10]++;
    }
    for(i=1;i<10;i++){
        count[i]+=count[i-1];
    }
    for(i=size-1;i>=0;i--){
        output[count[(arr[i]/place)%10]-1] = arr[i];
        count[(arr[i]/place)%10]--;
    }
    for(i=0;i<size;i++){
        arr[i]=output[i];
    }
    for(i=0;i<size;++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void radixsorting(int array[], int size){
    int place;
    int max=getMaxelem(array, size);
    for(place = 1; max/place>0;place*=10){
        countingSort(array,size,place);
    }
}

void display(int array[], int size){
    int i;
    printf("Ordenação final: \n");
    for(i=0;i<size;++i){
        printf("%d ", array[i]);
    }
    printf("\n");
}