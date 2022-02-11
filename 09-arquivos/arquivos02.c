#include <stdio.h>

main(){
    double v[3][3]={{2.0, 3.0, 4.5},
                {4.6, 7.9, 5.6},
                {3.3, 5.6, 4.4}};

    char a[20] = "file_name.dat";
    char filename[20]= "Data";

    FILE *out;
    sprintf(filename, "%s", a);

    out = fopen(a, "w");

    for(int i = 0 ; i < 3; i++)
      for(int j = 0 ; j < 3; j++){
        fprintf(out,"%f\t",v[i][j]);
        if(j==3-1){
                fprintf(out,"\n");
                }
      }
fclose(out);

return 0;
}
