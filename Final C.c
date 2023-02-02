#include <stdio.h>

// for BBG
int main()
{
    /*
furkan, bir romanýn her gün bir önceki gün okuduðu
sayfadan 5 sayfa fazlasýný okumaktadýr. Ýlk gün 10 sayfa **************************
okuyarak baþlayan Furkan'ýn 1.000 sayfalýk bir romaný kaç
günde bitireceðini bulan programý C dilinde kodlayýnýz.


int i,day = 1,read = 10;
for(i = 10 ; i <= 1000 ; i += read )
{
	day ++;
	read = read+5;
	printf("%d\n",i);

}

printf("day: %d",day+1);



*/



/*
New York metropolitanýnda nüfus 19 milyon, Ýstanbul’da
ise 14 milyon olarak belirleniyor. Ýstanbul nüfusunun yýlda %3,      *******************************
New York nüfusunun ise %2 artýþ göstereceði tahmin ediliyor.
Buna göre kaç yýl sonra Ýstanbul’un New York’tan kalabalýk olacaðýný hesaplayan
C programýný yazýnýz.


double newyork,istanbul;
int yil;
newyork=19000000;
istanbul=14000000;
yil=0;
do
{
newyork=newyork*1.02;
istanbul=istanbul*1.03;
yil=yil+1;
} while(istanbul<newyork);
printf("%d",yil);



return 0;

*/


/*Matrisler **************************

int i,j;

for(i=1 ; i<6 ; i++)
{

	for(j=1 ; j<6 ; j++)
	{
		printf("1  ");

	}
	printf("\n");
}
printf("\n");

for(i=1 ; i<6 ; i++)
{

	for(j=1 ; j<6 ; j++)
	{
		printf("%d  ",i);

	}
  printf("\n");
}
printf("\n");

for(i=1 ; i<6 ; i++)
{

	for(j=1 ; j<6 ; j++)
	{
		printf("%d  ",j);

	}
  printf("\n");
}

printf("\n");

for(i=1 ; i<6 ; i++)
{

	for(j=1 ; j<6 ; j++)
	{
		if(i-j == 0)
			printf("0  ");
		else
			printf("1  ");
	}
  printf("\n");
}
printf("\n");

for(i=1 ; i<6 ; i++)
{

	for(j=1 ; j<6 ; j++)
	{
		if(i+j == 6)
			printf("0  ");
		else
			printf("1  ");
	}
  printf("\n");
}
printf("\n");

for(i=1 ; i<6 ; i++)
{

	for(j=1 ; j<6 ; j++)
	{
		if(i > j)
			printf("1  ");
		else
			printf("0  ");
	}
  printf("\n");
}
*/
/*
Kendisi hariç bütün pozitif tamsayý çarpanlarýnýn
toplamý kendisine eþit olan sayýlara mükemmel sayý
denir.  Örneðin, 28 sayýsýnýn kendisi hariç pozitif çarpanlarý            ******************************
toplamý 1+2+4+7+14 = 28 olduðundan 28 sayýsý
mükemmel bir sayýdýr. Buna göre klavyeden girilen bir sayýnýn mükemmel
sayý olup olmadýðýný söylenen C programýný yazýnýz.


int sayi,sum=0,i;

printf("Sayi giriniz: "); scanf("%d",&sayi);

for(i=1 ; i < sayi ; i++)
if(sayi % i == 0)
	sum += i;

if(sum == sayi)
 	printf("%d sayisi mukemmel sayidir",sayi);
else
	printf("%d sayisi mukemmel degildir",sayi);
*/

/*
Üç basamaklý rakamlarý birbirinden farklý tüm
sayýlarý ekranda gösteren ve bu kurala uygun kaç tane  ******************************
sayý olduðunu söyleyen C programýný yazýnýz.

int a,b,c,sayac=0;

for(a = 1 ; a < 10 ; a++)
	for(b=0; b < 10 ; b++)
		for(c=0 ; c < 10 ; c++)
			if(a != b && c !=b && a != c)
			{
				printf("%d%d%d\n",a,b,c);
				sayac++;
			}

printf("sayac: %d",sayac);

*/

/*
Dizinin minimum elemanýný bulma ****************


 int Array[10],i,min;

for(i=0 ; i < 10 ; i++)
{
   printf("%d. sayiyi giriniz: ",i+1);
    scanf("%d",&Array[i]);
}
min = Array[0];
    for(i=0 ; i < 10 ; i++)
        if(min > Array[i])
                min = Array[i];

    printf("En kucuk sayi: %d",min);
*/


/*
Dizileri Sýralamak *************


int dizi[10],yedek,min,i,j,sira;
for(i=0 ; i < 10 ; i++)
{
   printf("%d. sayiyi giriniz: ",i+1);
    scanf("%d",&dizi[i]);
}
min=dizi[0];
for(i=0 ; i < 10 ; i++)
{
    min = dizi[i];
    for(j=i ; j < 10 ; j++)
    {
        if(min > dizi[j])
        {
             min = dizi[j];
              yedek = dizi[i];
              sira = j;
              dizi[i] = min;
              dizi[sira] = yedek;
        }
    }
}
    for(i=0 ; i < 10 ; i++)
        printf("%d ",dizi[i]);

*/


/*
Doðrusal Arama Yapmak ********************


int i,sayi,dizi[10];
char key = "n";

for(i=0 ; i < 10 ; i++)
{
   printf("%d. sayiyi giriniz: ",i+1);
    scanf("%d",&dizi[i]);
}
printf("Hangi sayiyi ariyorsunuz: ");
scanf("%d",&sayi);


for(i=0 ; i < 10 ; i++)
        if(sayi == dizi[i])
        {
            printf("\n%d sayisi dizide %d. sirada bulunmaktadir",sayi,i+1);
            key = "y";
        }
        printf("%c",key);
        if(key != "y")
            printf("\naradiginiz sayi dizide bulunmamaktadir!");

*/

/*
Ýki Matrisin Toplamý ****************************


int i,j;
int a[2][3]={3,5,8,0,1,2};
int b[2][3] = {7,13,0,31,5,7};


printf("**A matrisi**\n");

for(i = 0 ; i < 2 ; i++)
{
    for(j = 0 ; j < 3 ; j++)
    {
        printf("%d ",a[i][j]);

    }
        printf("\n");

}


printf("\n\n**B matrisi**\n");

for(i = 0 ; i < 2 ; i++)
{
    for(j = 0 ; j < 3 ; j++)
    {
        printf("%d ",b[i][j]);

    }
        printf("\n");

}

printf("\n\n**A + B Matrisi**\n");
for(i = 0 ; i < 2 ; i++)
{
    for(j = 0 ; j < 3 ; j++)
    {
        printf("%d ",a[i][j]+b[i][j]);

    }
        printf("\n");

}
*/


/*
Matris Çarpýmý ***************************************************



int i,j,k,sum=0;
int a[3][3]={3,5,8,0,1,2,14,12,6};
int b[3][3] = {7,13,0,31,5,7,1,3,9,};

printf("**A matrisi**\n");

for(i = 0 ; i < 3 ; i++)
{
    for(j = 0 ; j < 3 ; j++)
    {
        printf("%d ",a[i][j]);

    }
        printf("\n");

}


printf("\n\n**B matrisi**\n");

for(i = 0 ; i < 3 ; i++)
{
    for(j = 0 ; j < 3 ; j++)
    {
        printf("%3d ",b[i][j]);

    }
        printf("\n");

}

printf("\n\n**AB Matrisi**\n");

for(k=0 ; k < 3 ; k++)
{
     for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            sum += a[k][j]*b[j][i];
            //printf("%d\n",sum);
        }
        printf("%3d  ",sum);
        sum=0;
    }
    printf("\n");
}
*/

/*
Girilen ifadeyi harf harf alt alta yazdýran program ****************************************


char isim[15];
printf("isiminizi giriniz: ");
gets(isim);
int i=0;
while(isim[i] != '\0')
{


    printf("%c\n",isim[i]);

    i++;

}




*/

/*
Girilen ifadede istenilen harfin
sayýsýný bulduran programý yazýnýz.********************************************

char isim[15];
printf("isiminizi giriniz: ");
gets(isim);
int i=0,a=0;
while(isim[i] != '\0')
{
    if(isim[i] != 'a')
        a++;
        i++;

}
printf("%d",a);
*/





/*
Girilen bir metni ters yazdýran programý yazýnýz. **********************************


char isim[15];
printf("isiminizi giriniz: ");
gets(isim);
int i=0,a=0;
while(isim[i] != '\0')
{

        i++;

}

while(i >= 0)
{

    printf("%c",isim[i]);
    i--;


}
*/

/*
Klavyeden girilen sayýdaki
basamak sayýsýný bulan C programý ****************************************************************


int sayi,sayac=0,bolunen;
printf("Sayi giriniz: ");
scanf("%d",&sayi);
bolunen = sayi;
    while(sayi != 0 )
{

    sayi /=10;
    sayac++;

}

  printf("%d sayisi %d basamaklidir",bolunen,sayac);

*/

/*
Bir tam sayýnýn basamaklarýnýn kaç
tanesinin 7 olduðunu bulan bir program yazýnýz. ***************************************

int sayi,n,seven=0,yedek;
printf("Sayi giriniz: ");
scanf("%d",&sayi);
yedek = sayi;
while(sayi != 0)
{

  n = sayi%10;
  sayi /=10;
    if(n == 7)
        seven++;
}
printf("%d sayisinda %d tane '7' vardir",yedek,seven);





*/

/*
Klavyeden girilen sayýyý ***************************************
tersten yazdýran C programý


int sayi,n;
printf("Sayi giriniz: ");
scanf("%d",&sayi);

while(sayi != 0)
{

    n = sayi%10;
    printf("%d",n);
    sayi/=10;

}
*/


/*
Klavyeden girilen sayýnýn polindrom *****************************************
olup-olmadýðýný test eden C programý



int sayi,n=0,yedek,sum = 0;
printf("Sayi giriniz: ");
scanf("%d",&sayi);
yedek = sayi;
while(sayi != 0)
{

  n *= 10;

  n += sayi%10;

  sayi /= 10;
}

    if(n == yedek)
        printf("%d sayisi polindromdur",yedek);
    else
        printf("%d sayisi polindirom degildir",yedek);
        */


/*
n sayýsýna kadar olan Fibonacci  ****************************************
sayýlarýný yazdýran C programý




 int sira,i,k=1,l=1,f;
printf("Fibonacci'nin kacinci sirasinia kadar istiyorsunuz: ");
scanf("%d",&sira);
        if(sira == 1)
            printf("1");
        else{
            printf("1 1 ");
            for(i = 0 ; i < sira ; i++)
            {
               f = k+l;
               k = l;
               l = f;
                printf("%d ",f);

            }

        }

*/


/*
 Klavyeden girilen sayýnýn asal
olup-olmadýðýný test eden C programý. **********************************************




int sayi,i;
char key = 'y';
printf("Sayi giriniz: ");
scanf("%d",&sayi);
if(sayi == 2)
    printf("sayi asal degildir");
for(i = 2 ; i < sayi ; i++)
{
    if(sayi%i == 0)
        key = 'n';

}
if(key == 'n')
    printf("sayi asal degildir");
else
    printf("sayi asaldir");

*/


/*
Ýki aralýk arasýndaki asal sayýlarý ***********************************************************
ekranda görüntüleyen C programý


int sayi1,sayi2,i,j;
char key = 'y';

printf("Sayi araligi giriniz: ");
scanf("%d %d",&sayi1,&sayi2);
for(i = sayi1 ; i < sayi2 ; i++)
{
    key = 'y';
    for(j= 2 ; j < i ; j++)
        if(i%j == 0)
          key = 'n';
if(key == 'y')
    if(i != 1)
    printf("%d ",i);
}
*/


/*
Herhangi bir hastanýn tedaviden sonraki masrafýný hesaplatan
C programý yazýnýz.
 Bir hasta belirsiz sayýda iþlemden yararlana bilir. ********************************************************
 Tansiyon ölçme – 100
 Genel muayene – 200
 Ýðne – 300
 Tahlil – 400
Not: switch…case yapýsý kullanarak çözünüz.

int sum=0;
int n;
printf("1- Tansiyon Olcme (100TL)\n\n2- Genel muayne (200TL)\n\n3- Igne (300TL)\n\n4- Tahlil (400TL)\n\n5- Cikis");
while(1)
{
printf("\n\nIslem numarisini giriniz: ");
scanf("%d",&n);

switch(n)
{

    case 1:
    printf("Tansiyon Olcme Ucreti eklendi");
    sum += 100;
    break;
    case 2:
    printf("Genel Muayne Ucreti eklendi");
    sum += 200;
    break;
    case 3:
    printf("Igne Ucreti eklendi");
    sum += 300;
    break;
    case 4:
    printf("Tahlil Ucreti eklendi");
    sum += 400;
     break;
    case 5:
    printf("Cikis yapiliyor..");
     break;

    default:
     printf("Yanlis islem numarasi girildi");
     break;
}
    if(n == 5)
        break;
}
    printf("\n\nToplam odeme tutariniz: %d TL",sum);


*/


/*
Verilen 10 sayýyý klavye yardýmýyla (scanf) ile bir diziye aktaran
ve dizideki elemanlarýn ortalamasýndan küçük olanlarý baþka bir
diziye aktaran C programý yazýnýz.***********************************************************************************************************************



int a[10],b[10],k=0,sum=0,i;

for(i = 0 ; i < 10 ; i++ )
{
    printf("%d. degerini giriniz: ",i+1);
    scanf("%d",&a[i]);
    sum += a[i];
}

for(i = 0 ; i < 10 ; i++ )
{
    if(a[i] < sum/10)
    {

       k+=1;
       b[k] =a[i];
    }


}
for(i = 0 ; i < k ; i++)
    printf("%d ",b[i]);

*/


/*
4x4’lük bir matrisin,
 en büyük elemanýný ve indislerini
 en küçük elemanýný ve indislerini            **************************************
bulup ekranda yazdýran C programý yazýnýz




int a[4][4]={{2,1,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
int i,j,min,max,yedek,maxsirai,minsiraj,maxsiraj,minsirai,k;
min = a[0][0];
max = a[0][0];

for(i = 0 ; i < 4 ; i++)
{
    for(j= 0 ; j < 4 ; j++)
    {
        if(max < a[i][j])
        {
            max = a[i][j];
            maxsirai = i;
            maxsiraj = j;

        }
        else if(min > a[i][j])
        {
            min = a[i][j];
            minsirai = i;
            minsiraj = j;


        }
    }
}

        printf("Max value is %d in (%d,%d)\n",max,maxsirai,maxsiraj);
        printf("Max value is %d in (%d,%d)",min,minsirai,minsiraj);

/*


/*
Bir þirkette 4 adet satýþ temsilcisi vardýr (0-3) ve bu temsilciler, 5 farklý
ürünü pazarlamaktadýrlar (0-4). Günlük olarak, her satýþ temsilcisi
satýlan farklý tipte her ürün için bir fiþ düzenlemektedir.
Her fiþte:
Satýþ temsilcisi numarasý
Ürün numarasý
O gün satýlan ürünlerin dolar cinsinden miktarý
Her satýþ temsilci, günlük olarak 0-5 adet fiþ düzenlemektedir. Son                      **********************************
ayýn tüm fiþlerini kullanarak, geçen ay yapýlan tüm satýþlarýn özetini
çýkartan bir program yazýnýz. Yapýlan tüm satýþlar sales isimli bir
iki-boyutu dizide kaydedilmelidir. Geçen ayýn satýþlarý iþlendikten
sonra, sonuçlar tablo halinde yazdýrýlmalýdýr.
Satýrlar ürün miktarlarý sütünler ise satýþ temsilcilerini temsil
etmelidir.




int satilan[4][5];
int adet=0,i,j,k;
for(i = 0 ; i < 4 ; i++)
{
    for(j = 0 ; j < 4 ; j++)
    {
        printf("%d. satici %d. urunu kac adet sattigini giriniz: ",i+1,j+1);
        scanf("%d",&adet);
        satilan[i][j] = adet;

    }
        printf("\n");
}

            //ÖZET TABLO
printf("\n               \t1\t2\t3\t4\n\n");

for(i = 0 ; i < 4 ; i++)
{
    printf("%d. Satici:    ",i+1);
    for(j = 0 ; j < 4 ; j++)
    {

        printf("%3d\t",satilan[i][j])
        ;

    }
        printf("\n\n");
}
*/








/*
*
* *       *******************************************
* * *
* * * *
* * * * *


int i,j;
for(i = 1 ; i <= 5 ; i++)
{
    for(j = 0 ; j < i ; j++)
        printf("* ");
printf("\n");
}
*/


/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

int i,j;
for(i = 1 ; i <= 5 ; i++)
{
    for(j = 1 ; j <= i ; j++)
        printf("%d ",j);
printf("\n");
}
*/



/*
A
B B
C C C
D D D D
E E E E E




int i,j;
for(i = 1 ; i <= 5 ; i++)
{
    for(j = 1 ; j <= i ; j++)
        printf("%c ",64+i);
printf("\n");
}
*/


/*
* * * * *
* * * *
* * *
* *
*


int i,j;
for(i = 5 ; i >= 1 ; i--)
{
    for(j = 1 ; j <= i ; j++)
        printf("* ");
printf("\n");
}
*/

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1


int i,j;
for(i = 5 ; i >= 1 ; i--)
{
    for(j = 1 ; j <= i ; j++)
        printf("%d ",j);
printf("\n");
}
*/


/*
       1
     2 3 2
   3 4 5 4 3
 4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5


int i,j,k,l;


for(i=1 ; i <= 5 ; i++)
{
for(j = 1 ; j <=5-i ; j++)
printf(" ");
for(k = i ;  k < i*2-1 ; k++ )
printf("%d ",k);
for(l = k ; l >= i ; l--)
printf("%d ",l);
printf("\n");
}
*/
/*
   * * * * * * * * *
    * * * * * * *
     * * * * *
      * * *
        * bir boslu kat iki azlt

int i,j,k,sayac= 0;

for(i = 1 ; i < 5 ; i++)
{
    sayac += 2;
    for(j = 1 ; j < i ; j++)
        printf(" ");
    for(k= 9-sayac ; k >= 1 ; k--)
        printf("* ");
printf("\n");
}
*/











}

