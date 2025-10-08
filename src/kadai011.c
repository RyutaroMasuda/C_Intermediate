# include<stdio.h>
# include<math.h>

int main(void){
    int height;
    double standard_weight;
    
    printf("Put your height[cm]:");
    scanf("%d",&height);

    standard_weight = height * height * 22 * pow(10,-4);

    printf("standard weight is %.2f\n",standard_weight);

}