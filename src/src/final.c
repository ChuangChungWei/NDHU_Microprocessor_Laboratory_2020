/***************************************************************/
/*                                                             */
/*      PROJECT NAME :  final                                  */
/*      FILE         :  final.c                                */
/*      DESCRIPTION  :  Main Program                           */
/*      CPU SERIES   :  RX200                                  */
/*      CPU TYPE     :  RX231                                  */
/*                                                             */
/*      This file is generated by e2 studio.                   */
/*                                                             */
/***************************************************************/                              
                                                                           
                                                                           
                                                                           
                                                                          
/***********************************************************************/
/*                                                                     */
/*  FILE        :Main.c or Main.cpp                                    */
/*  DATE        :Tue, Oct 31, 2006                                     */
/*  DESCRIPTION :Main Program                                          */
/*  CPU TYPE    :                                                      */
/*                                                                     */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/*                                                                     */
/***********************************************************************/
//#include "typedefine.h"
#ifdef __cplusplus
//#include <ios>                        // Remove the comment when you use ios
//_SINT ios_base::Init::init_cnt;       // Remove the comment when you use ios
#endif

void main(void);
#ifdef __cplusplus
extern "C" {
void abort(void);
}
#endif

/***************************************************************/
/*                                                             */
/*      PROJECT NAME :  FinalProject                           */
/*      FILE         :  FinalProject.c                         */
/*      DESCRIPTION  :  Main Program                           */
/*      CPU SERIES   :  RX200                                  */
/*      CPU TYPE     :  RX231                                  */
/*                                                             */
/*      This file is generated by e2 studio.                   */
/*                                                             */
/***************************************************************/




/***********************************************************************/
/*                                                                     */
/*  FILE        :Main.c or Main.cpp                                    */
/*  DATE        :Tue, Oct 31, 2006                                     */
/*  DESCRIPTION :Main Program                                          */
/*  CPU TYPE    :                                                      */
/*                                                                     */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/*                                                                     */
/***********************************************************************/
//#include "typedefine.h"
#ifdef __cplusplus
//#include <ios>                        // Remove the comment when you use ios
//_SINT ios_base::Init::init_cnt;       // Remove the comment when you use ios
#endif

void main(void);
#ifdef __cplusplus
extern "C" {
void abort(void);
}
#endif

#include "iodefine.h"
#include "stdlib.h"
#include <stdio.h>
#include "vect.h"
//#include "time.h"

#define WALL 2
#define Box 1
#define Kong 0
#define FACE_X 16
#define FACE_Y 8

int pd();
int  music;
void initKbhit();
void timer_init();
void sleep(double a);
void init();
void bright();
void dark();
void init_dia();
void ir_init(void);
void start_game();
void start_game2();
void draw_dia();
void draw_kong();
void renewFace();
void delay1ms();
void brightRow();
void LED7_bit_write(int number,int pos);
void LED7_pin_init(void);
void music_init();
void randBarrier();
int barrierPlus(int py);
void newBarrier(int n);
int begin_state(void);
int begin_state_1(void);
int begin_state_2(void);
void in_face(int a);
int select();
int kbhit();
int xc();
int eliminate_flag=0;
void darkAll();
void stop();
void Mi(int);
void Re(int);
void Do(int);
void La(int);
void Si(int);
void delay();

void Fa(int);
void So(int);
void La1(int);
void eliminate(int);

void setSelect(int);
void setGrade();
void tone(int,int);
void play_song(int a);


int nn=0;
int grade=5678;
int barrier[2][8] = {{1,1,1,0,0,1,0,1},{1,1,1,0,0,1,0,1}};
int SELECT = 0;
int TEMP[17][9];

int m1=0,m2=0,m3=0,end_flag=0;
const int song[20]={3,3,4,5,0,5,4,3,2,0,1,1,2,3,3,2,2,0,0};
const int song_long=21;
int play_time = 70000;  //50
const int show_1[17][9]={
{0,0,0,0,0,0,0,0,0},	//X

{0,0,0,0,0,0,0,0,0},
{0,0,0,0,1,1,0,0,0},
{0,0,0,0,1,1,0,0,0},
{0,0,0,0,1,1,0,0,0},
{0,0,0,0,1,1,0,0,0},
{0,0,0,0,1,1,0,0,0},
{0,0,0,0,1,1,0,0,0},
{0,0,0,0,0,0,0,0,0},

{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},

};










const int show_2[17][9]={
{0,0,0,0,0,0,0,0,0},	//X

{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},

{0,0,0,0,0,0,0,0,0},
{0,0,1,1,1,1,1,1,0},
{0,0,0,0,0,0,0,1,0},
{0,0,1,1,1,1,1,1,0},
{0,0,1,0,0,0,0,0,0},
{0,0,1,1,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0}

};

















const int show_3[17][9]={
{0,0,0,0,0,0,0,0,0},	//X

{0,0,0,0,0,0,0,0,0},
{0,0,0,0,1,1,0,0,0},
{0,0,0,0,1,1,0,0,0},
{0,0,0,0,1,1,0,0,0},
{0,0,0,0,1,1,0,0,0},
{0,0,0,0,1,1,0,0,0},
{0,0,0,0,1,1,0,0,0},
{0,0,0,0,0,0,0,0,0},

{0,0,0,0,0,0,0,0,0},
{0,0,1,1,1,1,1,1,0},
{0,0,0,0,0,0,0,1,0},
{0,0,1,1,1,1,1,1,0},
{0,0,1,0,0,0,0,0,0},
{0,0,1,1,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0}

};

const int pause[17][9]={
{0,0,0,0,0,0,0,0,0},	//X

{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,1,1,1,1},
{0,1,0,0,0,0,0,0,1},
{0,1,0,1,0,0,1,0,1},
{0,1,0,1,0,0,1,0,1},

{0,1,0,1,0,0,1,0,1},
{0,1,0,1,0,0,1,0,1},
{0,1,0,0,0,0,0,0,1},
{0,1,1,1,1,1,1,1,1},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0}
};

