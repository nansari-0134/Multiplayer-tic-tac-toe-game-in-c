#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int a[3][3],ply;

void main()
{
     instruct();
     ply=1;
     printover();
     getch();

}

int input()
 {
   int in;
   in = getch() - 48;
  // printf("%d ",in);
   if(in == 1 && a[0][0]==0)
      {
	a[0][0] = ply;
      }
      else if(in == 2 && a[0][1]==0)
      {
	a[0][1] = ply;
      }
      else if(in == 3 && a[0][2]==0)
      {
	a[0][2] = ply;
      }
      else if(in == 4 && a[1][0]==0)
      {
	a[1][0] = ply;
      }
      else if(in == 5 && a[1][1]==0)
      {
	a[1][1] = ply;
      }
      else if(in == 6 && a[1][2] ==0)
      {
	a[1][2] = ply;
      }
      else if(in == 7 && a[2][0] == 0)
      {
	a[2][0] = ply;
      }
      else if(in == 8 && a[2][1] ==0)
      {
	a[2][1] = ply;
      }
      else if(in == 9 && a[2][2] ==0)
      {
	a[2][2] = ply;
      }
      else
       {
	return input();
       }
   return(in);
  }

int check()
 {
   /*int q,u;
   for(q=0;q<3;q++)
   {
    for(u=0;u<3;u++)
    {
      printf("%d ",a[q][u]);
    }
   }
   printf("\n");*/
   setcolor(4*(ply-1)+1);
   if(ply==1)
   {
       //1
     if(a[0][0]==ply && a[1][1]== ply && a[2][2]==ply)
      {
	outtextxy(400,400,"Player 1 Won");
	return(1);
      }
      //2
      else if(a[0][2]==ply && a[1][1]==ply && a[2][0]==ply)
      {
	outtextxy(400,400,"Player 1 Won");
	return(1);
      }
      //3
      else if(a[0][0]==ply && a[0][1]==ply && a[0][2]==ply)
      {
	outtextxy(400,400,"Player 1 Won");
	return(1);
      }
      //4
      else if(a[1][0]==ply && a[1][1]==ply && a[1][2]==ply)
      {
	outtextxy(400,400,"Player 1 Won");
	return(1);
      }
      //5
      else if(a[2][0]==ply && a[2][1]==ply && a[2][2]==ply)
      {
	outtextxy(400,400,"Player 1 Won");
	return(1);
      }
      //6
      else if(a[0][0]==ply && a[1][0]==ply && a[2][0]==ply)
      {
	outtextxy(400,400,"Player 1 Won");
	return(1);
      }
      //7
      else if(a[0][1]==ply && a[1][1]==ply && a[2][1]==ply)
      {
	outtextxy(400,400,"Player 1 Won");
	return(1);
      }
      //8
      else if(a[0][2]==ply && a[1][2]==ply && a[2][2]==ply)
      {
	outtextxy(400,400,"Player 1 Won");
	return(1);
      }
      else
      {
       return(0);
      }
   }
   else
   {
       //1
     if(a[0][0]==ply && a[1][1]== ply && a[2][2]==ply)
      {
	outtextxy(400,400,"Player 2 Won");
	return(1);
      }
      //2
      else if(a[0][2]==ply && a[1][1]==ply && a[2][0]==ply)
      {
	outtextxy(400,400,"Player 2 Won");
	return(1);
      }
      //3
      else if(a[0][0]==ply && a[0][1]==ply && a[0][2]==ply)
      {
	outtextxy(400,400,"Player 2 Won");
	return(1);
      }
      //4
      else if(a[1][0]==ply && a[1][1]==ply && a[1][2]==ply)
      {
	outtextxy(400,400,"Player 2 Won");
	return(1);
      }
      //5
      else if(a[2][0]==ply && a[2][1]==ply && a[2][2]==ply)
      {
	outtextxy(400,400,"Player 2 Won");
	return(1);
      }
      //6
      else if(a[0][0]==ply && a[1][0]==ply && a[2][0]==ply)
      {
	outtextxy(400,400,"Player 2 Won");
	return(1);
      }
      //7
      else if(a[0][1]==ply && a[1][1]==ply && a[2][1]==ply)
      {
	outtextxy(400,400,"Player 2 Won");
	return(1);
      }
      //8
      else if(a[0][2]==ply && a[1][2]==ply && a[2][2]==ply)
      {
	outtextxy(400,400,"Player 2 Won");
	return(1);
      }
      else
      {
       return(0);
      }
   }
}

