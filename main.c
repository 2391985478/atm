#include <stdio.h>

int main(){

    int qian = 0;

    printf("xitong\n");

    while(1){



        printf("1---cunqian\n");
        printf("2---quqian\n");
        printf("3---yue\n");
        printf("4---tuichu\n");

        printf("gongneng\n");

        int code;
        scanf("%d",&code);

        if(code == 1){
            printf("cunru:\n");
            int cun;
            scanf("%d",&cun);
            qian += cun;

            printf("huiche\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code == 2){
            printf("quchu\n");
            int qu;
            scanf("%d",&qu);

            printf("huiche\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
            
        }
        if(code == 3){
            printf("yuewei:\n");
            printf("%d\n",qian);

            printf("huiche\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
            
        }
        if(code == 4){
            printf("tuichu\n");
            break;
            
        }
    }

    return 0;

}