const int LED7pinState[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 0, 0, 1},

  {0, 1, 1, 0, 0, 1, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1},

  {1, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 0, 1, 1},
};


typedef struct Diamonds
{   int space[4][4];

}Dia;

Dia dia[7][4];

int face[17][9];

int count=0;
int flag;
int count_Renew=0;

/*void ir_init(){
	MPC.PWPR.BIT.B0WI = 0;
	MPC.PWPR.BIT.PFSWE = 1;
	MPC.P32PFS.BIT.ISEL = 1;	//how to trigger

	ICU.IER[8].BIT.IEN1 = 1;	//sw1 == IRQ1 == IER8 == IEN1
	ICU.IR[66].BIT.IR=1;
	ICU.IRQCR[1].BIT.IRQMD = 0;	//IEN1 : 1
	ICU.IPR[66].BIT.IPR = 0xf;
	PORT1.PMR.BIT.B7=0;
	PORT1.PDR.BIT.B7=1;
	PORT1.PIDR.BIT.B7=1;
}*/
int boot=1;

 void main(void){
	 SYSTEM.PRCR.WORD=0xA50B;
	MSTP(MTU)=0;
	SYSTEM.SCKCR.BIT.PCKA;
	MTU1.TCR.BIT.TPSC=0;

	MTU1.TCR.BIT.CCLR=2;//TGRB重製
	MTU1.TGRB=32768;

	MTU.TSTR.BIT.CST1=1;

	MTU.TSTR.BIT.CST2=1;
	MTU2.TCR.BIT.TPSC=0;

	MTU2.TCR.BIT.CCLR=2;//TGRB重製
	MTU2.TCR.BIT.TPSC=2;
	MTU2.TGRB=31250;
	MTU.TSTR.BIT.CST2=1;

	PORT3.PMR.BIT.B3=0;
	PORT3.PDR.BIT.B3=1;
	PORT3.PODR.BIT.B3=1;
	init();
	init_dia();
	initKbhit();
	LED7_pin_init();
	PORT3.PMR.BIT.B2 = 0;
	PORT3.PDR.BIT.B2 = 0;
	MPC.PWPR.BIT.B0WI = 0;   //writing PFFSWE enable
	MPC.PWPR.BIT.PFSWE = 1;     //writing PFS enable
	MPC.P32PFS.BIT.ISEL = 1;	//Used as IRQn input pin


	ICU.IER[8].BIT.IEN2 = 0;	//Interrupt Request Enable 2
	ICU.IR[66].BIT.IR=1;    // An interrupt request is generated
	ICU.IRQCR[2].BIT.IRQMD = 2;	//Rising edge
	ICU.IPR[66].BIT.IPR = 0xf;  // interrupt vector number

/*while(1)
{grade=1;
renewFace();}*/
//	WDT.WDTRCR.BIT.RSTIRQS=1;


	int i,x=0,y=0,j;
	init();

	init_dia();
	LED7_pin_init();
	initKbhit();


	nn=3;
	grade=0;

	   for(i=1;i<=16;i++)
		{
			for(j=1;j<=8;j++)
			{
				face[i][j]=0;
			}
		}
	   /*while(1){
	   for(i=1;i<=16;i++)
		{
			for(j=1;j<=8;j++)
			{
				bright(i,j);
			}
		}
	   }*/

	  x=0;
	  i=1;
	  j=1;
	  count=0;
	  /*while(1){
		  bright(1,1);
	  }*/
	  if(boot==1)
	  {
		 while(1)
		 {
			//renewFace();
			 count++;
			 int y=song[x];
			 tone(y,10000);

			 x++;
			 if(x==song_long)
					break;
			 x=x%song_long;

			 if(count%3==0)
			 {
				 //darkAll();
				 face[2][4]=1;
				 face[3][4]=1;
				 face[2][5]=1;
				 face[3][5]=1;

				 brightRow(3,0);

			 }
			 if(count%3==1)
			 {
				 face[2][4]=1;
				 face[3][4]=1;
				 face[2][5]=1;
				 face[3][5]=1;

				 face[8][4]=1;
				 face[9][4]=1;
				 face[8][5]=1;
				 face[9][5]=1;
				 brightRow(0,9);

			 }
			 if(count%3==2)
			 {
				 face[2][4]=1;
				 face[3][4]=1;
				 face[2][5]=1;
				 face[3][5]=1;

				 face[8][4]=1;
				 face[9][4]=1;
				 face[8][5]=1;
				 face[9][5]=1;

				 face[14][4]=1;
				 face[15][4]=1;
				 face[14][5]=1;
				 face[15][5]=1;


				 brightRow(0,14);

			 }


			 delay(10);
		 }
	  }
	  boot=0;
	  play_time=50;

	 for(i=1;i<=16;i++)
	{
		for(j=1;j<=8;j++)
		{
			face[i][j]=0;
		}
	}


	while(1){
		int s=begin_state();

		SELECT = 1;
		if(s==1)
		{
			in_face(0);
			darkAll();

			while(1){
			start_game();
			}


		}
		else if(s==2)
		{
			in_face(0);
			darkAll();
			start_game2();


		}
	}

}

void timer_init(){
	SYSTEM.PRCR.WORD=0xA50B;
	MSTP(MTU)=0;
	MTU0.TCR.BIT.TPSC=2;
	//MTU0.TCR.BIT.TPSC=3;
	MTU0.TCR.BIT.CCLR=2;
	MTU0.TGRB=32768;
	MTU.TSTR.BIT.CST0=1;
}

void music_init(){
    	SYSTEM.PRCR.WORD=0xA50B;
	MSTP(MTU)=0;
	SYSTEM.SCKCR.BIT.PCKA;
	MTU1.TCR.BIT.TPSC=0;

	MTU1.TCR.BIT.CCLR=2;//TGRB重製
	MTU1.TGRB=32768;

	MTU.TSTR.BIT.CST1=1;

	MTU.TSTR.BIT.CST2=1;
	MTU2.TCR.BIT.TPSC=0;

	MTU2.TCR.BIT.CCLR=2;//TGRB重製
	MTU2.TGRB=32768;
	MTU.TSTR.BIT.CST2=1;
	PORT3.PODR.BIT.B3=1;
	PORT3.PMR.BIT.B3=0;
	PORT3.PDR.BIT.B3=1;
}


