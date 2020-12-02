#include <iostream>
#include <fstream>
//#include <cstdlib>
using namespace std;
int main()
{
int a[5][4]={0};    
int  i, j;
 ifstream  infile; 
 ofstream  outfile;

 infile.open("cj1.txt"); 
 
 //从文件读入数据 
 for(i=0; i<4; i++)      // i 控制行数 
    {    
	for(j=0; j<3; j++) // j 控制列数 
        infile >> a[i][j];   //  文件数据读入到内存a[i][j] 
     } 
for(i=0; i<4; i++)      /*  i 控制行数 */
    {    for(j=0; j<3; j++) /* j 控制列数 */
                a [i][3] +=  a[i][j]; 
		        a [i][3]  /= 3;     
     } 
     
     
 for(i=0; i<3; i++)      /*  i 控制行数 */
{    for(j=0; j<4; j++) /* j 控制列数 */
            a [4][i] +=  a[i][j]; 
	        a [4][i]  /= 4;     
 } 
 
 
 //在显示屏上输出该成绩表 
/* for(i=0; i<5; i++)      
    {    for(j=0; j<4; j++) 
              cout << a[i][j]<<" ";  
		cout<<endl;   
     }
 */ 
 
 //将成绩表输出到文件 
 outfile.open("cj2.txt");
 for(i=0; i<5; i++)      
    {    for(j=0; j<4; j++) 
              outfile << a[i][j]<<" ";  
		outfile<<endl;   
     }
 

infile.close();
outfile.close(); 
 
 


 for(i=0; i<5; i++)      
    { if(i==0)  
	 {  cout<<"          课程1    课程2     课程3   个人平均分";
         	cout<<endl;    }
    if(i==1) 
   { cout<<"学生1      ";
     for(j=0; j<4; j++)   cout<<a[i][j]<<"       ";
     cout<<endl;
	}
     if(i==2) 
   { cout<<"学生2      ";
     for(j=0; j<4; j++)   cout<<a[i][j]<<"       ";
     cout<<endl;
	}
	 if(i==3) 
   { cout<<"学生3      ";
     for(j=0; j<4; j++)   cout<<a[i][j]<<"       ";
     cout<<endl;
	}
	 if(i==4) 
   { cout<<"课程平均分 ";
     for(j=0; j<4; j++)   cout<<a[i][j]<<"       ";
     cout<<endl;
	}
	 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  return 0;
}

