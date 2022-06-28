#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

 void main()
  {
   clrscr();
    char a,b,c,d,e,f,g,h,i,j,s;
    long double ctr=0;
     cout<<"\n-----------------------------------Welcome to KBC-------------------------------"<<endl;
     cout<<"\n \t\t\t ***** Kaun Banega Crorepati *****";
     cout<<"\nGeneral Instruction..."<<endl;
     cout<<"PLEASE READ"<<endl;
     cout<<"* You will be asked 5 MCQ Questions in every level"<<endl;
     cout<<"* Each with Four Options (a,b,c,d)"<<endl;
     cout<<"* You Have to chose one of then by entering a,b,c or d"<<endl;
     cout<<"* No life line is available"<<endl;
     cout<<"* to clear the level you should answer all the questions correctly"<<endl;
     cout<<"* Total 3 lavel are there"<<endl;
     cout<<"* You can PRESS 'e' any time TO EXIT FROM THE GAME"<<endl;
     cout<<"* Each Question Will Contain 10,000 Rs in lavel 1"<<endl;
     cout<<"* 20,000 in lavel 2"<<endl;
     cout<<"* 30,000 in lavel 3"<<endl;
     cout<<"\n\n PRESS 's' TO START THE GAME"<<endl;
     cin>>s;
     if(s=='s');
     {
       cout<<"\n\n-------------------------------------Level 1---------------------------------"<<endl;
     //Q.1 => answer d.........
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n Q.1  January 15 is celebrated as the"<<endl;

       cout<<"(a) Republic Day"<<endl;
       cout<<"(b) Ugadhi"<<endl;
       cout<<"(c) Teachers' Day"<<endl;
       cout<<"(d) Army Day"<<endl;
	cin>>a;

     switch(a)
      {
      clrscr();
       case'd':cout<<"      ****************           "<<endl;
	       cout<<"**       Right Answer   **"<<endl;
	       cout<<"**       10000 Rs       **"<<endl;
	       cout<<"      ****************           "<<endl;
	       ctr=ctr+10000;
	 break;

       case'b':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'c':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'a':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'e':exit(0);
	 break;

       default:cout<<"You Have Entered Wrong Choice"<<endl;
      }

	//Q.2 => answer b.........
     cout<<"\n Q.2  The ratio of width of our National Flag to its length is"<<endl;

      cout<<"(a) 3:5"<<endl;
      cout<<"(b) 2:3"<<endl;
      cout<<"(c) 2:4"<<endl;
      cout<<"(d) 3:4"<<endl;
       cin>>b;

    switch(b)
      {
      clrscr();

       case'a':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'b':cout<<"       **************** 	   "<<endl;
	       cout<<"**       Right Answer     **"<<endl;
	       cout<<"**        10000 Rs        **"<<endl;
	       cout<<"       **************** 	   "<<endl;
	       ctr=ctr+10000;
	 break;

       case'c':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'd':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'e':exit(0);
	 break;

       default:cout<<"You Have Entered Wrong Choice"<<endl;
      }

       // Q.3 => answer b........

       cout<<"\n Q.3  'Dandia' is popular dance of"<<endl;
	cout<<"(a) Punjab"<<endl;
	cout<<"(b) Gujarat"<<endl;
	cout<<"(c) Tamil Nadu"<<endl;
	cout<<"(d) Maharashtra"<<endl;
	 cin>>c;

     switch(c)
      {
      clrscr();

       case'a':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'b':cout<<"      **************** 	   "<<endl;
	       cout<<"**       Right Answer   **"<<endl;
	       cout<<"**        10000 Rs      **"<<endl;
	       cout<<"      **************** 	   "<<endl;
	       ctr=ctr+10000;
	 break;

       case'c':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'd':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'e':exit(0);
	 break;

       default:cout<<"You Have Entered Wrong Choice"<<endl;
      }

       // Q.4 => answer a........

       cout<<"\n Q.4  Mohiniattam dance from developed originally in which state?"<<endl;
	cout<<"(a) Tamil Nadu"<<endl;
	cout<<"(b) Orissa"<<endl;
	cout<<"(c) Kerala"<<endl;
	cout<<"(d) Karnataka"<<endl;
	 cin>>d;

     switch(d)
      {
      clrscr();

       case'a':cout<<"      **************** 	   "<<endl;
	       cout<<"**       Right Answer   **"<<endl;
	       cout<<"**        10000 Rs      **"<<endl;
	       cout<<"      **************** 	   "<<endl;
	       ctr=ctr+10000;
	 break;

       case'b':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'c':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'd':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'e':exit(0);
	 break;

       default:cout<<"You Have Entered Wrong Choice"<<endl;
      }

      // Q.5 => answer c.......

       cout<<"\n Q.5  Ozone hole refers to"<<endl;
	cout<<"(a) hole in ozene layer"<<endl;
	cout<<"(b) decrease in the ozene layer in troposphere"<<endl;
	cout<<"(c) decrease in thickness of ozone layer in stratosphere"<<endl;
	cout<<"(d) increase in the thikness of ozone layer in troposhere"<<endl;
	 cin>>e;

     switch(e)
      {
      clrscr();

       case'a':cout<<"Its a Wrong Answre"<<endl;
	 break;

       case'b':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'c':cout<<"      **************** 	   "<<endl;
	       cout<<"**       Right Answer    **"<<endl;
	       cout<<"**        10000 Rs       **"<<endl;
	       cout<<"      **************** 	   "<<endl;
	       ctr=ctr+10000;
	 break;

       case'd':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'e':exit(0);
	 break;

       default:cout<<"You Have Entered Wrong Choice"<<endl;
      }

	 // Q.6 => answer a........

       cout<<"\n Q.6  Which of the following dances is a solo dance?"<<endl;
	cout<<"(a) Ottan Thullai"<<endl;
	cout<<"(b) Kuchipudi"<<endl;
	cout<<"(c) Yakshagana"<<endl;
	cout<<"(d) Odissi"<<endl;
	 cin>>f;

     switch(f)
      {
      clrscr();

       case'b':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'a':cout<<"      **************** 	   "<<endl;
	       cout<<"**       Right Answer     **"<<endl;
	       cout<<"**        10000 Rs        **"<<endl;
	       cout<<"      **************** 	   "<<endl;
	       ctr=ctr+10000;
	 break;

       case'c':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'd':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'e':exit(0);
	 break;

       default:cout<<"You Have Entered Wrong Choice"<<endl;
      }

       // Q.7 => answer a.......

       cout<<"\n Q.7  The National Anthem was first sung in the year"<<endl;
	cout<<"(a) 1911"<<endl;
	cout<<"(b) 1913"<<endl;
	cout<<"(c) 1936"<<endl;
	cout<<"(d) 1935"<<endl;
	 cin>>g;

     switch(g)
      {
      clrscr();

       case'a':cout<<"      **************** 	   "<<endl;
	       cout<<"**       Right Answer     **"<<endl;
	       cout<<"**        10000 Rs        **"<<endl;
	       cout<<"      **************** 	   "<<endl;
	       ctr=ctr+10000;
	 break;

       case'b':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'c':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'd':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'e':exit(0);
	 break;

       default:cout<<"You Have Entered Wrong Choice"<<endl;
      }

      // Q.8 => answer b.....

       cout<<"\n Q.8  The National Song of India was composed by"<<endl;
	cout<<"(a) Rabindranath Tagore"<<endl;
	cout<<"(b) Bankim Chandra Chatterji"<<endl;
	cout<<"(c) Iqbal"<<endl;
	cout<<"(d) Jai Shankar Prasad"<<endl;
	 cin>>h;

     switch(h)
      {
      clrscr();

       case'a':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'b':cout<<"      **************** 	    "<<endl;
	       cout<<"**       Right Answer     **"<<endl;
	       cout<<"**        10000 Rs        **"<<endl;
	       cout<<"      **************** 	    "<<endl;
	       ctr=ctr+10000;
	 break;

       case'c':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'd':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'e':exit(0);
	 break;

       default:cout<<"You Have Entered Wrong Choice"<<endl;
      }

      // Q.9 => answer a.........

       cout<<"\n Q.9  Pollination is pollen from anther to stigma"<<endl;
	cout<<"(a) transfer of pollen from anther to stigma"<<endl;
	cout<<"(b) germination of pollen grains"<<endl;
	cout<<"(c) growth of pollen tube in ovule"<<endl;
	cout<<"(d) visiting flowers by insects"<<endl;
	 cin>>i;

     switch(i)
      {
      clrscr();

       case'a':cout<<"      **************** 	  "<<endl;
	       cout<<"**      Right Answer     **"<<endl;
	       cout<<"**       10000 Rs        **"<<endl;
	       cout<<"      **************** 	   "<<endl;
	       ctr=ctr+10000;
	 break;

       case'b':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'c':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'd':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'e':exit(0);
	 break;

       default:cout<<"You Have Entered Wrong Choice"<<endl;
      }

      // Q.10 => answer b.........

       cout<<"\n Q.10  Movement of cell against concentration gradient is called"<<endl;
	cout<<"(a) osmosis"<<endl;
	cout<<"(b) active transport"<<endl;
	cout<<"(c) diffusion"<<endl;
	cout<<"(d) Passive transport"<<endl;
	 cin>>j;

     switch(j)
      {
      clrscr();

       case'a':cout<<"Its a Wrong Answer";
	 break;

       case'b':cout<<"      **************** 	   "<<endl;
	       cout<<"**      Right Answer     **"<<endl;
	       cout<<"**       10000 Rs        **"<<endl;
	       cout<<"      **************** 	   "<<endl;
	       ctr=ctr+10000;
	 break;

       case'c':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'd':cout<<"Its a Wrong Answer"<<endl;
	 break;

       case'e':exit(0);
	 break;

       default:cout<<"You Have Entered Wrong Choice"<<endl;
      }
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\           YOUR RESULT "<<endl;
      cout<<"\n********************************************************************************"<<endl;
      cout<<"\n\t\t               You Have won"<<" "<<ctr<<" "<<"RS"<<endl;
      cout<<"\n********************************************************************************\n\n\n\n\n\n\n\n\n"<<endl;
 getch();
}
}
