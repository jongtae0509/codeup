/**************************************************************
1226번
jongtae0509
C
정확한 풀이코드 길이:1160 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
 
 
int main (void)
{
    
    int n1, n2 ,n3,n4,n5,n6,n7;
    scanf("%d %d %d %d %d %d %d",&n1, &n2, &n3, &n4, &n5 ,&n6 ,&n7);
    int l1, l2, l3, l4, l5, l6;
    scanf("%d %d %d %d %d %d",&l1, &l2, &l3, &l4, &l5 ,&l6 );
    int s = 0;
    if(n1 == l1 || n2 == l1 || n3 == l1 || n4 == l1 || n5 == l1 || n6 == l1){
	s++;
	}
    if(n1 == l2 || n2 == l2 || n3 == l2 || n4 == l2 || n5 == l2 || n6 == l2){
	s++;
	}
    if(n1 == l3 || n2 == l3 || n3 == l3 || n4 == l3 || n5 == l3 || n6 == l3){
	s++;
	}
    if(n1 == l4 || n2 == l4 || n3 == l4 || n4 == l4 || n5 == l4 || n6 == l4){
	s++;
	}
    if(n1 == l5 || n2 == l5 || n3 == l5 || n4 == l5 || n5 == l5 || n6 == l5){
	s++;
	}
    if(n1 == l6 || n2 == l6 || n3 == l6 || n4 == l6 || n5 == l6 || n6 == l6){
	s++;
	}
    if(s == 6){
	printf("1");
	}
    else if((n7 == l1 || n7 == l2 || n7 == l3 || n7 == l4 || n7 == l5 || n7 == l6)&&s == 5){
        printf("2");
    }
    else if(s == 5){
        printf("3");
    }
    else if(s == 4){
        printf("4");
    }
    else if(s == 3){
        printf("5");
    }
    else{
        printf("0");
    }
}
