/**************************************************************
1755번
jongtae0509
C
정확한 풀이코드 길이:1212 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>

int main(){
	char a[101]={},d[7]={};
	scanf("%s",a);
	int c;
	int i,j=0;
	for(i=0;i<100;i++){
		if(a[i]==46){
			c=i+1;
			break;
		}
	}
	for(i=c;i<100;i++){
		if(a[i]==0){
			break;
		}
		else{
			d[j]=a[i];
			j++;
		}
	}
	if(d[0]==100&&d[1]==105&&d[2]==98){
		printf("Paint.Picture");
	}
	else if(d[0]==100&&d[1]==111&&d[2]==99&&d[3]==120){
		printf("Word.Document.12");
	}
	else if(d[0]==100&&d[1]==111&&d[2]==99){
		printf("Word.Document.8");
	}
	else if(d[0]==104&&d[1]==116&&d[2]==109&&d[3]==108){
		printf("htmlfile");
	}
	else if(d[0]==104&&d[1]==116&&d[2]==109){
		printf("htmfile");
	}
	else if(d[0]==104&&d[1]==119&&d[2]==112&&d[3]==120){
		printf("Hwp.Document.hwpx.96");
	}
	else if(d[0]==104&&d[1]==119&&d[2]==112){
		printf("Hwp.Document.96");
	}
	else if(d[0]==104&&d[1]==119&&d[2]==116){
		printf("Hwp.Document.hwt.96");
	}
	else if(d[0]==106&&d[1]==112){
		printf("jpegfile");
	}
	else if(d[0]==112&&d[1]==112&&d[2]==116&&d[3]==120&&d[4]==109){
		printf("powerpointxmlfile");
	}
	else if(d[0]==112&&d[1]==112&&d[2]==116&&d[3]==120){
		printf("PowerPoint.Show.12");
	}
	else{
		printf("PowerPoint.Show.8");
	}
	
	
}
