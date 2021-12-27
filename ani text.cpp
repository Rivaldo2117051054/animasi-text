 #include <ncurses/ncurses.h>
#include <iostream>
#include <windows.h>//library untuk menggunakan fungsi sleep
  
using namespace std; 

/* Nama : Rivaldo
   Kelas: B 
   NPM: 2117051054 */   
    
int main(){  
	int i=0,z=2,o=14,p=46;  
	initscr();  
while(i<30){
	mvprintw(9,i++,"=");
	refresh();
	Sleep(200);
	//sleep untuk menentukan kecepatan 1000 untuk 1 detik	
	mvprintw(10,z++," LOADING");
	refresh();
	Sleep(200);	
	mvprintw(11,i++,"=");
	refresh();
	Sleep(200);
	mvprintw(13,o--,"<");
	refresh();
	Sleep(200);	
	mvprintw(13,p--,">");
	refresh();
	Sleep(200);
}
	mvprintw(13,15," Namaku Rivaldo");
	refresh();
	Sleep(200);
	//muncul saat perulangan selesai

	getch();
	//menekan tombol sblum program keluar
	endwin();

}
 