void sleep(double a){
	//LED7_bit_write(3,0);
	MTU0.TCNT = 0x00;
	//LED7_bit_write(4,0);
	while(a>0){
		//LED7_bit_write(5,0);
		if( MTU0.TCNT > 8){
			a-= 1;
			MTU0.TCNT = 0x00;
		}
	}

}
void delay1ms(int x)
{ int i,j; /* 宣告變數 */
}


void init(){
	int i,j;
	for(i=1;i<=16;i++)
	{
		for(j=1;j<=8;j++)
		{
			face[i][j]=0;
		}
	}
	PORTB.PDR.BIT.B7=1;
	PORTB.PDR.BIT.B5=1;
	PORTB.PDR.BIT.B3=1;
	PORTB.PDR.BIT.B1=1;
	PORTA.PDR.BIT.B7=1;
	PORTA.PDR.BIT.B5=1;
	PORTA.PDR.BIT.B3=1;
	PORTA.PDR.BIT.B1=1;
	PORTE.PDR.BIT.B7=1;
	PORTE.PDR.BIT.B5=1;
	PORTE.PDR.BIT.B3=1;
	PORTE.PDR.BIT.B1=1;
	PORTD.PDR.BIT.B7=1;
	PORTD.PDR.BIT.B5=1;
	PORTD.PDR.BIT.B3=1;
	PORTD.PDR.BIT.B1=1;
	PORT4.PDR.BIT.B7=1;
	PORTB.PDR.BIT.B6=1;
	PORTB.PDR.BIT.B4=1;
	PORTB.PDR.BIT.B2=1;
	PORTB.PDR.BIT.B0=1;
	PORTA.PDR.BIT.B6=1;
	PORTA.PDR.BIT.B4=1;
	PORTA.PDR.BIT.B2=1;
	PORTA.PDR.BIT.B0=1;
	PORTE.PDR.BIT.B6=1;
	PORTE.PDR.BIT.B4=1;
	PORTE.PDR.BIT.B2=1;
	PORTE.PDR.BIT.B0=1;
	PORTD.PDR.BIT.B6=1;
	PORTD.PDR.BIT.B2=1;
	PORT4.PDR.BIT.B6=1;
}

void bright(int x,int y){

	PORTA.PODR.BIT.B1=1;
	PORTA.PODR.BIT.B3=1;
	PORTB.PODR.BIT.B3=1;
	PORTB.PODR.BIT.B4=1;
	PORTB.PODR.BIT.B5=1;
	PORTB.PODR.BIT.B0=1;
	PORTA.PODR.BIT.B6=1;
	PORTA.PODR.BIT.B7=1;
	PORTD.PODR.BIT.B1=1;
	PORTD.PODR.BIT.B3=1;
	PORTE.PODR.BIT.B3=1;
	PORTE.PODR.BIT.B4=1;
	PORTE.PODR.BIT.B5=1;
	PORTE.PODR.BIT.B0=1;
	PORTD.PODR.BIT.B6=1;
	PORTD.PODR.BIT.B7=1;

			PORTB.PODR.BIT.B7=0;

			PORTA.PODR.BIT.B5=0;

			PORT4.PODR.BIT.B7=0;

			PORTB.PODR.BIT.B1=0;

			PORTA.PODR.BIT.B2=0;

			PORTB.PODR.BIT.B6=0;

			PORTA.PODR.BIT.B4=0;

			PORTB.PODR.BIT.B2=0;

			PORTE.PODR.BIT.B7=0;

			PORTD.PODR.BIT.B5=0;

			PORTA.PODR.BIT.B0=0;

			PORTE.PODR.BIT.B1=0;

			PORT4.PODR.BIT.B6=0;

			PORTE.PODR.BIT.B6=0;

			PORTD.PODR.BIT.B2=0;

			PORTE.PODR.BIT.B2=0;


	if(x==1)
	PORTA.PODR.BIT.B1=0;
	else if(x==2)
	PORTA.PODR.BIT.B3=0;
	else if(x==3)
	PORTB.PODR.BIT.B3=0;
	else if(x==4)
	PORTB.PODR.BIT.B4=0;
	else if(x==5)
	PORTB.PODR.BIT.B5=0;
	else if(x==6)
	PORTB.PODR.BIT.B0=0;
	else if(x==7)
	PORTA.PODR.BIT.B6=0;
	else if(x==8)
	PORTA.PODR.BIT.B7=0;
	else if(x==9)
	PORTD.PODR.BIT.B1=0;
	else if(x==10)
	PORTD.PODR.BIT.B3=0;
	else if(x==11)
	PORTE.PODR.BIT.B3=0;
	else if(x==12)
	PORTE.PODR.BIT.B4=0;
	else if(x==13)
	PORTE.PODR.BIT.B5=0;
	else if(x==14)
	PORTE.PODR.BIT.B0=0;
	else if(x==15)
	PORTD.PODR.BIT.B6=0;
	else if(x==16)
	PORTD.PODR.BIT.B7=0;




	if(x<=8)
	{
		if(y==1)
		PORTB.PODR.BIT.B7=1;
		else if(y==2)
		PORTA.PODR.BIT.B5=1;
		else if(y==3)
		PORT4.PODR.BIT.B7=1;
		else if(y==4)
		PORTB.PODR.BIT.B1=1;
		else if(y==5)
		PORTA.PODR.BIT.B2=1;
		else if(y==6)
		PORTB.PODR.BIT.B6=1;
		else if(y==7)
		PORTA.PODR.BIT.B4=1;
		else if(y==8)
		PORTB.PODR.BIT.B2=1;
	}
	else{
		if(y==1)
		PORTE.PODR.BIT.B7=1;
		else if(y==2)
		PORTD.PODR.BIT.B5=1;
		else if(y==3)
		PORTA.PODR.BIT.B0=1;
		else if(y==4)
		PORTE.PODR.BIT.B1=1;
		else if(y==5)
		PORT4.PODR.BIT.B6=1;
		else if(y==6)
		PORTE.PODR.BIT.B6=1;
		else if(y==7)
		PORTD.PODR.BIT.B2=1;
		else if(y==8)
		PORTE.PODR.BIT.B2=1;
	}
	//sleep(1);
	//delay1ms(1);
	//dark(x,y);

}

