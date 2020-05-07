#include<fstream.h>
#include<process.h>
#include<dos.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int tr1=0,tr2=0;
int FBat()
{
 int r1,flag=1,b, gdriver=DETECT, gmode;
 time_t t;
 do{
    srand((unsigned) time(&t));
    b =(rand()%6)+1;
    gotoxy(36,16);
    cout<<"==> BAT <==";
    gotoxy(37,17);
    cin>>r1;
    gotoxy(45,17);
    cout<<b;
    if(r1>=7||r1<=0)
    {
     ofstream fout;
     fout.open("SCORE.txt",ios::app);
     fout<<"e";
     fout.close();
     delay(100);
     initgraph(&gdriver, &gmode, "C://TURBOC3//BGI");
     setcolor(4);
     settextstyle(6,0,4);
     outtextxy(250,250,"!!WRONG Input!!");
     cout<<"\n";
     delay(500);
     exit(0);
    }

    else if(r1==b)
    {
     setcolor(4);
     gotoxy(35,19);
     cout<<"!!Y0u aRe 0UT!!";
     cout<<"\n";
     flag=0;
    }
    else
    {
     tr1+=r1;
     delay(500);
     setcolor(2);
     gotoxy(35,19);
     cout<<"!>> H I T <<!";
     cout<<"\n";
     delay(100);
    }
    delay(500);
    system("cls");
    gotoxy(33,10);
    cout<<"-> Y0uR RuN5 == "<<tr1<<endl;
    }while(flag);
    return tr1;
 }
 int SBall()
 {
  int flag=1,r2,b, gdriver=DETECT, gmode;
  time_t t;
  do{
     srand((unsigned) time(&t));
     r2 = (rand()%6)+1;
     gotoxy(36,16);
     cout<<"==> BALL <==";
     gotoxy(37,17);
     cin>>b;
     gotoxy(45,17);
     cout<<r2;
     if(b>=7||b<=0){
     ofstream fout;
     fout.open("SCORE.txt",ios::app);
     fout<<"e";
     fout.close();
     delay(100);
     initgraph(&gdriver, &gmode, "C://TURBOC3//BGI");
     setcolor(4);
     settextstyle(6,0,4);
     outtextxy(250,250,"!!WRONG Input!!");
     cout<<"\n";
     delay(500);
     exit(0);
     }
     if(b==r2)
     {
      setcolor(4);
      gotoxy(35,19);
      cout<<"H 0 W Z 4 T T!";
      flag=0;
     }
     else
     {
      delay(500);
      setcolor(2);
      gotoxy(36,19);
      cout<<"!>> H I T <<!";
      cout<<"\n";
      tr2+=r2;
      delay(100);
     }
     if(tr2>tr1)
     {
      flag=0;
     }
     delay(500);
     system("cls");
     gotoxy(34,10);
     cout<<"-> Y0uR RuN5 = "<<tr1;
     gotoxy(34,11);
     cout<<"-> C0mp RuN5 = "<<tr2;
    }while(flag);
    return tr2;
    }
int SBat()
{
 int r1,flag=1,b, gdriver=DETECT, gmode;
 time_t t;
 do{
    srand((unsigned) time(&t));
    b =(rand()%6)+1;
    gotoxy(36,16);
    cout<<"==> BAT <==";
    gotoxy(37,17);
    cin>>r1;
    gotoxy(45,17);
    cout<<b;
    if(r1>=7||r1<=0)
    {
     ofstream fout;
     fout.open("SCORE.txt",ios::app);
     fout<<"e";
     fout.close();
     delay(100);
     initgraph(&gdriver, &gmode, "C://TURBOC3//BGI");
     setcolor(4);
     settextstyle(6,0,4);
     outtextxy(250,250,"!!WRONG Input!!");
     delay(300);
     exit(0);
    }
    if(r1==b)
    {setcolor(4);
     gotoxy(35,19);
     cout<<"!!Y0u aRe 0UT!!";
     flag=0;
    }
    else
    {
     tr1+=r1;
     delay(500);
     setcolor(2);
     gotoxy(35,19);
     cout<<"!>> H I T <<!";
     delay(100);
    }
    if(tr1>tr2)
    {
     flag=0;
    }
    delay(500);
    system("cls");
    gotoxy(33,10);
    cout<<"-> Y0uR T4RgeT = "<<tr2;
    gotoxy(33,11);
    cout<<"-> Y0uR RuN5 = "<<tr1;
    }while(flag);
    return tr1;
 }
 int FBall()
 {
  int flag=1,r2,b, gdriver=DETECT, gmode;
  time_t t;
  do{
     srand((unsigned) time(&t));
     r2 = (rand()%6)+1;
     gotoxy(36,16);
     cout<<"==> BALL <==";
     gotoxy(37,17);
     cin>>b;
     gotoxy(45,17);
     cout<<r2;
     if(b>=7||b<=0){
     ofstream fout;
     fout.open("SCORE.txt",ios::app);
     fout<<"e";
     fout.close();
     delay(100);
     initgraph(&gdriver, &gmode, "C://TURBOC3//BGI");
     setcolor(4);
     settextstyle(6,0,4);
     outtextxy(250,250,"!!WRONG Input!!");
     cout<<"\n";
     delay(500);
     exit(0);
     }
     if(b==r2)
     {setcolor(4);
      gotoxy(35,19);
      cout<<"H 0 W Z 4 T T!";
      cout<<"\n";
      delay(500);
      flag=0;
     }
     else
     {
      delay(500);
      setcolor(2);
      gotoxy(36,19);
      cout<<"!>> H I T<<!";
      delay(500);
      tr2+=r2;
      delay(100);
     }
     system("cls");
     gotoxy(34,10);
     cout<<"-> C0mp RuN5 = "<<tr2;
    }while(flag);
    return tr2;
    }
