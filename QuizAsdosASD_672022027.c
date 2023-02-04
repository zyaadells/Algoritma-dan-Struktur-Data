#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

//exit
int cont;

//panah
int pointer=1;
char pil;

//menu
int pilihan;

//isi case 1
int y, i, j, n, lvl1;

//isi case 3
int a, b, angkapil;

//isi case 3
int angkainput, x, y, z;

//ngubah sesuai kartesius
void gotoxy(int x, int y){
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }

//cetak menu
int main(){
    ulang:
    do{
    if(pointer==0){
         pointer++;
         continue;
    }
        if(pointer==5){
            pointer--;
            continue;
        }

    system("color F4");
    gotoxy(37,4);
    printf("<><><><><><><><><><><><><><><><><><><><><><><><>");
    gotoxy(37,5);
    printf("|              M    E    N    U                |");
    gotoxy(37,6);
    printf("|><><><><><><><><><><><><><><><><><><><><><><><|");
    gotoxy(37,7);
    printf("|                 1. Level 1                   |");
    gotoxy(37,8);
    printf("|                 2. Level 2                   |");
    gotoxy(37,9);
    printf("|                 3. Level 3                   |");
    gotoxy(37,10);
    printf("|                 4. Exit                      |");
    gotoxy(37,11);
    printf("<><><><><><><><><><><><><><><><><><><><><><><><>");

    gotoxy(33,4+pointer);
    printf("   ");
    gotoxy(33,5+pointer);
    printf("   ");
    gotoxy(33,6+pointer);
    printf("-->");
    gotoxy(33,7+pointer);
    printf("   ");
    gotoxy(33,8+pointer);
    printf("   ");


            pil=getch();
            switch(pil){
            case 72:
                pointer--;
                break;
            case 80:
                pointer++;
                break;
            default:
                break;
    }
    pilihan=pointer;
    }while((int)pil!=13);
    system("cls");



switch(pilihan){

    case 1:
        level1:
        printf("Masukkan Angka : ");
        scanf("%d", &n);

            for(i=0; i<=n; i++){
            lvl1=i;
                for(j=0; j<=i; j++){
                    printf("%d",lvl1);
                    lvl1++;
                    }
                    printf("\n");
                }


                printf("Apakah anda ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto level1;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto ulang;
                }
    break;

    case 2:
        level2:
        printf("Masukkan angka : ");
        scanf("%d", &angkapil);
            for(int a=1; a<=angkapil; a++){
                for(int b=1; b<=a; b++){
                    printf(" %d", a*b);
                    }
                    printf("\n");
                }

                printf("Apakah anda ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto level2;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto ulang;
                }
    break;

    case 3:
        level3:
        printf("Masukkan Angka : ");
            scanf("%d", &angkainput);

            //segitiga atas
        for (x=1; x<=angkainput; x++){
            for (y=1; y<=angkainput-x; y++){
                printf(" ");
            }
        for (z=1; z<=x; z++){
            printf("%d", z);
        }

        for (y=x-1; y>=1; y--){
            printf("%d", y);
        }
            printf("\n");
        }

            //segitiga bawah
        for (x=angkainput-1; x>=1; x--){
            for (z=1; z<=angkainput-x; z++){
                printf(" ");
                }
        for (y=1; y<=x ;y++){
            printf("%d", y);
                }
        for (y=x-1; y>=1; y--){
            printf("%d", y);
        }
            printf("\n");
        }

                printf("Apakah anda ingin mengulang? (y/t): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto level3;
                }
                else if(cont =='t'|| cont=='T'){
                    system("cls");
                goto ulang;
                }
    break;

    case 4:
        system("color F3");

                    gotoxy(40,13);
                        char ex[]="B   Y   E   -   B   Y   E  .   .   .";
                        for(y=0; ex[y]!=NULL; y++){
                        printf("%c",ex[y]);
                        Sleep(40);
                        }
                system("cls");

}


}