void brightRow(int x,int z){

	int y,s,s1;

	PORTA.PODR.BIT.B1=1;
	PORTA.PODR.BIT.B3=1;
	PORTB.PODR.BIT.B3=1;
	PORTB.PODR.BIT.B4=1;
	PORTB.PODR.BIT.B5=1;
	PORTB.PODR.BIT.B0=1;
	PORTA.PODR.BIT.B6=1;
	PORTA.PODR.BIT.B7=1;
	PORTD.PODR.BIT.B1=1;
	PORTD.PODR.BIT.B3=1;
	PORTE.PODR.BIT.B3=1;
	PORTE.PODR.BIT.B4=1;
	PORTE.PODR.BIT.B5=1;
	PORTE.PODR.BIT.B0=1;
	PORTD.PODR.BIT.B6=1;
	PORTD.PODR.BIT.B7=1;


	if(x==1)
	PORTA.PODR.BIT.B1=0;
	else if(x==2)
	PORTA.PODR.BIT.B3=0;
	else if(x==3)
	PORTB.PODR.BIT.B3=0;
	else if(x==4)
	PORTB.PODR.BIT.B4=0;
	else if(x==5)
	PORTB.PODR.BIT.B5=0;
	else if(x==6)
	PORTB.PODR.BIT.B0=0;
	else if(x==7)
	PORTA.PODR.BIT.B6=0;
	else if(x==8)
	PORTA.PODR.BIT.B7=0;
	if(z==9)
	PORTD.PODR.BIT.B1=0;
	else if(z==10)
	PORTD.PODR.BIT.B3=0;
	else if(z==11)
	PORTE.PODR.BIT.B3=0;
	else if(z==12)
	PORTE.PODR.BIT.B4=0;
	else if(z==13)
	PORTE.PODR.BIT.B5=0;
	else if(z==14)
	PORTE.PODR.BIT.B0=0;
	else if(z==15)
	PORTD.PODR.BIT.B6=0;
	else if(z==16)
	PORTD.PODR.BIT.B7=0;


	for(y=1;y<=8;y++)
	{
		if(x==0)
			s=0;
		if(z==0)
			s1=0;
		s=face[x][y];
		s1=face[z][y];
		if(s>=1)
		{
			if(y==1)
			PORTB.PODR.BIT.B7=1;
			else if(y==2)
			PORTA.PODR.BIT.B5=1;
			else if(y==3)
			PORT4.PODR.BIT.B7=1;
			else if(y==4)
			PORTB.PODR.BIT.B1=1;
			else if(y==5)
			PORTA.PODR.BIT.B2=1;
			else if(y==6)
			PORTB.PODR.BIT.B6=1;
			else if(y==7)
			PORTA.PODR.BIT.B4=1;
			else if(y==8)
			PORTB.PODR.BIT.B2=1;
		}

		if(s1>=1)
		{
			if(y==1)
			PORTE.PODR.BIT.B7=1;
			else if(y==2)
			PORTD.PODR.BIT.B5=1;
			else if(y==3)
			PORTA.PODR.BIT.B0=1;
			else if(y==4)
			PORTE.PODR.BIT.B1=1;
			else if(y==5)
			PORT4.PODR.BIT.B6=1;
			else if(y==6)
			PORTE.PODR.BIT.B6=1;
			else if(y==7)
			PORTD.PODR.BIT.B2=1;
			else if(y==8)
			PORTE.PODR.BIT.B2=1;
		}
		}
}

	//sleep(1);



void darkAll(){


		PORTA.PODR.BIT.B1=1;
		PORTA.PODR.BIT.B3=1;
		PORTB.PODR.BIT.B3=1;
		PORTB.PODR.BIT.B4=1;
		PORTB.PODR.BIT.B5=1;
		PORTB.PODR.BIT.B0=1;
		PORTA.PODR.BIT.B6=1;
		PORTA.PODR.BIT.B7=1;
		PORTD.PODR.BIT.B1=1;
		PORTD.PODR.BIT.B3=1;
		PORTE.PODR.BIT.B3=1;
		PORTE.PODR.BIT.B4=1;
		PORTE.PODR.BIT.B5=1;
		PORTE.PODR.BIT.B0=1;
		PORTD.PODR.BIT.B6=1;
		PORTD.PODR.BIT.B7=1;
		PORTB.PODR.BIT.B7=0;
		PORTA.PODR.BIT.B5=0;
		PORT4.PODR.BIT.B7=0;
		PORTB.PODR.BIT.B1=0;
		PORTA.PODR.BIT.B2=0;
		PORTB.PODR.BIT.B6=0;
		PORTA.PODR.BIT.B4=0;
		PORTB.PODR.BIT.B2=0;
		PORTE.PODR.BIT.B7=0;
		PORTD.PODR.BIT.B5=0;
		PORTA.PODR.BIT.B0=0;
		PORTE.PODR.BIT.B1=0;
		PORT4.PODR.BIT.B6=0;
		PORTE.PODR.BIT.B6=0;
		PORTD.PODR.BIT.B2=0;
		PORTE.PODR.BIT.B2=0;

}
void dark(int x,int y){

	if(x==1)
	PORTA.PODR.BIT.B1=1;
	else if(x==2)
	PORTA.PODR.BIT.B3=1;
	else if(x==3)
	PORTB.PODR.BIT.B3=1;
	else if(x==4)
	PORTB.PODR.BIT.B4=1;
	else if(x==5)
	PORTB.PODR.BIT.B5=1;
	else if(x==6)
	PORTB.PODR.BIT.B0=1;
	else if(x==7)
	PORTA.PODR.BIT.B6=1;
	else if(x==8)
	PORTA.PODR.BIT.B7=1;
	else if(x==9)
	PORTD.PODR.BIT.B1=1;
	else if(x==10)
	PORTD.PODR.BIT.B3=1;
	else if(x==11)
	PORTE.PODR.BIT.B3=1;
	else if(x==12)
	PORTE.PODR.BIT.B4=1;
	else if(x==13)
	PORTE.PODR.BIT.B5=1;
	else if(x==14)
	PORTE.PODR.BIT.B0=1;
	else if(x==15)
	PORTD.PODR.BIT.B6=1;
	else if(x==16)
	PORTD.PODR.BIT.B7=1;

	if(x<=8)
	{
		if(y==1)
		PORTB.PODR.BIT.B7=0;
		else if(y==2)
		PORTA.PODR.BIT.B5=0;
		else if(y==3)
		PORT4.PODR.BIT.B7=0;
		else if(y==4)
		PORTB.PODR.BIT.B1=0;
		else if(y==5)
		PORTA.PODR.BIT.B2=0;
		else if(y==6)
		PORTB.PODR.BIT.B6=0;
		else if(y==7)
		PORTA.PODR.BIT.B4=0;
		else if(y==8)
		PORTB.PODR.BIT.B2=0;
	}
	else{
		if(y==1)
		PORTE.PODR.BIT.B7=0;
		else if(y==2)
		PORTD.PODR.BIT.B5=0;
		else if(y==3)
		PORTA.PODR.BIT.B0=0;
		else if(y==4)
		PORTE.PODR.BIT.B1=0;
		else if(y==5)
		PORT4.PODR.BIT.B6=0;
		else if(y==6)
		PORTE.PODR.BIT.B6=0;
		else if(y==7)
		PORTD.PODR.BIT.B2=0;
		else if(y==8)
		PORTE.PODR.BIT.B2=0;
	}

}

