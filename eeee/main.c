#include <stdio.h>
#include <stdlib.h>

int main()
{
    int program = 1;
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    int x4 = 0;
    int x5 = 0;
    int x6 = 0;
    int x7 = 0;
    int x8 = 0;
    int i = 0;
    int o = 1;

    while(program == 1){
    printf("Liczba %d : %d%d%d%d%d%d%d%d\n", i, x8, x7, x6, x5, x4, x3, x2, x1);
    while(i != 255){



    if (x1 == 0){
        x1 = 1;
    }else{
        x1 = 0;
        if (x2 == 0){
            x2 = 1;
        }else{
            x2 = 0;
            if (x3 == 0){
                x3 = 1;
            }else{
                x3 = 0;
                if(x4 == 0){
                    x4 = 1;
                }else{
                    x4 = 0;
                    if(x5 == 0){
                        x5 = 1;
                    }else{
                        x5 = 0;
                        if(x6 == 0){
                            x6 = 1;
                        }else{
                            x6 = 0;
                            if(x7 == 0){
                                x7 = 1;
                            }else{
                                x7 = 0;
                                if(x8 == 0){
                                    x8 = 1;
                                }else{
                                    x8 = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

    printf("Liczba %d : %d%d%d%d%d%d%d%d\n", o, x8, x7, x6, x5, x4, x3, x2, x1);
    i++;
    o = i+1;
    }
    program = 0;
    }

    while(program == 2){
    i = 255;
    x1 = 1;
    x2 = 1;
    x3 = 1;
    x4 = 1;
    x5 = 1;
    x6 = 1;
    x7 = 1;
    x8 = 1;
    printf("Liczba 255 : %d%d%d%d%d%d%d%d\n",x8, x7, x6, x5, x4, x3, x2, x1);
    while(i != 0){



    if (x1 == 1){
        x1 = 0;
    }else{
        x1 = 1;
        if (x2 == 1){
            x2 = 0;
        }else{
            x2 = 1;
            if (x3 == 1){
                x3 = 0;
            }else{
                x3 = 1;
                if(x4 == 1){
                    x4 = 0;
                }else{
                    x4 = 1;
                    if(x5 == 1){
                        x5 = 0;
                    }else{
                        x5 = 1;
                        if(x6 == 1){
                            x6 = 0;
                        }else{
                            x6 = 1;
                            if(x7 == 1){
                                x7 = 0;
                            }else{
                                x7 = 1;
                                if(x8 == 1){
                                    x8 = 0;
                                }else{
                                    x8 = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

    printf("Liczba %d : %d%d%d%d%d%d%d%d\n", i-1, x8, x7, x6, x5, x4, x3, x2, x1);
    i--;
    }
    program = 0;
    }

    while(program == 3){

    }
    return 0;
}
