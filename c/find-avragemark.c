#include<stdio.h>

int main() {

    int mark[] = {24,56,93,12,49,70};
    int lenth = 6;

    int sum = 0;
    for(int i = 0;i < lenth;i++){
        sum += mark[i];
    }
    int avarage = sum / lenth;
    printf("%d avarge mark in class",avarage);
    // printf("%d is sum",sum);

    return 0;
}