void init_dia()
{
    int i,j,k,z;
    int tmp[4][4];
    for(i=0;i<3;i++)
        dia[0][0].space[1][i]=1;
    dia[0][0].space[2][1]=1;     //土形

    for(i=1;i<4;i++)
        dia[1][0].space[i][1]=1;
    dia[1][0].space[1][2]=1;    //L形--1

    for(i=1;i<4;i++)
        dia[2][0].space[i][2]=1;
    dia[2][0].space[1][1]=1;    //L形--2

    for(i=0;i<2;i++)
    {   dia[3][0].space[1][i]=1;
        dia[3][0].space[2][i+1]=1; //Z形--1

        dia[4][0].space[1][i+1]=1;
        dia[4][0].space[2][i]=1;//Z形--2

        dia[5][0].space[1][i+1]=1;
        dia[5][0].space[2][i+1]=1;//田字形
    }
    for(i=0;i<4;i++)
        dia[6][0].space[i][2]=1;//1形
    //////////////////////////////////基礎7個形狀
    for(i=0;i<7;i++)
    {
        for(z=0;z<3;z++)
        {
            for(j=0;j<4;j++)
            {
                for(k=0;k<4;k++)
                {
                  tmp[j][k]=dia[i][z].space[j][k];
                }
            }
            for(j=0;j<4;j++)
            {
                for(k=0;k<4;k++)
                {
                  dia[i][z+1].space[j][k]=tmp[4-k-1][j];
                }
            }
        }
    }
    ///////////////////////////////////旋轉後的21個形狀
}

void start_game(){
	int n,ch,t=0,x=0,y=4,i,j,t1=2000;
	int space_c=0;
	n=rand()%7;
	//n=5;
	draw_dia(n,space_c,x,y);

	int kbb = 0;
	int kba = 0;


    while(1)
	{
    	if(kbhit()==5)
    ICU.IER[8].BIT.IEN2 = 1;
		flag=1;
		//grade=flag;
		draw_dia(n,space_c,x,y);
		//ICU.IER[8].BIT.IEN2 = 1;
		if(t==0){
			t=640;

			darkAll();
			renewFace();
			//kba = 0;
			//kbb = 0;
		}

		while(--t)
		{
			//stop();
			if(t%50==0)
				renewFace();
			kba = kbhit();
			if(kba && (kba!=kbb || kba==3) ){
				break;
			}
			kbb = kba;

			//renewFace();
		}
		if(t==0)
		{
			//LED7_bit_write(6,0);
			if(pd(n,space_c,x+1,y)==1)
			{

				draw_kong(n,space_c,x,y);
				x++;
			}
			else
			{
				for(i=0;i<4;i++)
				{
					for(j=0;j<4;j++)
					{
						if(dia[n][space_c].space[i][j]==1)
						{
							face[x+i][y+j]=2;
							while(xc()){}
						}
					}
				}
				return;
			}
		}
		else
		{
			if(kba && (kba!=kbb || kba==3)){
				switch(kba)
				{
				case 1: if(pd(n,space_c,x,y-1)==1)   //判斷是否可以移動
						   {   draw_kong(n,space_c,x,y);
							   y--;
						   }
						   break;
				case 2: if(pd(n,space_c,x,y+1)==1)
							{   draw_kong(n,space_c,x,y);
								y++;
							}
							break;
				case 3: if(pd(n,space_c,x+1,y)==1)
							{   draw_kong(n,space_c,x,y);
								x++;
							}
							break;
				case 4: if(pd(n,(space_c+1)%4,x+1,y)==1)
							{   draw_kong(n,space_c,x,y);
								space_c=(space_c+1)%4;

							}
							break;
				}
			}
			kbb = kba;
		}



	}
}

