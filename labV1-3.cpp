#include <iostream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;

void jiemian()
{	cout<<"**********************************************"<<endl;
	cout<<"*       欢迎使用学生成绩管理系统 v1.3        *"<<endl;
	cout<<"*     王小明   计算机2003班 2020.10.29       *"<<endl;
	cout<<"*     1、输入4个同学的代号和成绩             *"<<endl;
	cout<<"*     2、显示4个同学的代号和成绩列表         *"<<endl;
    cout<<"*     3、求4人平均分                         *"<<endl;
    cout<<"*     4、求4人总分                           *"<<endl;
    cout<<"*     5、查询某同学的分数                    *"<<endl;
    cout<<"*     6、统计及格率                          *"<<endl;
    cout<<"*     7、退出                                *"<<endl;
    cout<<"*     8、清理痕迹， 返回主菜单               *"<<endl;
    cout<<"*     请输入(1-8)选择：                      *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"**********************************************"<<endl;
    cout<<"输入你要执行的操作序号:";
}














int main() {
	int a,A,B,C,D,e;
	double n=0;
	char q1,q2,q3,q4,s;
	#include "password.cpp"
    jiemian();
    cin>>e;
    if(e==1) {
    	cout<<"依次输入4个同学的代号和成绩:";
    	cin>>q1>>A>>q2>>B>>q3>>C>>q4>>D;
    	cout<<"输入你要执行的操作序号:";
	}
    else {
    	cout<<"请先输入4个同学的代号和成绩:";
    	cin>>q1>>A>>q2>>B>>q3>>C>>q4>>D;
    	cout<<"输入你要执行的操作序号:";
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
