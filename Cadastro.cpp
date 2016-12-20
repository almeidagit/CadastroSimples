#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <cstring>
using namespace std;
int main () {
  
 
    system("color f1");
    system("mode con lines=35");
    system("mode con cols=80");  
 
  
    char end[20];
    char nome[20];
    char tel[12];
    char email[20];
    char projeto[20];
    char num[9];
    char num3[9];
    char num2[9];
    char nome2[50];
    char end2[50];
    char tel2[50];
    char email2[50];
    char projeto2[50];
 
    char nome3[50];
    char end3[50];
    char tel3[50];
    char email3[50];
    char projeto3[50];
 
   
    int sts,w,z,x,y,a,b,c,d,d23,custo,dataend,custo2,data2,hora2,dataend2,data3,hora3,dataend3,custo3,x1,x2,x3;
   
    int hor[10],min[10],seg[10],ano[10],dia[10],mes[10],i=0,hor2[10],min2[10],seg2[10],ano2[10],dia2[10],mes2[10], hor3[10],min3[10],seg3[10],ano3[10],dia3[10],mes3[10];
                 
                 
                 
                 
                 
                   memset (&mes, 0, sizeof (mes) );     
                   memset (&dia, 0, sizeof (dia) );     
                   memset (&nome, 0, sizeof (nome) );                   
                   memset (&end, 0, sizeof (end) );
                   memset (&num, 0, sizeof (num) );
                   memset (&tel, 0, sizeof (tel) );
                   memset (&email, 0, sizeof (email) ); 
                   memset (&projeto, 0, sizeof (projeto) );
                   memset (&nome2, 0, sizeof (nome2) );                   
                   memset (&end2, 0, sizeof (end2) );
                   memset (&num2, 0, sizeof (num2) );
                   memset (&tel2, 0, sizeof (tel2) );
                   memset (&email2, 0, sizeof (email2) ); 
                   memset (&projeto2, 0, sizeof (projeto2) );   
                   memset (&nome3, 0, sizeof (nome3) );                   
                   memset (&end3, 0, sizeof (end3) );
                   memset (&num3, 0, sizeof (num3) );
                   memset (&tel3, 0, sizeof (tel3) );
                   memset (&email3, 0, sizeof (email3) ); 
                   memset (&projeto3, 0, sizeof (projeto3) );
   x1=0;
   x2=0;
   x3=0;             
   w=0; 
   x=1;
   y=1;
   sts=0; 
   z=0;
   a=0;
  
   while(y==1){                                  //la?o
 
   x=x+x1+x2+x3;
  
   struct tm *timeinfo;                 // fun?oes hora
   time_t currentTime;
   time(&currentTime);
   timeinfo=localtime(&currentTime);
 
  
 printf("\t??\t\t\t\t\t\t\t\t??\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\t\t\t\t\t\t\t??"); 
 printf("\n\t??\t\t\tWEBMASTERS CORPORATION\t\t\t??\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\tSelecione uma op%cao: \t\t\t\t??",135);
 printf("\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\tA- Novo Projeto\t\t\t\t\t??");
 printf("\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\tB- Excluir Projeto\t\t\t\t??");
 printf("\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\tC- Localizar Projeto\t\t\t\t??");
 printf("\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\tD- Status do Projeto\t\t\t\t??");
 printf("\n\t??\t\t\t\t\t\t\t\t??\n\t??\t\tE- Sair\t\t\t\t\t\t??       ");
     printf("\n\n\n\n\n\n   %02d:%2d:%02d\t\t\t\t\t\t\t   %02d/%02d/%02d", timeinfo->tm_hour, timeinfo->tm_min,timeinfo->tm_sec,timeinfo->tm_mday,timeinfo->tm_mon+1,timeinfo->tm_year+1900);
        while(a==0){ // enquanto A for 0 o la?o ir? coletar Q- assim q se enquadrar na opcao do cliente A vai a op?a? correta nos If/ Else if
                   if(kbhit()){ // se teclou algo
                                     char q=getch(); //  char recebe o qu teclou
                                 
                                     if(q=='a' || q=='A'){                          //opcoes do IF
                                     a=1;
                                   
                                     }else if(q=='b' || q=='B'){
                                     a=2;
                                   
                                      }else if(q=='c' || q=='C'){
                                     a=3;
                                 
                                      }else if(q=='d' || q=='D'){
                                     a=4;
                                   
                                     }else if(q=='e' || q=='E'){
                                     a=5;
                                     }
                    }    // fim kbhit
         } //fim do la?o A
 
if(a==1){ 
                                                          
   if (x==1 || x1==0){
         
          y=0; //la?o
          a=0; //menu principal
         
          struct tm *timeinfo;                 // fun?oes hora
    time_t currentTime;
    time(&currentTime);
    timeinfo=localtime(&currentTime);
  
  
    hor[ i]=timeinfo->tm_hour;
    min[ i]=timeinfo->tm_min;
    seg[ i]=timeinfo->tm_sec;
    dia[ i]=timeinfo->tm_mday;
    mes[ i]=timeinfo->tm_mon;
    ano[ i]=timeinfo->tm_year;
         
  
          system("cls"); 
          printf("\n\n\n\n\t\t\t\tWEBMASTERS \n\n\t\t\t     - Novo Cadastro -");  /*  Primeiro cadastro  */
          printf("\n\n\n\t\t\t\t\t\t\t\tC%cdigo -1-\n\n\n\n",162);
    
          printf("\n\tProjeto:  ");
          gets(projeto);
         
          printf("\n\tResponsavel: ");
          gets(nome);
              
          printf("\n\tEndere%co: ",135)  ;     
          gets(end);
     
          printf("\n\tN%cmero: ",163);
          gets(num);
 
          printf("\n\tTelefone: ");
          gets(tel);
         
          printf("\n\tE-mail: ");
          gets(email);
       
          printf("\n\tHora:  %02d:%02d:%02d   \t\tData: %02d / %02d / %02d",hor[i],min[i],seg[i], dia[i], mes[i],ano[i]+1900);
         
         
              system("pause>null");    
         
          x1=1;
          system("cls");
          printf("\n\n\n\n\n\n\t\t\tArmazenado com sucesso!");
          
         
          printf("\n\n\n\tPressione: \n\n\t1-Menu Principal \n\n\t2-Sair:  ");   //la?o
     
          while(y==0){      //volta ao menu principal
   
                   if(kbhit()){ // se teclou algo
                                     char f=getch(); //  char recebe o qu teclou
                                 
                                     if(f=='1'){                          //volta menu principal
                                     y=1;
                                   
                                     }else if(f=='2'){                    
                                     y=2;
                                   
                                     }
                               }    // fim kbhit
                       } //fim do la?o
                       system("cls");
         
    }else if(x==2 || x2==0){                                                         /*  Segundo cadastro  */
               system("cls");
          y=0;
          a=0;
         
           struct tm *timeinfo;                 // fun?oes hora
    time_t currentTime;
    time(&currentTime);
    timeinfo=localtime(&currentTime);
  
  
    hor2[ i]=timeinfo->tm_hour;
    min2[ i]=timeinfo->tm_min;
    seg2[ i]=timeinfo->tm_sec;
    dia2[ i]=timeinfo->tm_mday;
    mes2[ i]=timeinfo->tm_mon;
    ano2[ i]=timeinfo->tm_year;
   
          printf("\n\n\n\n\t\t\t\tWEBMASTERS \n\n\t\t\t     - Novo Cadastro -");  /*  ssegundo cadastro  */
          printf("\n\n\n\t\t\t\t\t\t\t\tC%cdigo -2-\n\n\n\n",162);
         
          printf("\n\tProjeto:  ");
          gets(projeto2);
        
         
          printf("\n\tResponsavel: ");
          gets(nome2);
          
          printf("\n\tEndere%co: ",135);
          gets(end2);
         
          printf("\n\tN%cmero: ",163);
        
          gets(num2);        
         
          printf("\n\tTelefone:: ");
          gets(tel2);
         
          printf("\n\tE-mail: ");
          gets(email2);
          
         
          printf("\n\tHora:  %02d:%02d:%02d   \t\tData: %02d / %02d / %02d",hor2[i],min2[i],seg2[i], dia2[i], mes2[i],ano2[i]+1900);         
         
           system("pause>null");  
          
          x2=1;
         
          system("cls");
          printf("\n\n\n\n\n\n\t\t\tArmazenado com sucesso!");
         
          printf("\n\n\n\tPressione: \n\n\t1-Menu Principal \n\n\t2-Sair:  ");   //la?o
          while(y==0){      //volta ao menu principal
   
                   if(kbhit()){ // se teclou algo
                                     char f=getch(); //  char recebe o qu teclou
                                 
                                     if(f=='1'){                          //volta menu principal
                                     y=1;
                                   
                                     }else if(f=='2'){                     //sair
                                     y=2;
                                   
                                     }
                    }    // fim kbhit
          } //fim do la?o 
          system("cls");
           
        
    }else if(x==3 || x3==0){                                                         /*  Terceiro cadastro  */
            system("cls");
          y=0;
          a=0;
         
             struct tm *timeinfo;                 // fun?oes hora
    time_t currentTime;
    time(&currentTime);
    timeinfo=localtime(&currentTime);
  
  
    hor3[ i]=timeinfo->tm_hour;
    min3[ i]=timeinfo->tm_min;
    seg3[ i]=timeinfo->tm_sec;
    dia3[ i]=timeinfo->tm_mday;
    mes3[ i]=timeinfo->tm_mon;
    ano3[ i]=timeinfo->tm_year;
   
   
          printf("\n\n\n\n\t\t\t\tWEBMASTERS \n\n\t\t\t     - Novo Cadastro -");  /*  teceiro cadastro  */
          printf("\n\n\n\t\t\t\t\t\t\t\tC%cdigo -3-\n\n\n\n",162);
        
         
          printf("\n\tProjeto:  ");
          gets(projeto3);
         
          printf("\n\tResponsavel: ");
          gets(nome3);
         
          printf("\n\tEndere%co: ",135);;
          gets(end3);
         
          printf("\n\tN%cmero: ",163);
         
          gets(num3);
         
          printf("\n\tContato: ");
          gets(tel3);  
         
          printf("\n\tE-mail: ");
          gets(email3);
         
         
          printf("\n\tHora:  %02d:%02d:%02d   \t\tData: %02d / %02d / %02d",hor3[i],min3[i],seg3[i], dia3[i], mes3[i],ano3[i]+1900);
         
           system("pause>null");  
         
          x3=1;
          system("cls");
          printf("\n\n\n\n\n\n\t\t\tArmazenado com sucesso!");
          
         
          printf("\n\n\n\tPressione: \n\n\t1-Menu Principal \n\n\t2-Sair:  ");   //la?o
          while(y==0){      //volta ao menu principal
   
                   if(kbhit()){ // se teclou algo
                                     char f=getch(); //  char recebe o qu teclou
                                 
                                     if(f=='1'){                          //dah op?ao de exclus?o de registro
                                     y=1;
                                   
                                     }else if(f=='2'){                     //volta menu principal
                                     y=2;
                                   
                                     }
                    }    // fim kbhit
          } //fim do la?o
          system("cls");
         
         
         
    }else{                                                                       // Seleciona op??o para exclus?o de cadastro
           system("cls");
           y=0; 
           a=0;  
           printf("\n\n\n\t\t\tSem espa%co para armazenar!\n\n\n\tSelecione uma op%cao: \n\n\n\n\n\t1-Excluir cadastro  \n\n\t2-Voltar ao Menu Principal  \n\n\t3-Sair :  ",135,135);
         
         
           while(z==0){ // la?o de op??o para apagar registro
   
                   if(kbhit()){ // se teclou algo
                                     char e=getch(); //  char recebe o qu teclou
                                 
                                     if(e=='1'){                          //dah op?ao de exclus?o de registro
                                     z=1;
                                   
                                     }else if(e=='2'){                     //volta menu principal
                                     z=2;
                                   
                                     }else if(e=='3'){                    //sai do programa
                                     z=3;
                                 
                                     }
                    }    // fim kbhit
           } //fim do la?o A
          
           system("cls");
          
           if(z==1){                                                              // Seleciona qual cadastro ser? exclu?do
              z=0; 
                printf("\n\n\n\tIndique qual o c%cdigo do cadastro a ser exclu%cdo: \n\n\n\n\n\n\n\n\n\n",162,161);       
                x=0;       
                while(x==0){ // la?o de op??o para apagar registro
   
                   if(kbhit()){ // se teclou algo
                                     char e=getch(); //  char recebe o qu teclou
                                 
                                     if(e=='1'){                               //dah op?ao de exclus?o de registro
                                     x=1;
                                     printf("\n\tC%cdigo -1-",162);
                                     }else if(e=='2'){                     //volta menu principal
                                     x=2;
                                     printf("\n\tC%cdigo -2-",162);
                                     }else if(e=='3'){                    //sai do programa
                                     x=3;
                                     printf("\n\tC%cdigo -3-",162);
                                     }
                            }    // fim kbhit
                } //fim do la?o A
          
               
               
               
               
                if(x==1){
                   memset (&nome, 0, sizeof (nome) );                   
                   memset (&end, 0, sizeof (end) );
                   memset (&num, 0, sizeof (num) );
                   memset (&tel, 0, sizeof (tel) );
                   memset (&email, 0, sizeof (email) ); 
                   memset (&projeto, 0, sizeof (projeto) );             
                x1=0;
                }else if(x==2){
                   memset (&nome2, 0, sizeof (nome2) );                   
                   memset (&end2, 0, sizeof (end2) );
                   memset (&num2, 0, sizeof (num2) );
                   memset (&tel2, 0, sizeof (tel2) );
                   memset (&email2, 0, sizeof (email2) ); 
                   memset (&projeto2, 0, sizeof (projeto2) );
                 x2=0;     
              } else if(x==3){
                    memset (&nome3, 0, sizeof (nome3) );                   
                   memset (&end3, 0, sizeof (end3) );
                   memset (&num3, 0, sizeof (num3) );
                   memset (&tel3, 0, sizeof (tel3) );
                   memset (&email3, 0, sizeof (email3) ); 
                   memset (&projeto3, 0, sizeof (projeto3) ); 
                 x3=0;   
               }
              
               
                printf("\n\tExclu%cdo com sucesso",161 );
                printf("\n\n\n\n\n\n\n\n\n\n\n\t\tPressione alguma tecla para continuar...");
                system("pause>null");
                w=3;
                y=1; 
                system("cls");
                           
           }else if(z==2){
           z=0; 
           y=1;         
           }else{
           z=0;           
           y=3;    
           }     
                           
     }//fim do while z -- para apagar registro
         
}else if(a==2){
      a=0;        
      system("cls");
      printf("\n\n\n\n\t\t\t\tWEBMASTERS \n\n\t\t\t   - Excluir Cadastro -\n\n\n");
    
    
              
                printf("\n\n\n\tIndique qual o c%cdigo do cadastro a ser exclu%cdo: \n\n\n",162,161);       
           
               x=0;       
                while(x==0){ // la?o de op??o para apagar registro
   
                   if(kbhit()){ // se teclou algo
                                     char e=getch(); //  char recebe o qu teclou
                                 
                                     if(e=='1'){                               //dah op?ao de exclus?o de registro
                                     x=1;
                                     printf("\n\tC%cdigo -1-",162);
                                     }else if(e=='2'){                     //volta menu principal
                                     x=2;
                                     printf("\n\tC%cdigo -2-",162);
                                     }else if(e=='3'){                    //sai do programa
                                     x=3;
                                     printf("\n\tC%cdigo -3-",162);
                                     }
                            }    // fim kbhit
                } //fim do la?o A
          
              
               // fflush(stdin);//      limpa o buffer do enter!!!!!!!!!!!!!!!!
                if(x==1){
                   memset (&nome, 0, sizeof (nome) );                   
                   memset (&end, 0, sizeof (end) );
                   memset (&num, 0, sizeof (num) );
                   memset (&tel, 0, sizeof (tel) );
                   memset (&email, 0, sizeof (email) ); 
                   memset (&projeto, 0, sizeof (projeto) );
            x1=0;
                              
                }else if(x==2){
                   memset (&nome2, 0, sizeof (nome2) );                   
                   memset (&end2, 0, sizeof (end2) );
                   memset (&num2, 0, sizeof (num2) );
                   memset (&tel2, 0, sizeof (tel2) );
                   memset (&email2, 0, sizeof (email2) ); 
                   memset (&projeto2, 0, sizeof (projeto2) );   
             x2=0;
              
              } else if(x==3){
                    memset (&nome3, 0, sizeof (nome3) );                   
                   memset (&end3, 0, sizeof (end3) );
                   memset (&num3, 0, sizeof (num3) );
                   memset (&tel3, 0, sizeof (tel3) );
                   memset (&email3, 0, sizeof (email3) ); 
                   memset (&projeto3, 0, sizeof (projeto3) );
             x3=0;   
               }
                printf("\n\tExclu%cdo com sucesso",161 );
                printf("\n\n\n\n\n\n\n\n\n\t\tPressione alguma tecla para continuar...");
                system("pause>null");
                system("cls");             
                  
     
                
}else if(a==3){
          system("cls");
          y=0;
          a=0;
          printf("\n\n\n\n\t\t\t\tWEBMASTERS \n\n\t\t\t   - Localizar Cadastro -\n\n\n"); // Mostra todos os cadastros e fornece o c?digo de acesso
         
         
          printf("\n\t\tC%cdigo 001\n\t\tProjeto: %s\n\t\tRespons%cvel: %s\n\t\tEndere%co: %s\t\tN%cmero: %s\n\t\tTelefone: %s\t\tE-mail: %s \n\n\t\t=================================================",162,projeto,160,nome,135,end,163,num,tel,email);
          printf("\n\t\tC%cdigo 002\n\t\tProjeto: %s\n\t\tRespons%cvel: %s\n\t\tEndere%co: %s\t\tN%cmero: %s\n\t\tTelefone: %s\t\tE-mail: %s \n\n\t\t=================================================",162,projeto2,160,nome2,135,end2,163,num2,tel2,email2);
          printf("\n\t\tC%cdigo 003\n\t\tProjeto: %s\n\t\tRespons%cvel: %s\n\t\tEndere%co: %s\t\tN%cmero: %s\n\t\tTelefone: %s\t\tE-mail: %s \n\n\t\t=================================================",162,projeto3,160,nome3,135,end3,163,num3,tel3,email3);
        
         printf("\n\n\t\tPressione alguma tecla para continuar...");
          system("pause>null");
          system("cls");
         
                printf("\n\n\n\tPressione: \n\n\t1-Menu Principal \n\n\t2-Sair:  ");   //la?o
                while(y==0){      //volta ao menu principal
   
                   if(kbhit()){ // se teclou algo
                                     char f=getch(); //  char recebe o qu teclou
                                 
                                     if(f=='1'){                          //dah op?ao de exclus?o de registro
                                     y=1;
                                   
                                     }else if(f=='2'){                     //volta menu principal
                                     y=2;
                                   
                                     }
                    }    // fim kbhit
                   } //fim do la?o
                system("cls");
               
         
}else if(a==4){                                                                         //Status dos projetos
                system("cls");
                y=0;
                a=0;
                printf("\n\n\n\n\t\t\t\tWEBMASTERS \n\n\t\t\t\t- Status -\n\n\n\n\n\tDigte o c%cdigo do projeto: ",162);
             
            while(sts==0){ // status
   
                   if(kbhit()){ // se teclou algo
                                     char ee=getch(); //  char recebe o qu teclou
                                 
                                     if(ee=='1'){                         
                                     sts=1;
                                   
                                     }else if(ee=='2'){                    
                                     sts=2;
                                   
                                     }else if(ee=='3'){                   
                                     sts=3;
                                 
                                     }
                                }    // fim kbhit
                   } //fim do la?o status
               
               
                if(sts==1 && x1==1){
                printf("\n\n\n\n\n\tC%cdigo 001\n\n\t\tProjeto: %s\n\n\t\tData de entrada: %02d/%02d/%02d \tHor?rio: %02d: %02d:%02d\n\n\t\tData de entrega: %02d / %02d / %02d \n\n\t\tCusto total:  R$ 3000.00 \n\n\t\t=================================================",162,projeto, dia[i], mes[i],ano[i]+1900,hor[i],min[i],seg[i],dia[i], mes[i]+1,ano[i]+1900,custo);
                sts=0; //zera os sts
                }else if(sts==2 && x2==1){
                printf("\n\n\n\n\n\tC%cdigo 002\n\n\t\tProjeto: %s\n\n\t\tData de entrada: %02d / %02d / %02d \tHor?rio: %02d:%02d:%02d\n\n\t\tData de entrega: %02d / %02d / %02d \n\n\t\tCusto total: R$ 3000.00\n\n\t\t=================================================",162,projeto2,dia2[i], mes2[i],ano2[i]+1900,hor2[i],min2[i],seg2[i],dia2[i], mes2[i]+1,ano2[i]+1900,custo2);
                sts=0;
                }else if(sts==3 && x3==1){
                printf("\n\n\n\n\n\tC%cdigo 003\n\n\t\tProjeto: %s\n\n\t\tData de entrada: %02d / %02d / %02d \tHor?rio: %02d:%02d:%02d\n\n\t\tData de entrega: %02d / %02d / %02d \n\n\t\tCusto total:  R$ 3000.00 \n\n\t\t=================================================",162,projeto3,dia[i], mes3[i],ano3[i]+1900,hor3[i],min3[i],seg3[i],dia3[i], mes3[i]+1,ano3[i]+1900,custo3);
                sts=0;
                }   else if (sts == 1 || sts ==2 || sts == 3 ){
                printf("\n\n\n\n\n\tEste c%cdigo nao possui cadastro! ",162);
                  sts=0;
                }  
                   
               
                printf("\n\n\n\n\n\n\n\t\tPressione alguma tecla para continuar...");
                system("pause>null");
                system("cls");
               
               
                printf("\n\n\n\tPressione: \n\n\t1-Menu Principal \n\n\t2-Sair:  ");
                while(y==0){      //volta ao menu principal
   
                if(kbhit()){ // se teclou algo
                                     char f=getch(); //  char recebe o qu teclou
                                 
                                     if(f=='1'){                          //volta menu principal
                                     y=1;
                                   
                                     }else if(f=='2'){                     //sair
                                     y=2;
                                   
                                    
                                     }
                             }    // fim kbhit
               } //fim do la?o A
                system("cls");
              
}else if(a==5){
          y=0;          
          system("exit");
         
          printf("\n\n\n\tPressione qualquer tecla para sair ...");
          system("cls");
         
}    
 
}//fim do la?o Y
 
system("exit");
         
printf("\n\n\n\tPressione qualquer tecla para sair ...");
   
system("pause>null");
return 0;
}
 
 
 
 
 
 
 
 
 
 