void start_game2(){



		int n,ch,t=0,x=1,y=4,i,j,t1=0,count=0,flag,gradeT=0;
		int px=16,py=5;
		face[px][py]=1;
		int c=0;  //第幾個物件
		int space_c=0;


		int d=rand()%3+4; //間隔
		//n=5;
		//renewBarrier(n,x);

		int kbb = 0;
		int kba = 0;
		while(1)
		{
			if(kbhit()==5)
			ICU.IER[8].BIT.IEN2 = 1;
			t1++;
			//grade=flag;
			//if(x%d==0)

			//renewFace();
			randBarrier();




			if(t==0){
				t=640;
				//kba = 0;
				//kbb = 0;
			}
			while(--t)
			{
				if(t%50==0)
					renewFace();
				kba = kbhit();

				if(kba && (kba!=kbb || kba==3) ){
					break;
				}
				kbb = kba;
				//renewFace();
			}
			if(t==0)
			{
				if(count%d==0)
				{
					newBarrier(n);
					count++;
				}
				if(t1>2)
				{
					flag=barrierPlus(py);
					count++;
					t1=0;
					if(flag==2)
					{
						gradeT++;
						if(gradeT%2==1)
						{
							eliminate_flag=1;
								renewFace();
								eliminate_flag=0;
								PORT3.PODR.BIT.B3=1;
						}

						else if(gradeT%2==0)
							grade+=100;
					}

					else if(flag==0)
						main();

				}



			}

			else
			{
				if(kba && (kba!=kbb || kba==3)){
				switch(kba)
				{
					case 2:
							face[px][py]=0;
							if(py+1<=8)
							py++;
							face[px][py]=1;
							break;
					case 1:
							face[px][py]=0;
							if(py-1>=1)
							py--;
							face[px][py]=1;
							break;


				}
				renewFace();
			}
			kbb = kba;

			}
		}



}
void randBarrier()
{
	int i,count=0,r;

	for(i=0;i<8;i++)
	{

		r=rand()%2;
		if(r==0)
			count++;
		barrier[0][i]=r;
		barrier[1][i]=r;
		if(count==0&&i==7)
		{
			barrier[0][i]=0;
			barrier[1][i]=0;
		}

	}

}

void newBarrier()
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<8;j++)
		{
			if(barrier[i][j]==1)
				face[i+1][j+1]=1;
		}
	}
	renewFace();


}
int barrierPlus(int py)
{
	int i,j,c,flag=1;
	for(i=16;i>=1;i--)
	{
		for(j=1;j<=8;j++)
		{
			if(i==15)
			{
				if(face[i+1][j]==1&&face[i][j]==1)
				{
					renewFace();
					flag=0;
				}
			}
			if(i==16)
			{
				if(j!=py&&face[i][j]==1)
				{
					flag=2;
					face[i][j]=0;
				}

			}
			else if(face[i][j]==1)
			{
				face[i][j]=0;
				face[i+1][j]=1;

			}







		}

	}
	renewFace();
	return flag;

}
void draw_dia(int base,int space_c,int x,int y)
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {

            if(dia[base][space_c].space[i][j]==1)
            	face[i+x][j+y]=1;

        }
    }
    renewFace();

}
void draw_kong(int base,int space_c,int x,int y)
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {

            if(dia[base][space_c].space[i][j]==1)
            	face[i+x][j+y]=0;
        }
    }
    renewFace();


}
int pd(int n,int space_c,int x,int y)   //判斷是否到底
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
           if(dia[n][space_c].space[i][j]==0)
               continue;
           else if(x+i>16 || y+j>8||y+j<1||face[x+i][y+j]==2)
               return 0;
        }
    }
    return 1;
}

int xc()
{
	eliminate_flag=0;
	//LED7_bit_write(7,0);
	//grade=flag;
	int i,j,k,sum;
	for(i=16;i>4;i--)
	{
		sum=0;
		for(j=1;j<=8;j++)
		{
			if(face[i][j]==2)
			   sum+=face[i][j];
		}
		sum=sum/2;
		if(sum==0)
			break;
		if(sum==8)
		{


			grade+=100;
			for(j=1;j<=8;j++)
			{
				face[i][j]=0;
				eliminate_flag=1;
				renewFace();
				eliminate_flag=0;
				PORT3.PODR.BIT.B3=1;
			}
			for(j=i;j>1;j--)
			{
				sum=0;
				for(k=1;k<=8;k++)
				{
					sum+=face[j-1][k]+face[j][k];
					face[j][k]=face[j-1][k];
					face[j-1][k]=0;
					renewFace();
				}
				if(sum==0)
					return 1;
			}

		}


	}
	for(i=1;i<=8;i++)
	{

		if(face[1][i]==2)
		{
			//sleep(200);
			main();
			//return 2;
		}
	}
	return 0;
}
int input(){
	return 0;
}

void renewFace()
{
	count_Renew++;
	//grade=count;
	int b[4];
	b[0] = grade%10;
	b[1] = (grade%100)/10;
	b[2] = (grade%1000)/100;
	b[3] = (grade%10000)/1000;

	//LED7_bit_write(8,0);


	//Mi(25);
	int i,j;
	for(i=1;i<=8;i++)
	{
		//grade=3;
		brightRow(i,i+8);

		LED7_bit_write(b[(i-1)%4],(i-1)%4);
		//sleep(1);
		if(eliminate_flag==1)
		{
			play_song(5000);
			PORT3.PODR.BIT.B3=1;

		}

		darkAll();
	}


}

