// TIC  TAC  TOE  GAME

#include <stdio.h>

char pos[10] = { 'o' , '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int me,choice,user=1;
char sign;
     
    void user_symbol_statement()
        {
                  if(me==1)
                      printf("\n\nPlayer 1 = X  and  Player 2 = O\n");
                   else
                     printf("\n\nPlayer 1 = O  and  Player 2 = X\n");
                     
        }

    void printing_matrix()  // To display matrix of Tic tac toe 
        {
        
        printf(" %c | %c | %c \n", pos[1], pos[2], pos[3]);     
        printf(" %c | %c | %c \n", pos[4], pos[5], pos[6]);
        printf(" %c | %c | %c \n", pos[7], pos[8], pos[9]);
        printf("        \n\n");
       }
       
       
    void matrix_filling()
        {
           if (choice == 1 && pos[1] == '1')
            pos[1] = sign;
        else if (choice == 2 && pos[2] == '2')
            pos[2] = sign;
        else if (choice == 3 && pos[3] == '3')
            pos[3] = sign;
        else if (choice == 4 && pos[4] == '4')
            pos[4] =sign;
        else if (choice == 5 && pos[5] == '5')
            pos[5] = sign;
        else if (choice == 6 && pos[6] == '6')
            pos[6] = sign;
        else if (choice == 7 && pos[7] == '7')
        pos[7] = sign;
        else if (choice == 8 && pos[8] == '8')
            pos[8] = sign;
        else if (choice == 9 && pos[9] == '9')
            pos[9] =sign;
        else{
            printf("\nInvalid move \n ");
            user--;
            }
       }
    
    int winning_formula()        
        {                /*  It returns 
                             1 for game over and 
                            -1 for to continue game and 
                            0 for game draw */          

            if (pos[1] ==pos[2] && pos[2] == pos[3])
                 return 1;
            else if (pos[4] == pos[5] && pos[5] == pos[6])
                return 1;
            else if (pos[7] == pos[8] && pos[8] == pos[9])             
                return 1;
            else if (pos[1] == pos[4] && pos[4] == pos[7])
                return 1;
            else if (pos[2] == pos[5] && pos[5] == pos[8])
                return 1;
            else if (pos[3] == pos[6] && pos[6] == pos[9])
                return 1;
            else if (pos[1] == pos[5] && pos[5] == pos[9])
                return 1;
            else if (pos[3] == pos[5] && pos[5] == pos[7])
                return 1;
           else if (pos[1] != '1' && pos[2] != '2' && pos[3] != '3' && pos[4] != '4' && pos[5] != '5' && pos[6] != '6' && pos[7] != '7' && pos[8] != '8' && pos[9] != '9')
                return 0;
            else return - 1;
        }
    

int main()
 {       
           printf("\n\n\t\t\t\t\t\t Welcome to the Tic Tac Toe Game\n\n ");
           printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\t\t");

             int i;
             
             
    A: printf("\n\n\nFor Player 1 \n");
       printf("Enter '1' to choose 'X'    and    '2' for 'O' : ");
       scanf("%d",&me);
        if(me==1 || me==2){
            goto B;
        }
        else{
            printf("Invalid input\n\n");
            goto A;
        }
        
  do{
         B: user_symbol_statement(); 
           printing_matrix();
         
          user = (user % 2==0) ? 2 : 1;
           printf("Player %d, enter your choice : ", user);
           scanf("%d", &choice);
           
            if(user==1 &&me==1 )
             sign =  'X';
          else if(user==1 &&me==2)
             sign =  'O' ;
          else if(user==2 && me==1)
             sign = 'O';
          else if(user==2&& me==2)
             sign = 'X';
          
             
        matrix_filling();     
       
        i = winning_formula();
        user++;
        
     }while (i == - 1);
   
 printing_matrix();

    if (i == 1)
        printf("\t==> Player %d wins\n\n ",--user);
    else 
        printf("\t==> Game draw\n\n");

 return 0;
}

       


