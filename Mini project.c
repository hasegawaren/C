#include<conio.h> 
#include<stdio.h> 
#include<stdlib.h> 

struct data {
    char fname[30];
    char lname[30];
    char gender[15];
    char nation[25];
    char phone [15];
    char username[30];
    char password[20];
};

int main() {
    int option;
 printf("\t\t========================MENU========================\n");
 printf("\t\t=                                                  =\n");
 printf("\t\t=              Press '1' to Register               =\n");
 printf("\t\t=              Press '2' to Log in                 =\n");
 printf("\t\t=              Press '3' to Edit information       =\n");
 printf("\t\t=              Press '4' to Exit                   =\n");
 printf("\t\t=                                                  =\n");
    printf("\t\t====================================================\n\n");
    printf("Fist time use, please press '1' to register\n\n");
    printf("Press the option you want : ");
    scanf("%d",&option);
    
    if(option == 1)
        {
            system("CLS");
            registration();
        }

    else if(option == 2)
        {
            system("CLS");
            login();
        }
    else if(option == 3)
        {
            system("CLS");
            editdata();
        }
 else if(option == 4)
        {
            system("CLS");
            printf("\n\t========================GOOD BYE=========================\n\n");
        }
}

registration()
{
struct data l;
FILE *fp ;
fp=fopen("data.txt","w"); 

printf("\t========================REGISTRATION=========================\n\n");
printf("\t\t\tPlease enter your information\n\n");

 printf("\n Enter First name : "); scanf("%s",&l.fname);
 printf("\n Enter Last name : "); scanf("%s",&l.lname);
 printf("\n Enter Gender (Female or Male) : "); scanf("%s",&l.gender);
 printf("\n Enter Nationality : "); scanf("%s",&l.nation);
 printf("\n Enter Telephone No. : "); scanf("%s",&l.phone);
 printf("\n Enter Username : "); scanf("%s",&l.username);
 printf("\n Enter Password (8 characters) : "); scanf("%s",&l.password);
 fwrite(&l,sizeof(l),1,fp);
 fclose(fp); 
 
 printf("\nRegistration Successful!\n");
 printf("\nNow login with Username and Password\n");
 printf("\nPress 'Enter' to continue............\n");
 getch();
 system("CLS");
 login(); 
}

login()
{ 
 int i;
 char firstname[30],password[20];
    FILE *fp ;
    fp=fopen("data.txt","r"); 
    struct data l;

    printf("\n\t========================RESEARCH=========================\n\n");
    printf("\tName: "); scanf("%s",&l.fname);
 
 
 while(fread(&l,sizeof(l),1,fp))
 {
        if(strcmp(firstname,l.fname)==0)

            {   
                printf("\n\tSuccessful Login\n");
                printf("\n\tFirst name : %s\n\tLastname : %s\n\tGender : %s\n\tNationality : %s\n\tTelephone no : %s",&l.fname,&l.lname,&l.gender,&l.nation,&l.phone);

            }
        else 
            { 
             system("CLS");
                printf("\n\n\tIncorrect Login Details\tPlease enter the correct credentials\n");
                login();
            }
 }
 fclose(fp);
}