void LED7_pin_init(){
	//7seg
	PORT1.PMR.BIT.B2 = 0;		//a
	PORT1.PMR.BIT.B3 = 0;		//b
	PORT1.PMR.BIT.B4 = 0;		//c
	PORT1.PMR.BIT.B5 = 0;		//d
	PORT2.PMR.BIT.B7 = 0;		//e
	PORT5.PMR.BIT.B4 = 0;		//f
	PORT5.PMR.BIT.B5 = 0;		//g

	PORT1.PDR.BIT.B2 = 1;		//aP12
	PORT1.PDR.BIT.B3 = 1;		//bP13
	PORT1.PDR.BIT.B4 = 1;		//cP14
	PORT1.PDR.BIT.B5 = 1;		//dP15
	PORT2.PDR.BIT.B7= 1;		//eP32
	PORT5.PDR.BIT.B4 = 1;		//fP54
	PORT5.PDR.BIT.B5 = 1;		//gP55

	//4bit
	PORTC.PMR.BIT.B0 = 0;		//test b0(right)
	PORTC.PMR.BIT.B1 = 0;		//test b1
	PORTC.PMR.BIT.B2 = 0;		//test b2
	PORTC.PMR.BIT.B3 = 0;		//test b3(left)

	PORTC.PDR.BIT.B0 = 1;		//test b0 PC0
	PORTC.PDR.BIT.B1 = 1;		//test b1 PC1
	PORTC.PDR.BIT.B2 = 1;		//test b2 PC2
	PORTC.PDR.BIT.B3 = 1;		//test b3 PC3

}
void LED7_bit_write(number,pos){

	if(pos == 0){
		PORTC.PODR.BIT.B0 = 1;
		PORTC.PODR.BIT.B1 = 0;
		PORTC.PODR.BIT.B2 = 0;
		PORTC.PODR.BIT.B3 = 0;
	}else if(pos == 1){
		PORTC.PODR.BIT.B0 = 0;
		PORTC.PODR.BIT.B1 = 1;
		PORTC.PODR.BIT.B2 = 0;
		PORTC.PODR.BIT.B3 = 0;
	}else if(pos == 2){
		PORTC.PODR.BIT.B0 = 0;
		PORTC.PODR.BIT.B1 = 0;
		PORTC.PODR.BIT.B2 = 1;
		PORTC.PODR.BIT.B3 = 0;
	}else if(pos == 3){
		PORTC.PODR.BIT.B0 = 0;
		PORTC.PODR.BIT.B1 = 0;
		PORTC.PODR.BIT.B2 = 0;
		PORTC.PODR.BIT.B3 = 1;
	}

	PORT1.PODR.BIT.B2 = 1-LED7pinState[number][0];
	PORT1.PODR.BIT.B3 = 1-LED7pinState[number][1];
	PORT1.PODR.BIT.B4 = 1-LED7pinState[number][2];
	PORT1.PODR.BIT.B5 = 1-LED7pinState[number][3];
	PORT2.PODR.BIT.B7 = 1-LED7pinState[number][4];
	PORT5.PODR.BIT.B4 = 1-LED7pinState[number][5];
	PORT5.PODR.BIT.B5 = 1-LED7pinState[number][6];
}

void initKbhit()
{


	PORT4.PMR.BIT.B1 = 0;
	PORT4.PMR.BIT.B2 = 0;
	PORT4.PMR.BIT.B3 = 0;
	PORT4.PMR.BIT.B4 = 0;
	PORT3.PMR.BIT.B2 = 0;

	PORT4.PDR.BIT.B1 = 0;
	PORT4.PDR.BIT.B2 = 0;
	PORT4.PDR.BIT.B3 = 0;	//down
	PORT4.PDR.BIT.B4 = 0;	//up
	PORT3.PDR.BIT.B2 = 0;	//stop


}
/*
  	  42   41   43
  	       44

 */

int kbhit(){
	if(PORT4.PIDR.BIT.B1)
		return 1;
	if(PORT4.PIDR.BIT.B2)  //右
		return 2;
	if(PORT4.PIDR.BIT.B3)  //下
		return 3;
	if(PORT4.PIDR.BIT.B4)  //上
		return 4;
	if(PORT3.PIDR.BIT.B2)
		return 5;

	return 0;
}

void stop(){
	if(PORT4.PIDR.BIT.B0)  //
		PORT1.PIDR.BIT.B7=0;
	if(!PORT4.PIDR.BIT.B0)  //
		PORT1.PIDR.BIT.B7=1;
	return;
}





#ifdef __cplusplus
void abort(void)
{

}
#endif




void in_face(int a){
	if(a==0){
for(int i=0;i<17;i++){
			for(int j=0;j<9;j++){
				face[i][j] = 0;
			}
		}
	}
	if(a==1){
		for(int i=0;i<17;i++){
			for(int j=0;j<9;j++){
				face[i][j] = show_1[i][j];
			}
		}
	}
	if(a==2){
		for(int i=0;i<17;i++){
			for(int j=0;j<9;j++){
				face[i][j] = show_2[i][j];
			}
		}
	}
	if(a==3){
		for(int i=0;i<17;i++){
			for(int j=0;j<9;j++){
				face[i][j] = show_3[i][j];
			}
		}
	}
	if(a==4){
			for(int i=0;i<17;i++){
				for(int j=0;j<9;j++){
					face[i][j] = pause[i][j];
				}
			}
		}
	if(a==5){
				for(int i=0;i<17;i++){
					for(int j=0;j<9;j++){
						TEMP[i][j] = face[i][j];
					}
				}
			}
	if(a==6){
					for(int i=0;i<17;i++){
						for(int j=0;j<9;j++){
							face[i][j] = TEMP[i][j];
						}
					}
				}
	}

void tone(int b,int a){
	if(b==0) delay(a);
	if(b==1) Do(a);
	if(b==2) Re(a);
	if(b==3) Mi(a);
	if(b==4) Fa(a);
	if(b==5) So(a);
	if(b==6) La(a);
	if(b==7) Si(a);
}

void play_song(int a){
	MTU2.TCNT = 0;
	end_flag = 0;
	while(1){
		if(m1>=song_long) m1=0;
		tone(song[m1],a-m2);
		if(end_flag) return;
		m2=0;
		m3=0;
		m1++;
	}
}





int begin_state(){
	return begin_state_1();

}

int begin_state_1(){
	SELECT = 0;
	int i=2;
	int ch;
	int t=640;
	while(1){
	if(t==0) t=640;
	while(--t){
		ch = kbhit();
		//grade=ch;
		if(ch==3) return begin_state_2();
		if(ch==5) return 1;
		if(SELECT==2) return 1;

		if(t%50==0 && i==1){
			in_face(2);
			renewFace();
			i=2;
		}
		else if(t%50==0 && i==2){
			in_face(3);
			renewFace();
			i=1;
		}
	}
}
}


