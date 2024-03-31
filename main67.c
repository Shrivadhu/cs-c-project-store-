#include<stdio.h>
void coustmers_details();
void menu();
void bill();
int main()
{
    char coustmers_name[20];
    int coustmers_id;
    int coustmer_phno;
    int choice;
    int n;
    printf("WELCOME TO PES STORE");
   
    for(int i=1;i<=n;i++)
    {
    printf("no of coustmers %d",i);
    scanf("%d",&n);
    coustmers_details(i);
    menu();
    bill();
    }
}

void coustmers_details()
{
    char coustmers_name[20];
    int coustmers_id;
    int coustmers_phno;
    printf("enter coustmers name");
    scanf("%s",&coustmers_name);
    printf("enter coustmers_id");
    scanf("%d",&coustmers_id);
    printf("enter coustmers_phno");
    scanf("%d",&coustmers_phno);
}

void menu()
{
    printf("1 ITEMS =PEN, POTATO, BANANA, GRAPES, ORANGE, PEAR,MANGO, APPLE, FRUITS, VEGITABLES");
    printf("2 ITEMS IN STOCK are PEN, POTATO, BANANA, GRAPES, ORANGE, PEAR,MANGO, APPLE" );
    printf("3 PRICE FOR EACH ITEM IS PEN =(20), POTATO =(25), BANANANA =(30), GRAPES =(35), ORANGE =(20), PEAR =(40), MANGO =(200), APPLE =(150), FRUITS =(180), VEGITABLES =(250)");
}

void bill()
{
    
    int total_amount=0;
    int choice=1;
    while((choice!=0)&&(choice<9))
    {
    printf("enter your choice");
    scanf("%d",&choice);
    
    switch(choice) 
    {
        case 1:
        printf("TO BUY PEN");
        total_amount+=20;
        break;
        case 2:
         printf("TO BUY POTATO");
        total_amount+=25;//puri
        break;
        case 3:
         printf("TO BUY BANANA");
        total_amount+=30;//uppitu
        break;
        case 4:
         printf("TO BUY GRAPES");
        total_amount+=35;//parata
        break;
        case 5:
         printf("TO BUY ORANGE");
        total_amount+=20;//chapati
        break;
        case 6:
         printf("TO BUY PEAR");
        total_amount+=40;//dosa
        break;
        case 7: printf("TO BUY MANGO");
        total_amount+=200;//piza
        break;
        case 8:
         printf("TO BUY APPLE");
        total_amount+=150;//hamburger
        break;
       
        default:
        printf("EXIT");
        break;
    }
    }
    printf("total is=%d",total_amount);

}
