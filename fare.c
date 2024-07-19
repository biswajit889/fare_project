#include<stdio.h>
#include <string.h>
int main()
{
    printf("Welcome to Fare Chart");
    printf("\nEnter Your Catagory: 1)Child, 2)Adult, 3)Old \n");
    char infor[50];
    char plan[3];
    int pre,eco,sta;
    scanf("%49s",infor);
    
    if (strcmp(infor, "c")==0 || strcmp(infor,"child")==0 || strcmp(infor, "Child")==0 || strcmp(infor, "1")==0 || strcmp(infor, "ch")==0 || strcmp(infor, "chi")==0 || strcmp(infor, "chil")==0 || strcmp(infor, "Child")==0)
    {
        printf("You choice is Child Catagory\n \n");
        printf("Choice your Catagory: 1)Premium, 2)Economy, 3)Standard \n");
        int pre = 8000;
        int eco = 4000;
        int sta = 2500;
        scanf("%3s",plan);
        if (strcmp(plan, "1")==0 || strcmp(plan, "p")==0 || strcmp(plan, "pr")==0 || strcmp(plan, "pre")==0)
        {
            printf("You choice is Premium Catagory :\n");
            printf("%d",pre);
        }
        else if (strcmp(plan, "2")==0 || strcmp(plan, "e")==0 || strcmp(plan, "ec")==0 || strcmp(plan, "eco")==0)
        {
            printf("You choice is Economy Catagory :\n");
            printf("%d",eco);
        }
        else if (strcmp(plan, "3")==0 || strcmp(plan, "s")==0 || strcmp(plan, "st")==0 || strcmp(plan, "sta")==0)
        {
            printf("You choice is Economy Catagory :\n");
            printf("%d",sta);
        }
        else{
            printf("sorry something went wrong");
        }
        
        
        
        
    }
    else if (strcmp(infor, "a")==0 || strcmp(infor,"Adult")==0 || strcmp(infor, "adult")==0 || strcmp(infor,"2")==0 || strcmp(infor,"ad")==0 ||strcmp(infor,"adu")==0 ||strcmp(infor,"adul")==0 ||strcmp(infor,"adult")==0 ||strcmp(infor,"A")==0)
    {
        printf("Your choice is Adult \n");
        printf("Choice your Catagory: 1)Premium, 2)Economy, 3)Standard \n");
        int pre = 20000;
        int eco = 14000;
        int sta = 8000;
        scanf("%3s",plan);
        if (strcmp(plan, "1")==0 || strcmp(plan, "p")==0 || strcmp(plan, "pr")==0 || strcmp(plan, "pre")==0)
        {
            printf("You choice is Premium Catagory :\n");
            printf("%d",pre);
        }
        else if (strcmp(plan, "2")==0 || strcmp(plan, "e")==0 || strcmp(plan, "ec")==0 || strcmp(plan, "eco")==0)
        {
            printf("You choice is Economy Catagory :\n");
            printf("%d",eco);
        }
        else if (strcmp(plan, "3")==0 || strcmp(plan, "s")==0 || strcmp(plan, "st")==0 || strcmp(plan, "sta")==0)
        {
            printf("You choice is Economy Catagory :\n");
            printf("%d",sta);
        }
        else{
            printf("sorry something went wrong");
        }
        
    }
    else if (strcmp(infor, "o")==0 || strcmp(infor,"old")==0 || strcmp(infor, "Old")==0 || strcmp(infor, "ol")==0 || strcmp(infor, "old")==0|| strcmp(infor, "O")==0)
    {
        printf("Your choice is Old \n");
        printf("Choice your Catagory: 1)Premium, 2)Economy, 3)Standard ");
        int pre = 25000;
        int eco = 18000;
        int sta = 14000;
        scanf("%3s",plan);
        if (strcmp(plan, "1")==0 || strcmp(plan, "p")==0 || strcmp(plan, "pr")==0 || strcmp(plan, "pre")==0)
        {
            printf("You choice is Premium Catagory :\n");
            printf("%d",pre);
        }
        else if (strcmp(plan, "2")==0 || strcmp(plan, "e")==0 || strcmp(plan, "ec")==0 || strcmp(plan, "eco")==0)
        {
            printf("You choice is Economy Catagory :\n");
            printf("%d",eco);
        }
        else if (strcmp(plan, "3")==0 || strcmp(plan, "s")==0 || strcmp(plan, "st")==0 || strcmp(plan, "sta")==0)
        {
            printf("You choice is Economy Catagory :\n");
            printf("%d",sta);
        }
        else{
            printf("sorry something went wrong");
        }
    }
    else{
        printf("false Choice");
    }
    

    return 0;
}