int begin_state_2(){
	SELECT = 0;
	int i=2;
	int ch;
	int t=640;
	while(1){
		if(t==0) t=640;
	while(--t){
		ch = kbhit();
		//grade=ch;
		if(ch==4) return begin_state_1();
		if(ch==5) return 2;
		if(SELECT==2) return 2;
		if(t%50==0 && i==1){
			in_face(1);
			renewFace();
			i=2;
		}
		else if(t%50==0 && i==2){
			in_face(3);
			renewFace();
			i=1;
		}
	}
}
}
int select(){
	return SELECT;
}
void setSelect(int n)
{
SELECT=n;
}
void setGrade(){
	grade=0;
}
void eliminate(int a){
	Mi(a);
	So(a);
	La1(a);
	PORT3.PODR.BIT.B3=1;
}
/*
void Mi(int a)
{   int timer=0;
	MTU1.TGRB=124;
	while(timer<a){
		if(MTU1.TCNT>=62)
			PORT3.PODR.BIT.B3=1;
		else
			PORT3.PODR.BIT.B3=0;

	PORT3.PODR.BIT.B3=1;}}
void Fa(int a)
{    int timer=0;
	MTU1.TGRB=94;
	while(timer<a){

	 timer++;
	if(MTU1.TCNT>=47)
		PORT3.PODR.BIT.B3=1;
	else
		PORT3.PODR.BIT.B3=0;
}
	PORT3.PODR.BIT.B3=1;
}
void So(int a)
{    int timer=0;
	MTU1.TGRB=84;
	while(timer<a){

	 timer++;
	if(MTU1.TCNT>=42)
		PORT3.PODR.BIT.B3=1;
	else
		PORT3.PODR.BIT.B3=0;
}PORT3.PODR.BIT.B3=1;}
*/
void La1(int a)
{    int timer=0;
	MTU1.TGRB=74;
	while(timer<a){

	 timer++;
	if(MTU1.TCNT>=37)
		PORT3.PODR.BIT.B3=1;
	else
		PORT3.PODR.BIT.B3=0;
}
	PORT3.PODR.BIT.B3=1;}

/*
	void Re(int a)
	{    int timer=0;
		 MTU1.TGRB=112;
		 while(timer<a){
		 timer++;
		if(MTU1.TCNT>=56)
			PORT3.PODR.BIT.B3=1;
		else
			PORT3.PODR.BIT.B3=0;
	}PORT3.PODR.BIT.B3=1;}*/
/*
		void Do(int a)
			{    int timer=0;
				MTU1.TGRB=124;
				while(timer<a){

				 timer++;
				if(MTU1.TCNT>=62)
					PORT3.PODR.BIT.B3=1;
				else
					PORT3.PODR.BIT.B3=0;
			}PORT3.PODR.BIT.B3=1;}
		*//*
				void Si(int a)
							{    int timer=0;
								 MTU1.TGRB=132;
								while(timer<a){
								 timer++;
								if(MTU1.TCNT>=66)
									PORT3.PODR.BIT.B3=1;
								else
									PORT3.PODR.BIT.B3=0;
							}PORT3.PODR.BIT.B3=1;}
				*//*
			void La(int a)
											{    int timer=0;
												 MTU1.TGRB=148;
												while(timer<a){
												 timer++;
												if(MTU1.TCNT>=74)
													PORT3.PODR.BIT.B3=1;
												else
													PORT3.PODR.BIT.B3=0;
											}PORT3.PODR.BIT.B3=1;}
			*/

void Do(int a){
MTU1.TCNT=0;
int timer = 0;
while(timer<a){
MTU1.TGRB=500;
timer++;

if(MTU1.TCNT>=250)
			PORT3.PODR.BIT.B3=1;
else
			PORT3.PODR.BIT.B3=0;
		if(MTU2.TCNT>=play_time) {
end_flag = 1;
break;
}
}

}


void Re(int a){
	MTU1.TCNT=0;
	int timer = 0;
while(timer<a){
MTU1.TGRB=446;
timer++;

if(MTU1.TCNT>=223)
			PORT3.PODR.BIT.B3=1;
else
			PORT3.PODR.BIT.B3=0;
		if(MTU2.TCNT>=play_time) {
end_flag = 1;
break;
}
}

}




void Mi(int a){
	MTU1.TCNT=0;
	int timer = 0;
while(timer<a){
MTU1.TGRB=397;
timer++;

if(MTU1.TCNT>=199)
			PORT3.PODR.BIT.B3=1;
else
			PORT3.PODR.BIT.B3=0;
		if(MTU2.TCNT>=play_time) {
end_flag = 1;
break;
}
}

}


void Fa(int a){
	MTU1.TCNT=0;
	int timer = 0;
while(timer<a){
MTU1.TGRB=187;
timer++;

if(MTU1.TCNT>=94)
			PORT3.PODR.BIT.B3=1;
else
			PORT3.PODR.BIT.B3=0;
		if(MTU2.TCNT>=play_time) {
end_flag = 1;
break;
}
}

}



void So(int a){
	MTU1.TCNT=0;
	int timer = 0;
while(timer<a){
MTU1.TGRB=175;
timer++;

if(MTU1.TCNT>=88)
			PORT3.PODR.BIT.B3=1;
else
			PORT3.PODR.BIT.B3=0;
		if(MTU2.TCNT>=play_time) {
end_flag = 1;
break;
}
}

}

void La(int a){
	MTU1.TCNT=0;
	int timer = 0;
while(timer<a){
MTU1.TGRB=328;

m3 = MTU1.TCNT;
if(MTU1.TCNT>=163)
			PORT3.PODR.BIT.B3=1;
else
			PORT3.PODR.BIT.B3=0;
		if(MTU2.TCNT>=play_time) {
end_flag = 1;
break;
}
}

}





void delay(int i){
	int c=0;
	while(c!=i)
	{
		c++;

	}
}

void Si(int a){
	MTU1.TCNT=0;
	int timer = 0;
while(timer<a){
MTU1.TGRB=265;
timer++;

		if(MTU1.TCNT>=133)
			PORT3.PODR.BIT.B3=1;
		else
			PORT3.PODR.BIT.B3=0;
		if(MTU2.TCNT>=play_time) {
end_flag = 1;
break;
}
}

}











