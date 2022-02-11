#include <stdio.h>
#include <stdlib.h>


int main() {
    /*int m[2][2] = {{1, 2},
                   {1, 2}};
    int v[2][2] = {{1, 2},
                   {1, 2}};*/
    int n;
    printf("Enter the dimension of the matrix: ");
    scanf("%d", &n);

    float *M[n];
    for (int i = 0 ; i<n; i++){
        //for (int j = 0; j < n; j++) {
            printf("Enter the element %d of the matrix: ", i);
            scanf("%f", M);
        }
    for (int i = 0 ; i<n; i++)
        //for (int j = 0; j < n; j++) {
            printf("%f\t",M);
            //if(j==n-1)
              //  printf("\n");
        //}

    return EXIT_SUCCESS;
}
