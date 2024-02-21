#include<stdio.h>
#define CANDIDATE_COUNT
#define CANDIDATE1 "Chandrababu naidu"
#define CANDIDATE2 "jagan"
#define CANDIDATE3 "Pawan Kalyan"
#define CANDIDATE4 "kcr"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, notavotes=0;
void castVote(){
int choice;    
printf("\n .....Please choose your Candidate .....\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);
printf("\n 5. %s", "NOTA");

printf("\n\n Input your choice (1 - 5) : ");
scanf("%d",&choice);
system("clear");
switch(choice){
    case 1: votesCount1++;
    break;
    case 2: votesCount2++;
     break;
    case 3: votesCount3++;
    break;
    case 4: votesCount4++;
    break;
    case 5: notavotes++;
    break;
    default: printf("\n Error: Wrong Choice !! Please retry");
             
}
printf("\n thanks for vote !!");
}

void votesCount(){
printf("\n .....Voting Statics .....");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE2, votesCount2);
printf("\n %s - %d ", CANDIDATE3, votesCount3);
printf("\n %s - %d ", CANDIDATE4, votesCount4);
printf("\n %s - %d ", "notaVotes", notavotes);
}

void getLeadingCandidate(){
    printf("\n......Leading Candiate .......\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",CANDIDATE4);
    else
    printf("----- Warning !!! No-win situation----");    
   
   
   
}

int main()
{
 system("clear");  
int i;
int choice;

do{
printf("\n.....Welcome to Election of 2025.......");
printf("\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\nPlease enter your choice : ");
scanf("%d", &choice);
system("clear");

switch(choice)
{
case 1: castVote();
break;
case 2: votesCount();
break;
case 3: getLeadingCandidate();
break;
default: printf("\n Error: Invalid Choice");
}
}while(choice!=0);

return 0;
}