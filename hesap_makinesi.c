#include <stdio.h>

int main() 

{
 
 int x,y;    
  
 int sonuc;
 
 float Sonuc;
  
 printf("Islem secin(Toplama icin + , Cikarma icin - , Carpma icin * , Bolme icin / , Kalan Bulmak icin %% tusuna basin!): ");
  
 char islem = getchar(); // getchar fonksiyonu klavyden basılan tuşu okur
    
 switch(islem)
 
  {
      
    case '+' : printf("1.sayiyi girin: ");
               scanf("%d",&x);
               
               printf("2.sayiyi girin: ");
               scanf("%d",&y);
                
               sonuc = x + y ;
      
               printf("%d %c %d = %d",x,islem,y,sonuc);
      
               break ;
               
               
    case '-' : printf("1.sayiyi girin: ");
               scanf("%d",&x);
               
               printf("2.sayiyi girin: ");
               scanf("%d",&y);
                
               sonuc = x - y ;
               
               printf("%d %c %d = %d",x,islem,y,sonuc);
               
               break ;  
               
               
    case '*' : printf("1.sayiyi girin: ");
               scanf("%d",&x);
               
               printf("2.sayiyi girin: ");
               scanf("%d",&y);
                
               sonuc = x * y ;
               
               printf("%d %c %d = %d",x,islem,y,sonuc);
               
               break ;               
               
               
    case '/' : printf("1.sayiyi girin: ");
               scanf("%d",&x);
               
               printf("2.sayiyi girin: ");
               scanf("%d",&y);
                
               Sonuc = (float)x / y ;
               
               printf("%d %c %d = %.2f",x,islem,y,Sonuc);
               
               break ;   
               
               
    case '%' : printf("1.sayiyi girin: ");
               scanf("%d",&x);
               
               printf("2.sayiyi girin: ");
               scanf("%d",&y);
                
               sonuc = x % y ;
               
               printf("%d %c %d = %d",x,islem,y,sonuc);
               
               break ;         
          
    default:  printf("hatali islem gerceklestirdiniz!!");      
          
  }
 
  return 0;

}