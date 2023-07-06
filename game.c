#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *char_name[20]={"\tGOKE","\tBARUTO","\tLUPPY","\tVAGAMI","\tGOGO","\tSANJIRO","\tBAITAMA","\tEREH","\tJIRITO","\tDIOO"};
void display_name();
void main()
{
    printf("_________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\tWELCOME TO CROSSOVER FIGHTERS\t\t\t\t\t\t\n");
    printf("_________________________________________________________________________________________________________________________________");
    menu:
    printf("\n1] START \n2] EXIT\n");
    int op;
    scanf("%d",&op);
    switch(op)
    {
    case 1:
    display_name();
    printf("\t\t\t\t\t****\tCHOOSE TWO CHARACTER EACH\t****\n\n");
    int choice;
    char *playername1[3];
    char *playername2[3];
    int ch1[6],i,j,ch2[6];
    int player1[2],player2[2];
    
    for(i=0;i<2;i++)
    {
         player1:
         printf("\t\t\t\tPlayer [1] chooses :");
         scanf("%d",&choice);
         for(int j=0;j<6;j++){
        if(choice==ch1[j])
        {
            printf("\t\t\t----\tCHARACTER ALREADY TAKEN\t----\n");
            goto player1;
        }}
        
        switch(choice)
            {
                case 1:
                *(playername1+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername1+i));
                player1[i]=choice-1;
                break;
                case 2:
                *(playername1+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername1+i));
                player1[i]=choice-1;
                break;
                case 3:
                *(playername1+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername1+i));
                player1[i]=choice-1;
                break;
                case 4:
                *(playername1+i)=char_name[choice-1];
                printf("\t\t\t\t%s\n",*(playername1+i));
                player1[i]=choice-1;
                break;
                case 5:
                *(playername1+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername1+i));
                player1[i]=choice-1;
                break;
                case 6:
                *(playername1+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername1+i));
                player1[i]=choice-1;
                break;
                case 7:
                *(playername1+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername1+i));
                player1[i]=choice-1;
                break;
                case 8:
                *(playername1+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername1+i));
                player1[i]=choice-1;
                break;
                case 9:
                *(playername1+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername1+i));
                player1[i]=choice-1;
                break;
                case 10:
                *(playername1+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername1+i));
                player1[i]=choice-1;
                break;
                default:
                printf("Kindly choose within the list\n");
                goto player1;


            }
            ch1[i]=choice;
            
        player2:
        printf("\t\t\t\tPlayer [2] chooses :");
        scanf("%d",&choice);
        for(int j=0; j<6; j++){
        if(choice==ch2[j])
        {
            printf("\t\t\t----\tCHARACTER ALREADY TAKEN\t----\n");
            goto player2;
        }}
       
        switch(choice)
            {
                case 1:
                *(playername2+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername2+i));
                player2[i]=choice-1;
                break;
                case 2:
                *(playername2+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername2+i));
                player2[i]=choice-1;
                break;
                case 3:
                *(playername2+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername2+i));
                player2[i]=choice-1;
                break;
                case 4:
                *(playername2+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername2+i));
                player2[i]=choice-1;
                break;
                case 5:
                *(playername2+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername2+i));
                player2[i]=choice-1;
                break;
                case 6:
                *(playername2+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername2+i));
                player2[i]=choice-1;
                break;
                case 7:
                *(playername2+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername2+i));
                player2[i]=choice-1;
                break;
                case 8:
                *(playername2+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername2+i));
                player2[i]=choice-1;
                break;
                case 9:
                *(playername2+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername2+i));
                player2[i]=choice-1;
                break;
                case 10:
                *(playername2+i)=char_name[choice-1];
                printf("\t\t\t\t\t\t%s\n",*(playername2+i));
                player2[i]=choice-1;
                break;
                default:
                printf("Kindly choose within the list\n");
                goto player2;


            }
        
        ch2[i]=choice;
    }
    //health and attack initialize
    int health[10];
    int healthplayer1[2];
    int healthplayer2[2];
    int attackplayer1[2];
    int attackplayer2[2];
    for(int i=0; i<10; i++)
    {
        health[i]=200;
    }
    int attack[10]={15,12,13,10,13,11,15,12,12,14};
    printf("\n\n\n|\t\t\t\tPLAYER [1]\t\t\t\tPLAYER [2]\t\t\t|\n");
    printf("|-------------------------------------------------------------------------------------------------------|\n");
    for(int i=0;i<2;i++)
    {
        printf("|\t\t\t%s\t\t\t\t%s\t\t\t\t|\n",playername1[i],playername2[i]);
    }
    for(int i=0;i<2;i++)
    {
       for(int j=0;j<10;j++)
       {
         if(player1[i]==j)
         {
            healthplayer1[i] =health[j];
            attackplayer1[i] =attack[j];
         }
       }
    }
    for(int i=0;i<2;i++)
    {
       for(int j=0;j<10;j++)
       {
         if(player2[i]==j)
         {
         healthplayer2[i] =health[j];
         attackplayer2[i] =attack[j];
            
         }
       }
    }
    //FIGHT START
    printf("\n\n\n\n\t\t\t--------------------------****FIGHT****--------------------------\n");
    printf("\n|\t\t\t      PLAYER [1]\t\t\t\tPLAYER [2]\t\t\t|\n");
    for(int i=0;i<2;i++)
    {
        printf("\n|\t\t\t%s\t\t\t\t%s\t\t\t\t|\n",playername1[i],playername2[i]);
        printf("|\t\t\t\tHTH=%d\t\t\t\t\tHTH=%d\t\t\t\t|\n",healthplayer1[i],healthplayer2[i]);
        printf("|\t\t\t\tATK=%d\t\t\t\t\tATK=%d\t\t\t\t|\n",attackplayer1[i],attackplayer2[i]);

    }
    int special_attack_p11=0,special_attack_p12=0,special_attack_p21=0,special_attack_p22=0;
    while(((healthplayer1[0]>0)||(healthplayer1[1]>0))&&((healthplayer2[0]>0)||(healthplayer2[1]>0)))
    {
       
       int x,y,p,q;
       if((healthplayer1[0]<0)&&(healthplayer1[1]<0)){break;}
       p1:
       printf("CHOOSE YOUR ATTACKER PLAYER 1:\n");
       scanf("%d",&x);
       if(x>2){printf("\t\t\t\tINVALID CHOICE\t\t\t\t\n");
       goto p1;}
       if(healthplayer1[x-1]<=0){printf("\t\t\t\tCHARACTER DOWN\t\t\t\t\n");
       goto p1;}
       printf("CHOOSE YOUR TARGET PLAYER 1:\n");
       scanf("%d",&y);
       if(y>2){printf("\t\t\t\tINVALID CHOICE\t\t\t\t\n");
       goto p1;}
       if(healthplayer2[y-1]<=0){printf("\t\t\t\tCHARACTER ALREADY DEFEATED\t\t\t\t\n");
       goto p1;}
       
       healthplayer2[y-1]=healthplayer2[y-1]-attackplayer1[x-1];
       for(int i=0;i<2;i++)
    {
        printf("\n|\t\t\t%s\t\t\t\t%s\t\t\t\t|\n",playername1[i],playername2[i]);
        printf("|\t\t\t\tHTH=%d\t\t\t\t\tHTH=%d\t\t\t\t|\n",healthplayer1[i],healthplayer2[i]);
        printf("|\t\t\t\tATK=%d\t\t\t\t\tATK=%d\t\t\t\t|\n",attackplayer1[i],attackplayer2[i]);

    }
    if(x==1){special_attack_p11++;}    //special attack counter
    else if(x==2){special_attack_p12++;}
    if((healthplayer2[0]<0)&&(healthplayer2[1]<0)){break;}
       p2:
       printf("CHOOSE YOUR ATTACKER PLAYER 2:\n");
       scanf("%d",&p);
       if(p>2){printf("\t\t\t\tINVALID CHOICE\t\t\t\t\n");
       goto p2;}
       if(healthplayer2[p-1]<=0){printf("\t\t\t\tCHARACTER DOWN\t\t\t\t\n");
       goto p2;}
       printf("CHOOSE YOUR TARGET PLAYER 2:\n");
       scanf("%d",&q);
       if(q>2){printf("\t\t\t\tINVALID CHOICE\t\t\t\t\n");
       goto p2;}
       if(healthplayer1[q-1]<=0){printf("\t\t\t\tCHARACTER ALREADY DEFEATED\t\t\t\t\n");
       goto p2;}
       healthplayer1[q-1]=healthplayer1[q-1]-attackplayer2[p-1];
       for(int i=0;i<2;i++)
    {
        printf("\n|\t\t\t%s\t\t\t\t%s\t\t\t\t|\n",playername1[i],playername2[i]);
        printf("|\t\t\t\tHTH=%d\t\t\t\t\tHTH=%d\t\t\t\t|\n",healthplayer1[i],healthplayer2[i]);
        printf("|\t\t\t\tATK=%d\t\t\t\t\tATK=%d\t\t\t\t|\n",attackplayer1[i],attackplayer2[i]);

    }
    if(p==1){special_attack_p21++;} //special attack counter
    else if(p==2){special_attack_p22++;}
    //SPECIAL ATTACK
    if(special_attack_p11==5)
    {
        switch(player1[0])
        {
            case 0:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]-50;
            healthplayer2[1]=healthplayer2[1]-50;
            break;
            case 1:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[y-1]=healthplayer2[y-1]-70;
            break;
            case 2:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK  >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]-50;
            healthplayer1[1]=healthplayer2[1]-30;
            break;
            case 3:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]-200;
            healthplayer2[1]=healthplayer2[1]-200;
            break;
            case 4:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]-40;
            healthplayer2[1]=healthplayer2[1]-40;
            break;
            case 5:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]+30;
            healthplayer2[1]=healthplayer2[1]+30;
            break;
            case 6:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[y-1]=healthplayer2[y-1]-200;
            break;
            case 7:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]-35;
            healthplayer2[1]=healthplayer2[1]-25;
            break;
            case 8:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]-40;
            healthplayer2[1]=healthplayer2[1]-40;
            break;
            case 9:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]-20;
            healthplayer2[1]=healthplayer2[1]-80;
            break;

        }for(int i=0;i<2;i++)
            {
             printf("\n|\t\t\t%s\t\t\t\t%s\t\t\t\t|\n",playername1[i],playername2[i]);
             printf("|\t\t\t\tHTH=%d\t\t\t\t\tHTH=%d\t\t\t\t|\n",healthplayer1[i],healthplayer2[i]);
             printf("|\t\t\t\tATK=%d\t\t\t\t\tATK=%d\t\t\t\t|\n",attackplayer1[i],attackplayer2[i]);

            }special_attack_p11=0;
    }
    if(special_attack_p12==5)
    {
        switch(player1[1])
        {
            case 0:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]-50;
            healthplayer2[1]=healthplayer2[1]-50;
            break;
            case 1:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[y-1]=healthplayer2[y-1]-70;
            break;
            case 2:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]-50;
            healthplayer1[1]=healthplayer2[1]-30;
            break;
            case 3:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]-200;
            healthplayer2[1]=healthplayer2[1]-200;
            break;
            case 4:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]-40;
            healthplayer2[1]=healthplayer2[1]-40;
            break;
            case 5:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]+30;
            healthplayer2[1]=healthplayer2[1]+30;
            break;
            case 6:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[y-1]=healthplayer2[y-1]-200;
            break;
            case 7:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]-35;
            healthplayer2[1]=healthplayer2[1]-25;
            break;
            case 8:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]-40;
            healthplayer2[1]=healthplayer2[1]-40;
            break;
            case 9:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 1 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer2[0]=healthplayer2[0]-20;
            healthplayer2[1]=healthplayer2[1]-80;
            break;

        }
            for(int i=0;i<2;i++)
            {
             printf("\n|\t\t\t%s\t\t\t\t%s\t\t\t\t|\n",playername1[i],playername2[i]);
             printf("|\t\t\t\tHTH=%d\t\t\t\t\tHTH=%d\t\t\t\t|\n",healthplayer1[i],healthplayer2[i]);
             printf("|\t\t\t\tATK=%d\t\t\t\t\tATK=%d\t\t\t\t|\n",attackplayer1[i],attackplayer2[i]);

            }special_attack_p12=0;
    }
    if(special_attack_p21==5)
    {
        switch(player2[0])
        {
            case 0:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]-50;
            healthplayer1[1]=healthplayer1[1]-50;
            break;
            case 1:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[q-1]=healthplayer1[q-1]-70;
            break;
            case 2:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]-50;
            healthplayer1[1]=healthplayer1[1]-30;
            break;
            case 3:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]-200;
            healthplayer1[1]=healthplayer1[1]-200;
            break;
            case 4:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]-40;
            healthplayer1[1]=healthplayer1[1]-40;
            break;
            case 5:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]+30;
            healthplayer1[1]=healthplayer1[1]+30;
            break;
            case 6:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[q-1]=healthplayer1[q-1]-200;
            break;
            case 7:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]-35;
            healthplayer1[1]=healthplayer1[1]-25;
            break;
            case 8:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]-40;
            healthplayer1[1]=healthplayer1[1]-40;
            break;
            case 9:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]-20;
            healthplayer1[1]=healthplayer1[1]-80;
            break;

        }for(int i=0;i<2;i++)
            {
             printf("\n|\t\t\t%s\t\t\t\t%s\t\t\t\t|\n",playername1[i],playername2[i]);
             printf("|\t\t\t\tHTH=%d\t\t\t\t\tHTH=%d\t\t\t\t|\n",healthplayer1[i],healthplayer2[i]);
             printf("|\t\t\t\tATK=%d\t\t\t\t\tATK=%d\t\t\t\t|\n",attackplayer1[i],attackplayer2[i]);

            }special_attack_p21=0;
    }
    if(special_attack_p22==5)
    {
        switch(player2[1])
        {
            case 0:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]-50;
            healthplayer1[1]=healthplayer1[1]-50;
            break;
            case 1:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[q-1]=healthplayer1[q-1]-70;
            break;
            case 2:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]-50;
            healthplayer1[1]=healthplayer1[1]-30;
            break;
            case 3:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]-200;
            healthplayer1[1]=healthplayer1[1]-200;
            break;
            case 4:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]-40;
            healthplayer1[1]=healthplayer1[1]-40;
            break;
            case 5:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]+30;
            healthplayer1[1]=healthplayer1[1]+30;
            break;
            case 6:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[q-1]=healthplayer1[q-1]-200;
            break;
            case 7:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]-35;
            healthplayer1[1]=healthplayer1[1]-25;
            break;
            case 8:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]-40;
            healthplayer1[1]=healthplayer1[1]-40;
            break;
            case 9:
            printf("\n\t\t\t\t<<<<<<<<<<  PLAYER 2 USING SPECIAL ATTACK   >>>>>>>>>>>\t\t\t\t\n");
            healthplayer1[0]=healthplayer1[0]-20;
            healthplayer1[1]=healthplayer1[1]-80;
            break;
            }
            for(int i=0;i<2;i++)
            {
             printf("\n|\t\t\t%s\t\t\t\t%s\t\t\t\t|\n",playername1[i],playername2[i]);
             printf("|\t\t\t\tHTH=%d\t\t\t\t\tHTH=%d\t\t\t\t|\n",healthplayer1[i],healthplayer2[i]);
             printf("|\t\t\t\tATK=%d\t\t\t\t\tATK=%d\t\t\t\t|\n",attackplayer1[i],attackplayer2[i]);

            }special_attack_p22=0;
    }}
    printf("_________________________________________________________________________________________________________________________________");
    printf("\n\t\t\t\t\t\tWINNER\t\t\t\t\t\t\n");
    printf("_________________________________________________________________________________________________________________________________");
    if((healthplayer1[0]<=0)&&(healthplayer1[1]<=0))
    {
        printf("\n\t\t\t\t\t\tPLAYER 2\t\t\t\t\t\n");
    }
    else
    {
        printf("\n\t\t\t\t\t\tPLAYER 1\t\t\t\t\t\n");

    }
    printf("_________________________________________________________________________________________________________________________________\n");
    printf("*********************************************************************************************************************************\n");
    printf("_________________________________________________________________________________________________________________________________\n");
    case 2:
    exit(0);
    default:
    printf("INVALID CHOICE\n");
    goto menu;}
}
void display_name()
{
    char *char_name1[20]={"\t\t\t\t\t\t1.\tGOKE","\t\t\t\t\t\t2.\tBARUTO","\t\t\t\t\t\t3.\tLUPPY","\t\t\t\t\t\t4.\tVAGAMI","\t\t\t\t\t\t5.\tGOGO","\t\t\t\t\t\t6.\tSANJIRO","\t\t\t\t\t\t7.\tBAITAMA","\t\t\t\t\t\t8.\tEREH","\t\t\t\t\t\t9.\tJIRITO","\t\t\t\t\t\t10.\tDIOO\n\n"};
    printf("\n\n\t\t\t\t\t\t****RULES****\t\t\t\t\t\t");
    printf("\n1]PICK TWO CHARACTERS OUT OF THE LIST\n2]TAKE TURNS TO ATTACK OPPONENT\n3]SPECIAL ATTACK ACTIVATES AFTER CHARACTER PERFORMS FIVE ATTACKS\n4]WIN BY DEFEATING BOTH CHARACTER OF OPPONENT\n\n");
    for(int i=0;i<20;i++)
    {
       printf("%s\n",*(char_name1+i));
    }
    printf("\n\t\t\t\t\t<<<<<<<<<< SPECIAL ATTACKS LIST  >>>>>>>>>>>\t\t\t\t\t");
    printf("\n1]DAMAGES BOTH OPPONENT FOR 50 ATK DMG");
    printf("\n2]DAMAGES TARGET OPPONENT FOR 70 ATK DMG");
    printf("\n3]DAMAGES FIRST OPPONENT FOR  50 ATK DMG & SECOND OPPONENT FOR 30 ATK DMG");
    printf("\n4]DEFEATS ALL OPPONENT");
    printf("\n5]DAMAGES BOTH OPPONENT FOR 40 ATK DMG");
    printf("\n6]HEALS BOTH ALLY FOR 30 HEALTH");
    printf("\n7]DEFEATS TARGET OPPONENT");
    printf("\n8]DAMAGES FIRST OPPONENT FOR  35 ATK DMG & SECOND OPPONENT FOR 25 ATK DMG");
    printf("\n9]DAMAGES BOTH OPPONENT FOR 40 ATK DMG");
    printf("\n10]DAMAGES FIRST OPPONENT FOR  20 ATK DMG & SECOND OPPONENT FOR 80 ATK DMG\n\n");

}