#include <iostream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;

void jiemian()
{	cout<<"**********************************************"<<endl;
	cout<<"*       ��ӭʹ��ѧ���ɼ�����ϵͳ v1.3        *"<<endl;
	cout<<"*     ��С��   �����2003�� 2020.10.29       *"<<endl;
	cout<<"*     1������4��ͬѧ�Ĵ��źͳɼ�             *"<<endl;
	cout<<"*     2����ʾ4��ͬѧ�Ĵ��źͳɼ��б�         *"<<endl;
    cout<<"*     3����4��ƽ����                         *"<<endl;
    cout<<"*     4����4���ܷ�                           *"<<endl;
    cout<<"*     5����ѯĳͬѧ�ķ���                    *"<<endl;
    cout<<"*     6��ͳ�Ƽ�����                          *"<<endl;
    cout<<"*     7���˳�                                *"<<endl;
    cout<<"*     8������ۼ��� �������˵�               *"<<endl;
    cout<<"*     ������(1-8)ѡ��                      *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"**********************************************"<<endl;
    cout<<"������Ҫִ�еĲ������:";
}














int main() {
	int a,A,B,C,D,e;
	double n=0;
	char q1,q2,q3,q4,s;
	#include "password.cpp"
    jiemian();
    cin>>e;
    if(e==1) {
    	cout<<"��������4��ͬѧ�Ĵ��źͳɼ�:";
    	cin>>q1>>A>>q2>>B>>q3>>C>>q4>>D;
    	cout<<"������Ҫִ�еĲ������:";
	}
    else {
    	cout<<"��������4��ͬѧ�Ĵ��źͳɼ�:";
    	cin>>q1>>A>>q2>>B>>q3>>C>>q4>>D;
    	cout<<"������Ҫִ�еĲ������:";
	}
	
    while(cin>>a){
    	switch (a){
    	    case 2:{
    	    	#include "2.cpp"  	    	
				break;
			} 
            case 3:{
            	#include "3.cpp"          	
				break;
			} 
            case 4:{
            	#include "4.cpp"           	
				break;
			}	
            case 5:{
        	    #include "5.cpp"       	  
				break;}
            case 6:{
		        #include "6.cpp"
				break;}
            case 7: return 0;
            case 8: {
				system("cls");
    	    	jiemian();
			    break; }
	    }
	}
	system("pause");
    return 0;
}
