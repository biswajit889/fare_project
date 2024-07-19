#include<stdio.h>
#include <string.h>
int main()
{
    printf("\nEnter Your Catagory: 1)Child, 2)Adult, 3)Old \n");
    char infor[50];
    char plan[3];
    int pre,eco,stand;
    scanf("%49s",infor);
    
    if (strcmp(infor, "c")==0 || strcmp(infor,"child")==0 || strcmp(infor, "Child")==0 || strcmp(infor, "1")==0 || strcmp(infor, "ch")==0 || strcmp(infor, "chi")==0 || strcmp(infor, "chil")==0 || strcmp(infor, "Child")==0)
    {
        printf("You choice is Child Catagory\n \n");
        printf("Choice your Catagory: 1)Premium, 2)Economy, 3)Standard \n");
        int pre = 2500;
        int eco = 4000;
        int stand = 8000;
        scanf("%3s",plan);
        if (strcmp(plan, "1")==0 || strcmp(plan, "p")==0 || strcmp(plan, "pr")==0 || strcmp(plan, "pre")==0)
        {
            printf("You choice");
        }
        else{
            printf("");
        }
        
        
        
        
    }
    else if (strcmp(infor, "a")==0 || strcmp(infor,"Adult")==0 || strcmp(infor, "adult")==0 || strcmp(infor,"2")==0 || strcmp(infor,"ad")==0 ||strcmp(infor,"adu")==0 ||strcmp(infor,"adul")==0 ||strcmp(infor,"adult")==0 ||strcmp(infor,"A")==0)
    {
        printf("Your choice is Adult \n");
        printf("Choice your Catagory: 1)Premium, 2)Economy, 3)Standard \n");
        int pre = 8000;
        int eco = 14000;
        int stand = 20000;
        // scanf("%3s",plan);
        printf("%d",pre);
    }
    else if (strcmp(infor, "o")==0 || strcmp(infor,"old")==0 || strcmp(infor, "Old")==0 || strcmp(infor, "ol")==0 || strcmp(infor, "old")==0|| strcmp(infor, "O")==0)
    {
        printf("Your choice is Old \n");
        printf("Choice your Catagory: 1)Premium, 2)Economy, 3)Standard ");
        int pre = 14000;
        int eco = 18000;
        int stand = 25000;
        // scanf("%3s",plan);
        printf("%d",pre);
    }
    else{
        printf("false Choice");
    }
    

    return 0;
}

