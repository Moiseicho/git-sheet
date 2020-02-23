#include<stdio.h>



int main (){

    int a;

    printf("Enter an odd number between 5 and :");
    scanf("%d", &a);

    char table[a][a];

    for(int i = 0;i < a;i++){

        for(int i1 = 0;i1 < a;i1++){

            if(i == 0){

                if(i1 == 0 || i1 >= a/2){

                    table[i][i1] = '*';

                }else{

                    table[i][i1] = ' ';

                }

            }

            if(i > 0 && i < a/2){

                if(i1 == 0 || i1 == a/2){

                    table[i][i1] = '*';

                }else{

                    table[i][i1] = ' ';

                }

            }

            if(i == a/2){

                table[i][i1] = '*';

            }

            if(i > a/2 && i < a-1){

                if(i1 == a-1 || i1 == a/2){

                    table[i][i1] = '*';

                }else{

                    table[i][i1] = ' ';

                }

            }

            if(i == a - 1){

                if(i1 == a - 1 || i1 <= a/2){

                    table[i][i1] = '*';

                }else{

                    table[i][i1] = ' ';

                }

            }

            printf("%c ", table[i][i1]);

        }

        printf("\n");

    }

    return 0;
}

