#include <iostream>
//#include <conio.h>
//#include <stdlib.h>
using namespace std;
/*
  == [ KELOMPOK 9 ] ==
  ...
  Rachardi Nugroho | (672021199)
  Hosea Nicolas Andre N.P.P | (672021159)
  Theresia Belnameng Kora | (672021200)
  ==================================================================
*/

int main() {
    //...
    int p,x,a,b;
    const int D=9;
    long int al;
    char yt;


    //...
    do{
        //clrscr();
        system("cls");
        cout
             << "[ PROGRAM PAKET.B | TTS K9 ]\n...\n"
             << "(1)perbintangan\n"
             << "(2)faktorial\n"
             << "(3)perulangan\n"
             << "(4)author\n"
             << "(5)exit\n"
             << "..................\n"
             << "[ pilihan (1-5) ] : ";cin>>p;

    //...
    switch (p) {
        /*Rachardi*/
        case 1:
            //clrscr();
            system("cls");
            cout
            << "[ PROGRAM PERBINTANGAN ]\n"
            << "...\n"
            << "masukkan x (<=6) : ";
            cin >> x;
                if(x>0 && x<=6){
                    for(a=0; a<x; a++){
                        for(b=0; b<D; b++){
                            if(b==a+1 || b==a+2){
                                cout << "*";}
                            else{
                                cout<<b+1;}}
                        cout<<"\n";}}
                else{
                    cout
                    << "__________________\n"
                    <<"[ ERROR ]\nTerdapat kesalahan dalam input, mohon coba lagi.\n";
                }
            break;
        /*Hosea*/
        case 2:
            //clrscr();
            system("cls");
            cout
            << "[ PROGRAM FAKTORIAL ]\n"
            << "...\n"
            << "masukkan x : ";
            cin >> x;
                    al=1;
                    for (a=x;a>=1;a--){
                        al=al*a;}
                    cout
                    << "[ HASIL "<<x<<"! ] : "<<al<<endl;
            break;
        /*Theresia*/
        case 3:
            //clrscr();
            system("cls");
            cout
            << "[ PROGRAM PERULANGAN ]\n"
            << "...\n"
            << "masukkan x : ";
            cin >> x;
                    for (a=1;a<=x;a++){
                        for(int b=1;b<=(x*2)-1;b++){
                            if((a+b==(x*2))||(a==b)||(a==1))printf("*");
                            else printf(" ");
                        }printf("\n");}
                    for(int a=1;a<=x;a++){
                        for(int b=1;b<=(x*2)-1;b++){
                             if((a+b==(x+1))||(a+(x-1)==b)||(a==x))printf("*");
                            else printf(" ");
                        }printf("\n");}
            break;
        case 4:
            //clrscr();
            system("cls");
            cout
            << "DAFTAR ANGGOTA | KELOMPOK 9\n"
            << "==================================\n"
            << "[672021199] - Rachardi Nugroho\n"
            << "[672021159] - Hosea Nicolas Andre N.P.P\n"
            << "[672021200] - Theresia Belnameng Kora\n";
            break;
        case 5:
            //clrscr();
            system("cls");
            cout
            << "Terima Kasih\n"
            << "semoga harimu menyenangkan, GBU!" <<endl;
            system("pause");
            exit(0);
        default :
            //clrscr();
            system("cls");
            cout
            << "__________________\n"
            << "[ ERROR ]\nTerdapat kesalahan dalam input, mohon coba lagi." <<endl;
    }
    cout << "__________________\ningin kembali ke menu (y/t)? ";
    cin >> yt;
    }


    //...
    while (yt!='t');
    //clrscr();
    system("cls");
    cout
    << "__________________\n"
    << "[ Terima Kasih ]\n"
    << "semoga harimu menyenangkan, GBU!" <<endl;
    //getch();
    system("pause");
    return 0;}