editdata()
{
 	FILE *fp ;
 	fp=fopen("data.txt","r");
    struct data l;
    char password[20];
    int option,option1;
    
    printf("\n\n\t========================EDIT INFORMATION=========================\n\n");
    printf("\t\t\t Please verify your identify\n\n");
    
    printf("\n\tPassword: ");
 scanf("%s",&password);
 while(fread(&l,sizeof(l),1,fp))
 { 
  if(strcmp(password,l.password)==0)

            {   
                system("CLS");
                printf("\n\n\t========================EDIT INFORMATION=========================\n\n");
                printf("\n\t\tSelect the information you want to edit");
                printf("\n\n\t 1.First name");
    printf("\n\n\t 2.Last name");
    printf("\n\n\t 3.Gender");
    printf("\n\n\t 4.Nationality");
    printf("\n\n\t 5.Telephone no");
    printf("\n\n\t 6.Username");
    printf("\n\n\t 7.Password");
    printf("\n\n\n\t Select option : ");
    scanf("%d",&option);
    
                
                switch (option)
                {
                 case 1:
                  fp=fopen("data.txt","w+");
                  printf("\n\n\t========================EDIT INFORMATION=========================\n\n");
                  printf("\n Enter First name : "); scanf("%s",&l.fname);
                  printf("\n\tTHe information has been saved successfully");
                  printf("\n\n\tPress 'Enter' to go to the menu.......");
                  fwrite(&l,sizeof(l),1,fp);
      fclose(fp);
      getch();
                  system("CLS");
                  main();
      break;
      
                 case 2:
                  fp=fopen("data.txt","w+");
                  printf("\n\n\t========================EDIT INFORMATION=========================\n\n");
                  printf("\n Enter Last name : "); scanf("%s",&l.lname);
                  printf("\n\tTHe information has been saved successfully");
                  printf("\n\n\tPress 'Enter' to go to the menu.......");
      fwrite(&l,sizeof(l),1,fp);
      fclose(fp);
      getch();
                  system("CLS");
                  main();
                  break;
                  
                 case 3:
                  fp=fopen("data.txt","w+");
                  printf("\n\n\t========================EDIT INFORMATION=========================\n\n");
      printf("\n Enter Gender (Female or Male) : "); scanf("%s",&l.gender);
      printf("\n\tTHe information has been saved successfully");
                  printf("\n\n\tPress 'Enter' to go to the menu.......");
      fwrite(&l,sizeof(l),1,fp);
      fclose(fp);
      getch();
                  system("CLS");
                  main();
                  break;
                  
                 case 4:
                  fp=fopen("data.txt","w+");
                  printf("\n\n\t========================EDIT INFORMATION=========================\n\n");
      printf("\n Enter Nationality : "); scanf("%s",&l.nation);
      printf("\n\tTHe information has been saved successfully");
                  printf("\n\n\tPress 'Enter' to go to the menu.......");
      fwrite(&l,sizeof(l),1,fp);
      fclose(fp);
      getch();
                  system("CLS");
                  main();
                  break;
                  
                 case 5:
                  fp=fopen("data.txt","w+");
                  printf("\n\n\t========================EDIT INFORMATION=========================\n\n");
      printf("\n Enter Tel no : "); scanf("%s",&l.phone);
      printf("\n\tTHe information has been saved successfully");
                  printf("\n\n\tPress 'Enter' to go to the menu.......");
      fwrite(&l,sizeof(l),1,fp);
      fclose(fp);
      getch();
                  system("CLS");
                  main();
                  break;
                  
                 case 6:
                  fp=fopen("data.txt","w+");
                  printf("\n\n\t========================EDIT INFORMATION=========================\n\n");
                  printf("\n Enter Username : "); scanf("%s",&l.username);
                  printf("\n\tTHe information has been saved successfully");
                  printf("\n\n\tPress 'Enter' to go to the menu.......");
                  fwrite(&l,sizeof(l),1,fp);
      fclose(fp);
      getch();
      system("CLS");
      main();
      break;
     
                 case 7:
                  fp=fopen("data.txt","w+");
                  printf("\n\n\t========================EDIT INFORMATION=========================\n\n");
                  printf("\nEnter Password (8 characters) : "); scanf("%s",&l.password);
                  printf("\n\tTHe information has been saved successfully");
                  printf("\n\n\tPress 'Enter' to go to the menu.......");
                  fwrite(&l,sizeof(l),1,fp);
      fclose(fp);
      getch();
      system("CLS");
                  main();
                  break;
    }
            }
        else 
            {
                printf("\n\nIncorrect password\n\nPlease enter the correct password\n");
                printf("\nPress 'Enter' to fill information again");
               editdata();
            }
 }
 fclose(fp);
 getch();
}
