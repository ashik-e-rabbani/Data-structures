#include<stdio.h>

int data[5];

int this_position,end_position=0;
int inc=0;

int choice;

int main()
{


// taking user input
while(1)
{

printf("\nchoice :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
      insert();
      break;
    case 2:
      deletef();
      break;

        case 3:
    display();
      break;

      case 4:
     exit(0);
      break;


    }
}



}


// inserting the data on current location
void insert()
{
     scanf("%d",&data[this_position]);
     this_position++;
    end_position= this_position;

}


void deletef()
{

    if(end_position==0)
    {

        printf(" \nNO DATA\n");
    }
    else
    {
         printf(" \nDELETED %d\n",data[end_position-1]);
         this_position--;
             end_position = end_position-1;

    }


}

void display()
{
    if(end_position==0){
            printf(" \nNO DATA\n");

    }else{

           printf("\nSTACK SUMMARY\n==============\n");
     for(inc=end_position-1;inc>=0;inc--){

        printf("\n%d",data[inc]);
     }
    }



}
