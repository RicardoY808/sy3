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
 
 //���ļ��������� 
 for(i=0; i<4; i++)      // i �������� 
    {    
	for(j=0; j<3; j++) // j �������� 
        infile >> a[i][j];   //  �ļ����ݶ��뵽�ڴ�a[i][j] 
     } 
for(i=0; i<4; i++)      /*  i �������� */
    {    for(j=0; j<3; j++) /* j �������� */
                a [i][3] +=  a[i][j]; 
		        a [i][3]  /= 3;     
     } 
     
     
 for(i=0; i<3; i++)      /*  i �������� */
{    for(j=0; j<4; j++) /* j �������� */
            a [4][i] +=  a[i][j]; 
	        a [4][i]  /= 4;     
 } 
 
 
 //����ʾ��������óɼ��� 
/* for(i=0; i<5; i++)      
    {    for(j=0; j<4; j++) 
              cout << a[i][j]<<" ";  
		cout<<endl;   
     }
 */ 
 
 //���ɼ���������ļ� 
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
	 {  cout<<"          �γ�1    �γ�2     �γ�3   ����ƽ����";
         	cout<<endl;    }
    if(i==1) 
   { cout<<"ѧ��1      ";
     for(j=0; j<4; j++)   cout<<a[i][j]<<"       ";
     cout<<endl;
	}
     if(i==2) 
   { cout<<"ѧ��2      ";
     for(j=0; j<4; j++)   cout<<a[i][j]<<"       ";
     cout<<endl;
	}
	 if(i==3) 
   { cout<<"ѧ��3      ";
     for(j=0; j<4; j++)   cout<<a[i][j]<<"       ";
     cout<<endl;
	}
	 if(i==4) 
   { cout<<"�γ�ƽ���� ";
     for(j=0; j<4; j++)   cout<<a[i][j]<<"       ";
     cout<<endl;
	}
	 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  return 0;
}

