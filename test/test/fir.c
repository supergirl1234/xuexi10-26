//1.5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果 
//A选手说：B第二，我第三；      b==2&&a!=3  || b!=2&&a==3
//B选手说：我第二，E第四；      b==2&&e!=4  || b!=2&&e==4
//C选手说：我第一，D第二；      c==1&&d!=2  || c!=1&&d==2
//D选手说：C最后，我第三；      c==5&&d!=3  || c!=5&&d==3
//E选手说：我第四，A第一；      e==4&&a!=1  || e!=4&&a==1
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。 

//
//#include<stdio.h>
//#include<stdlib.h>
//
//
//int main(){
//    int a=1;
//	int b=1;
//	int c=1;
//	int d=1;
//	int e=1;
//	for(a=1;a<=5;a++){
//	
//		for(b=1;b<=5;b++){
//
//			for(c=1;c<=5;c++){
//			
//				for(d=1;d<=5;d++){
//
//					for(e=1;e<=5;e++){
//						
//							/*if((((b==2)&&(a!=3))||((b!=2)&&(a==3)))
//								&&(((b==2)&&(e!=4))||((b!=2)&&(e==4)))
//								&&(((c==1)&&(d!=2))||((c!=1)&&(d==2)))
//								&&(((c==5)&&(d!=3))||((c!=5)&&(d==3)))
//								&&(((e==4)&&(a!=1))||((e!=4)&&(a==1)))
//								){
//									if(a*b*c*d*e==120){
//							
//							           printf("a=%d,b=%d,c=%d,d=%d,e=%d",a,b,c,d,e);
//
//							       }
//						
//						    }*/
//						 //这段代码可以简化为;
//						if( ((b==2)+(a==3)==1)
//							&&((b==2)+(e==4)==1)
//							&&((c==1)+(d==2)==1)
//							&&((c==5)+(d==3)==1)
//							&&((e==4)+(a==1)==1)
//							){
//						
//							if(a*b*c*d*e==120){
//							
//							    printf("a=%d,b=%d,c=%d,d=%d,e=%d",a,b,c,d,e);
//							
//							}
//						
//						}
//
//					
//					}
//				
//				
//				}
//			
//			}
//		
//		
//		}
//	
//	}
//
//    system("pause");
//	return 0;
//
//}








//2. 
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个 
//嫌疑犯的一个。以下为4个嫌疑犯的供词。 
//A说：不是我。  killer!='A'
//B说：是C。     killer=='C'
//C说：是D。     killer=='D'
//D说：C在胡说   killer!='D'
//已知3个人说了真话，1个人说的是假话。 
//现在请根据这些信息，写一个程序来确定到底谁是凶手。 

//#include<stdio.h>
//#include<stdlib.h>
//
//
//void predict(){
//    char killer='0';
//	for(killer='A';killer<='D';killer++){
//	
//		if((killer!='A')+(killer=='C')+(killer=='D')+(killer!='D')==3){
//			printf("凶手是:%c",killer);
//			 break;
//		
//		
//		}
//	
//	}
//
//
//}
//int main(){
//	predict();
//
//   
//
//  system("pause");
//  return 0;
//}



//3.在屏幕上打印杨辉三角。 
//1 
//1 1 
//1 2 1 
//1 3 3 1 


#include<stdio.h>
#include<stdlib.h>

#define ROW 7
#define COL 7

int main(){
	char arr[ROW][COL]={0};

	int row=0;
	int col=0;
	for(row=0;row<ROW;row++){
	     arr[row][0]=1;
		 arr[row][row]=1;
	
	}
	for(row=2;row<ROW;row++){
		for(col=1;col<row;col++){
		
		   arr[row][col]=arr[row-1][col-1]+arr[row-1][col];
		}
	
	}
	for(row=0;row<ROW;row++){
		for(col=0;col<=row;col++){
		
		     printf("%d ",arr[row][col]);
		}
		printf("\n");
	
	}
  
   system("pause");
   return 0;
}