void WPlay()
{
 int ch,rf,rs,q, gdriver=DETECT, gmode;
 ofstream fout;
 char c;
 int count=0;
 ifstream fin;
 fin.open("SCORE.txt",ios::in);
 for(int i=0;i<350;i++){
 fin.seekg(i);
 fin.get(c);
 if(c=='M'){
 count++;
 }
 if(count>10){
 fout.open("SCORE.txt",ios::out);
 }
 }
 fin.close();
 fout.open("SCORE.txt",ios::app);
 fout<<"M"<<count+1;
 fout.close();
 char rch[100];
 fin.open("SCORE.txt",ios::in);
 fin.getline(rch,100);
 fin.close();
 initgraph(&gdriver, &gmode, "C://TURBOC3//BGI");
 setcolor(2);
 settextstyle(8,0,4);
 outtextxy(75,25,"<<= You WON the Toss!! =>>");
 settextstyle(8,0,2);
 outtextxy(70,100,"What do YOU want.... BATTING or BOWLING??");
 gotoxy(20,12);
 cout<<"Enter '1' for BATTING and, '2' for BOWLING:";
 cin>>ch;
 switch(ch){
  case 1: setcolor(6);
	  settextstyle(7,0,3);
	  outtextxy(235,200,"Y0uR B4TT1NG");
	  cout<<"\n";
	  rf=FBat();
	  delay(1000);
	  system("cls");
	  rs=SBall();
	  fout.open("SCORE.txt",ios::app);
	  fout<<"U"<<rf;
	  fout<<"C"<<rs;
	  fout.close();
	  initgraph(&gdriver, &gmode, "C://TURBOC3//BGI");
	  if(rf<rs){
	  setcolor(4);
	  settextstyle(7,0,5);
	  outtextxy(150,200,"*_* DEFEAT *_*");
	  cout<<"\n"; }
	  else if(rf==rs){
	  setcolor(8);
	  settextstyle(7,0,5);
	  outtextxy(175,200,"#-# TIE #-#");
	  cout<<"\n";}
	  else{
	  setcolor(2);
	  settextstyle(7,0,5);
	  outtextxy(150,200,"$_$ VICTORY $_$");
	  cout<<"\n"; }
	  break;
 case 2:  setcolor(6);
	  settextstyle(7,0,3);
	  outtextxy(245,200,"Y0ur B4LL1NG");
	  cout<<"\n";
	  rf=FBall();
	  delay(1000);
	  system("cls");
	  rs=SBat();
	  fout.open("SCORE.txt",ios::app);
	  fout<<"C"<<rf;
	  fout<<"U"<<rs;
	  fout.close();
	  initgraph(&gdriver, &gmode, "C://TURBOC3//BGI");
	  if(rf>rs){
	  setcolor(4);
	  settextstyle(7,0,5);
	  outtextxy(150,200,"*_* DEFEAT *_*");
	  cout<<"\n";}
	  else if(rf==rs)
	  {setcolor(8);
	   settextstyle(7,0,5);
	   outtextxy(175,200,"#_# TIE #_#");
	   cout<<"\n";
	  }
	  else{
	  setcolor(2);
	  settextstyle(7,0,5);
	  outtextxy(150,200,"$_$ VICTORY $_$");
	  cout<<"\n";
	  }
	  break;
 default :fout.open("SCORE.txt",ios::app);
	  fout<<"e";
	  fout.close();
	  initgraph(&gdriver, &gmode, "C://TURBOC3//BGI");
	  setcolor(4);
	  settextstyle(8,0,4);
	  outtextxy(100,100,"!^^^WRONG Choice^^^!");
	  outtextxy(50,150,"</>You are KICKED OUT</>");
	  delay(1000);
	  exit(0);
	  break;
 }
}
void LPlay()
{
 int ch,rf,rs,q,gdriver=DETECT,gmode;
 time_t t;
 srand((unsigned) time(&t));
 ch=(rand()%2)+1;
 ofstream fout;
 char c;
 int count=0;
 ifstream fin;
 fin.open("SCORE.txt",ios::in);
 for(int i=0;i<350;i++){
 fin.seekg(i);
 fin.get(c);
 if(c=='M'){
 count++;
 }
 if(count>10){
 fout.open("SCORE.txt",ios::out);
 }
 }
 fin.close();
 fout.open("SCORE.txt",ios::app);
 fout<<"M"<<count+1;
 fout.close();
 char rch[100];
 fin.open("SCORE.txt",ios::in);
 fin.getline(rch,100);
 fin.close();
 initgraph(&gdriver,&gmode, "C://TURBOC3//BGI") ;
 setcolor(4);
 settextstyle(8,0,4);
 outtextxy(76,25,"=>> You LOST the Toss!! <<=");
 setcolor(5);
 settextstyle(8,0,3);
 outtextxy(195,75,"Opponent selected to, ");

 switch(ch){
 case 1:  outtextxy(250,100,"B4LL F1r5t");
	  setcolor(6);
	  settextstyle(7,0,4);
	  outtextxy(145,175,"00^^Y0uR B4TT1NG^^00");
	  rf=FBat();
	  delay(1000);
	  system("cls");
	  rs=SBall();
	  fout.open("SCORE.txt",ios::app);
	  fout<<"U"<<rf;
	  fout<<"C"<<rs;
	  fout.close();
	  initgraph(&gdriver, &gmode, "C://TURBOC3//BGI");
	  if(rf<rs){
	  setcolor(4);
	  settextstyle(7,0,5);
	  outtextxy(150,200,"*_* DEFEAT *_*");
	  cout<<"\n"; }
	  else if(rf==rs){
	  setcolor(8);
	  settextstyle(7,0,5);
	  outtextxy(175,200,"#_# TIE #_#");
	  cout<<"\n";}
	  else{
	  setcolor(2);
	  settextstyle(7,0,5);
	  outtextxy(150,200,"$_$ VICTORY $_$");
	  cout<<"\n"; }
	  break;
 case 2:
	  outtextxy(250,100,"B4T F1r5t");
	  setcolor(6);
	  settextstyle(7,0,4);
	  outtextxy(145,175, "00^^Y0uR B4LL1NG^^00");
	  cout<<"\n";
	  rf=FBall();
	  delay(1000);
	  system("cls");
	  rs=SBat();
	  fout.open("SCORE.txt",ios::app);
	  fout<<"C"<<rf;
	  fout<<"U"<<rs;
	  fout.close();
	  initgraph(&gdriver, &gmode, "C://TURBOC3//BGI");
	  if(rf>rs){
	  setcolor(4);
	  settextstyle(7,0,5);
	  outtextxy(150,200,"*_* DEFEAT *_*");
	  cout<<"\n";
	  }
	  else if(rf==rs)
	  {
	   setcolor(8);
	   settextstyle(7,0,5);
	   outtextxy(175,200,"#_# TIE #_#");
	   cout<<"\n";
	  }
	  else{
	  setcolor(2);
	  settextstyle(7,0,5);
	  outtextxy(150,200,"$_$ VICTORY $_$");
	  cout<<"\n";
	  }
	  break;
 default :
	  break;
	  }
}
void Toss()
{
 char c,j;
 int x,b;
 int gdriver=DETECT, gmode;
 initgraph(&gdriver, &gmode, "C://TURBOC3//BGI");
 setcolor(4);
 settextstyle(1,0,6);
 outtextxy(50,4,"*****  T O S S  *****");
 outtextxy(175,50,"~~~~~~~~~~~");
 gotoxy(25,10);
 cout<<"=> Odd or Even(o/e):" ;
 gotoxy(48,10);
 cin>>c;
 time_t t;
 srand((unsigned) time(&t));
 x=(rand()%6)+1;
 gotoxy(25,12);
 cout<<"=> Do your toss(1-6):";
 gotoxy(48,12);
 cin>>b;
 gotoxy(53,12);
 cout<<x;
  if(b<=0||b>=7)
 {
  settextstyle(8,0,2);
  outtextxy(213,210," 'WRONG INPUT'");
  delay(500);
  exit(0);
 }
 if((b+x)%2==0)
 {
  setcolor(6);
  settextstyle(8,0,2);
  outtextxy(265,210,"'It's EVEN'");
  delay(500);
  j='e';
  if(c==j)
  {
  delay(500);
  system("cls");
  WPlay();
  }
  else
  {
   delay(500);
  system("cls");
  LPlay();
  }
 }
 else
 { setcolor(6);
  settextstyle(8,0,2);
  outtextxy(265,210,"'It's ODD'");
  cout<<"\n";
  delay(500);
  j='o';
  if(c==j)
  {
   delay(500);
  system("cls");
  WPlay();
  }
  else
  {
   delay(500);
  system("cls");
  LPlay();
  }
 }
}
void Load()
{
 clrscr();
 gotoxy(34,12);
 cout<<"Loading";
 for(int j=0;j<2;j++)
 {
  for(int i=0;i<3;i++)
  {
   delay(300);
   cout<<".";
  }
  delay(1000);
  system("cls");
  gotoxy(34,12);
  cout<<"Loading";
 }
 if(j==2)
 {
  system("cls");
 }
 }
 void main()
{
 clrscr();
 Load();
 int gdriver=DETECT, gmode;
 initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
 Toss();
 gotoxy(30,25);
 cout<<"Press any key to exit"<<endl;
 getch();
}
