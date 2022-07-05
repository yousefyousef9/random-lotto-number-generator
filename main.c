#include <stdio.h>
#include <time.h>



int randomsayi ;

int sayi;

int f , m , n , k ,  i , h , g ;

int asal_Test = 0 ;

int lotosayilari[6];
int kolon ;
int kolon_check = 0 ;
int kolon_tekrar = 0 ;

int cift_sayi = 0 ;
int tek_sayi = 0 ;

int asal_sayi = 0 ;



int ardisik_test = 0 ;

int bir_dokuz = 0 ;
int on_ondokuz = 0 ;
int yirmi_yirmidokuz = 0 ;
int otuz_otuzdokuz = 0 ;
int kirk_kirkdokuz = 0 ;

void sifirlama () ; 
void soru1 ();
void soru7_dosya () ;
void soru3 (int x) ;
void soru4 (int y) ;
void soru5 () ;
void soru6 (int z) ;
int soru7_sirala (int Dzn[] , int array_size ) ;
void soru7_dosya ( int loto ) ;

int main() 
{	FILE *dosya;


 system("COLOR FC");

srand(time(0));

// soru 1 

soru1 () ;

	printf ("\n %d adet kolon secildi \n\n " , kolon) ;

// soru 2 

while (kolon_tekrar < kolon ) {
	
	randomtekrar :

for (i=0; i < 6; i++) {
		
		
 randomsayi = rand()%49+1;
 
 lotosayilari [i] = randomsayi ;
 
}

// soru 2 _ sayilar aynisi olamali 

for (n=0; n < 6; n++)  {
	
	for (m=0; m < 6; m++) {
		
			if (  n != m  &&	lotosayilari [n]  == 	lotosayilari [m] ) {
				
			goto randomtekrar ; 
			
				}
				
}

}

sifirlama () ; 

k = 0 ;

while (k < 6 ) {
	// soru 3 
	
soru3 ( lotosayilari [k] ) ;
 
	// soru 4 
	
soru4 ( lotosayilari [k] ) ;  
	// soru 5
soru5 () ;  
	// soru 6 
soru6 ( lotosayilari [k] ) ;  

	
 
if (asal_sayi >  3 || asal_sayi == 0 ||  tek_sayi > 4 ||  cift_sayi > 4 || ardisik_test > 1 ||bir_dokuz > 2||on_ondokuz > 2||yirmi_yirmidokuz > 2||otuz_otuzdokuz > 2||kirk_kirkdokuz > 2  ){
sifirlama () ; 
 goto randomtekrar ; 
}

	k++ ;
}

 
 
kolon_tekrar ++ ; 


soru7_sirala (lotosayilari , 6 ) ;

soru7_dosya ( kolon_tekrar ) ; 

printf ("\n\n %d kolonun sayilari =  " , kolon_tekrar ) ;

k = 0 ;
while (k < 6 ) {
	
	printf ("\t %d" , lotosayilari[k] ) ;
	

	
	dosya = fopen("loto.txt","a");
	
  fprintf(dosya, " \t %d" , lotosayilari[k] );


	k++ ;
	
}


}

	dosya = fopen("loto.txt","w+");

	fclose(dosya);
 return 0;
 
}

void sifirlama () {
	
 bir_dokuz = 0 ;
 on_ondokuz = 0 ;
 yirmi_yirmidokuz = 0 ;
 otuz_otuzdokuz = 0 ;
 kirk_kirkdokuz = 0 ;
 asal_sayi = 0 ;
 cift_sayi = 0 ;
 ardisik_test = 0 ;
 tek_sayi = 0 ;
	
}

void soru1 () {
	
lutfen_1_8 :
	
	if (kolon_check == 1 ) {
		kolon_check = 0 ;
		printf("\n lutfen kolon araligini En az 1 en cok 8  olsun  \n\n");
	}
	
	
printf("\n  kolon araligini giriniz : \t ");
scanf ("%d" , &kolon) ;


 if (kolon < 1 || kolon > 8) {
		kolon_check = 1 ;
	goto lutfen_1_8 ;
}

}

void soru3 (int x ) {
	
	if( x % 2 == 0)
    {
cift_sayi++ ;

    }
    
    else
    
    {
tek_sayi++ ;

}
	
}

void soru4 (int y) {
		 
		asal_Test = 0 ;
		
	for( f = 2 ; f < y ; f++ )
    {
       if(y % f == 0)
       {
       	
           asal_Test = 1;
                       break;

       }    
    }
    
    if(asal_Test==0)
    {
	asal_sayi ++ ;
    }
}

void soru5 ( ) {
	

for (n=0; n < 6; n++)  {
	
	for (m=0; m < 6; m++) {
		
			if (  n != m  &&	lotosayilari [n] +1 == 	lotosayilari [m] || 	lotosayilari [n] -1 == 	lotosayilari [m] ) {
		ardisik_test ++ ;
			}
			
}
}
}


void soru6 (int z) {
	
	if ( z >= 1 && z <= 9 ) {
		 bir_dokuz++;
}
	else if (z >= 10 && z <= 19 ) {
	
 on_ondokuz++ ;
	}
		else if (z >= 20 && z <= 29 ) {

 yirmi_yirmidokuz++ ;

	}
		else if (z >= 30 && z <= 39 ) {

 otuz_otuzdokuz ++;

	}
		else if (z >= 40 && z <= 49 ) {

 kirk_kirkdokuz ++ ;	
 
	}
}



int soru7_sirala (int Dzn[] , int array_size ) {

    int h, g, sayi;
    
    for (h = 0; h < (array_size - 1); ++h)
    {
        for (g = 0; g < array_size - 1 - h; ++g )
        {
            if (Dzn[g] > Dzn[g+1])
            {
                sayi = Dzn[g+1];
                Dzn[g+1] = Dzn[g];
                Dzn[g] = sayi;
            }
        }
    }
 
}

void soru7_dosya ( int loto ) {
	FILE *dosya;
	dosya = fopen("loto.txt","a");
	
	if (dosya != NULL) {
	
 fprintf(dosya, " \n %d kolonun sayilari  = " , loto  );
 
}

}