tick(int *gdriver,int *gmode,int i,int k)
  {
   if(i==1)
    {
     if(k==1)
      {
       setcolor(1);
       outtextxy(80,230,"0");
      }
     else
      {
       setcolor(5);
       outtextxy(80,230,"X");
      }
    }
    else if(i==2)
    {
     if(k==1)
      {
       setcolor(1);
       outtextxy(180,230,"0");
      }
     else
      {
       setcolor(5);
       outtextxy(180,230,"X");
      }
    }
    else if(i==3)
    {
     if(k==1)
      {
       setcolor(1);
       outtextxy(280,230,"0");
      }
     else
      {
       setcolor(5);
       outtextxy(280,230,"X");
      }
    }
    else if(i==4)
    {
     if(k==1)
      {
       setcolor(1);
       outtextxy(80,340,"0");
      }
     else
      {
       setcolor(5);
       outtextxy(80,340,"X");
      }
    }

    else if(i==5)
    {
     if(k==1)
      {
       setcolor(1);
       outtextxy(180,340,"0");
      }
     else
      {
       setcolor(5);
       outtextxy(180,340,"X");
      }
    }
    else if(i==6)
    {
     if(k==1)
      {
       setcolor(1);
       outtextxy(280,340,"0");
      }
     else
      {
       setcolor(5);
       outtextxy(280,340,"X");
      }
    }
    else if(i==7)
    {
     if(k==1)
      {
       setcolor(1);
       outtextxy(80,430,"0");
      }
     else
      {
       setcolor(5);
       outtextxy(80,430,"X");
      }
    }
    else if(i==8)
    {
     if(k==1)
      {
       setcolor(1);
       outtextxy(180,430,"0");
      }
     else
      {
       setcolor(5);
       outtextxy(180,430,"X");
      }
    }
    else if(i==9)
    {
     if(k==1)
      {
       setcolor(1);
       outtextxy(280,430,"0");
      }
     else
      {
       setcolor(5);
       outtextxy(280,430,"X");
      }
    }
    if(ply == 1)
    {
     ply=2;
    }
   else
    {
     ply=1;
    }
  }

printover()
 {
   int gdriver = DETECT,gmode,i,j;
   initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
   setcolor(2);
   settextstyle(1,0,5);
   outtextxy(120,0,"Tic TAC TOE GAME");
   setcolor(3);
   settextstyle(7,0,3);
   outtextxy(350,80,"By Nizam Ansari");
   setcolor(15);
   line(150,200,150,500);
   line(250,200,250,500);
   line(50,300,350,300);
   line(50,400,350,400);
   setcolor(1);
   settextstyle(8,0,2);
   outtextxy(400,400,"");
   a[0][0] = 0;
   a[0][1] = 0;
   a[0][2] = 0;
   a[1][0] = 0;
   a[1][1] = 0;
   a[1][2] = 0;
   a[2][0] = 0;
   a[2][1] = 0;
   a[2][2] = 0;
   for(i=0;i<9;i++)
   {
    int n;
    j = input();
    n = check();
    tick(&gdriver,&gmode,j,ply);
     if(n==1)
    {
      return;
    }
   }
}
instruct()
 {
   int gdriver = DETECT,gmode;
   initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
   //set graphics
   setcolor(3);
   settextstyle(8,0,5);
   //write on screen
   outtextxy(40,0,"WELCOME TO TIC TAC TOE");
   outtextxy(250,50,"Game");
   settextstyle(7,0,4);
   setcolor(15);
   outtextxy(300,100," -By Nizam Ansari");
   //color change for #
   setcolor(6);
   settextstyle(8,0,1);
   outtextxy(0,140,"Numbers assigned to position :");
   setcolor(13);
   line(250,200,250,500);
   line(350,200,350,500);
   line(150,300,450,300);
   line(150,400,450,400);
   setcolor(14);
   outtextxy(180,230,"1");
   outtextxy(280,230,"2");
   outtextxy(380,230,"3");
   outtextxy(180,340,"4");
   outtextxy(280,340,"5");
   outtextxy(380,340,"6");
   outtextxy(180,430,"7");
   outtextxy(280,430,"8");
   outtextxy(380,430,"9");
   getch();
   clrscr();
 }
