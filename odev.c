#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
        printf("En buyuk = %d", a);
    else if(b > a && b > c)
        printf("En buyuk = %d", b);
    else
        printf("En buyuk = %d", c);

    return 0;
}



#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a)
        printf("Ucgen Olur");
    else
        printf("Ucgen OLMAZ");

    return 0;
}



#include <stdio.h>
int main(){
    int n;  
    scanf("%d",&n);

    if(n>=90) printf("AA");
    else if(n>=80) printf("BA");
    else if(n>=70) printf("BB");
    else if(n>=60) printf("CB");
    else if(n>=50) printf("CC");
    else printf("FF");

    return 0;
}



#include <stdio.h>
int main(){
    int y;
    scanf("%d",&y);

    if(y%400==0 || (y%4==0 && y%100!=0))
        printf("Artik yil");
    else
        printf("Artik yil degil");

    return 0;
}




#include <stdio.h>
int main(){
    int s; scanf("%d",&s);

    if(s>0) printf("Pozitif");
    else if(s<0) printf("Negatif");
    else printf("Sifir");

    return 0;
}



#include <stdio.h>
int main(){
    int a,b,tmp;
    scanf("%d %d",&a,&b);

    if(a < b){
        tmp = a;
        a = b;
        b = tmp;
    }

    printf("A=%d B=%d",a,b);
    return 0;
}



#include <stdio.h>
int main(){
    int n; scanf("%d",&n);

    if(n % 2 == 0) printf("Cift");
    else printf("Tek");

    return 0;
}


#include <stdio.h>
int main(){
    int y; scanf("%d",&y);

    if(y >= 18) printf("Oy kullanabilir");
    else printf("Oy kullanamaz");

    return 0;
}



#include <stdio.h>
int main(){
    float m; int y;
    scanf("%f %d",&m,&y);

    if(y>10) m *= 1.20;
    else if(y>=5) m *= 1.10;
    else m *= 1.05;

    printf("Yeni maas: %.2f", m);
    return 0;
}


#include <stdio.h>
int main(){
    float a,b; char op;
    scanf("%f %f %c",&a,&b,&op);

    if(op=='+') printf("%.2f", a+b);
    else if(op=='-') printf("%.2f", a-b);
    else if(op=='*') printf("%.2f", a*b);
    else if(op=='/') printf("%.2f", a/b);
    else printf("Hatali islem");

    return 0;
}


#include <stdio.h>
int main(){
    int n,i=1;
    scanf("%d",&n);

    while(i<=n){
        printf("%d ",i);
        i++;
    }
    return 0;
}


#include <stdio.h>
int main(){
    int i=1;

    while(i<=100){
        if(i % 2 == 0)
            printf("%d ", i);
        i++;
    }
    return 0;
}


#include <stdio.h>
int main(){
    int n, i=1;
    long long f = 1;
    scanf("%d",&n);

    while(i <= n){
        f *= i;
        i++;
    }

    printf("Faktoriyel = %lld", f);
    return 0;
}


#include <stdio.h>
int main(){
    int n, t=0;
    scanf("%d",&n);

    while(n>0){
        t += n % 10;
        n /= 10;
    }
    printf("Basamak toplami = %d", t);
    return 0;
}


#include <stdio.h>
int main(){
    int n, ters=0;
    scanf("%d",&n);

    while(n>0){
        ters = ters*10 + (n%10);
        n /= 10;
    }
    printf("Tersi = %d", ters);
    return 0;
}


#include <stdio.h>
int main(){
    int n, temp, bas, toplam=0;
    scanf("%d",&n);

    temp = n;
    while(temp>0){
        bas = temp % 10;
        toplam += bas*bas*bas;
        temp /= 10;
    }

    if(toplam == n) printf("Armstrong");
    else printf("Degil");

    return 0;
}


#include <stdio.h>
int main(){
    int s, toplam=0;
    scanf("%d",&s);

    while(s != 0){
        toplam += s;
        scanf("%d",&s);
    }

    printf("Toplam = %d", toplam);
    return 0;
}


#include <stdio.h>
int main(){
    int s, max=-999999;
    scanf("%d",&s);

    while(s != 0){
        if(s > max) max = s;
        scanf("%d",&s);
    }

    printf("En buyuk = %d", max);
    return 0;
}



#include <stdio.h>
int main(){
    int i=1;

    while(i<=10){
        printf("%d^2 = %d\n", i, i*i);
        i++;
    }

    return 0;
}


#include <stdio.h>
int main(){
    int n, bas=0;
    scanf("%d",&n);

    while(n>0){
        bas++;
        n /= 10;
    }

    printf("Basamak sayisi = %d", bas);
    return 0;
}


#include <stdio.h>
int main(){
    int n, i=1;
    scanf("%d",&n);

    do{
        printf("%d ", i);
        i++;
    }while(i <= n);

    return 0;
}


#include <stdio.h>
int main(){
    int tahmin;
    int gizli = 30;

    do{
        printf("Tahmin: ");
        scanf("%d",&tahmin);

        if(tahmin < gizli)
            printf("Daha buyuk bir sayi girin.\n");
        else if(tahmin > gizli)
            printf("Daha kucuk bir sayi girin.\n");

    }while(tahmin != gizli);

    printf("Tebrikler! Dogru tahmin.");
    return 0;
}


#include <stdio.h>
int main(){
    int secim;
    int a, b;

    do{
        printf("\n1-Topla\n2-Cikar\n0-Cikis\nSecim: ");
        scanf("%d",&secim);

        if(secim==1){
            scanf("%d %d",&a,&b);
            printf("Sonuc = %d\n", a+b);
        }
        else if(secim==2){
            scanf("%d %d",&a,&b);
            printf("Sonuc = %d\n", a-b);
        }
        else if(secim!=0){
            printf("Hatali secim!\n");
        }

    }while(secim != 0);

    return 0;
}


#include <stdio.h>
int main(){
    int s, toplam=0;

    do{
        scanf("%d",&s);
        toplam += s;
    }while(s != 0);

    printf("Toplam = %d", toplam);
    return 0;
}


#include <stdio.h>
int main(){
    int s, adet=0, toplam=0;

    do{
        scanf("%d",&s);
        if(s != 0){
            toplam += s;
            adet++;
        }
    }while(s != 0);

    printf("Ortalama = %.2f", (float)toplam/adet);
    return 0;
}


#include <stdio.h>
int main(){
    int s, toplam=0;

    do{
        scanf("%d",&s);
        if(s > 0) toplam += s;
    }while(s >= 0);

    printf("Toplam = %d", toplam);
    return 0;
}


#include <stdio.h>
int main(){
    int i = 10;

    do{
        printf("%d ",i);
        i--;
    }while(i >= 1);

    return 0;
}



#include <stdio.h>
#include <string.h>

int main(){
    char sifre[20];

    do{
        printf("Sifre: ");
        scanf("%s", sifre);
    }while(strcmp(sifre, "1234") != 0);

    printf("Giris basarili.");
    return 0;
}



#include <stdio.h>
int main(){
    int n, bas;
    scanf("%d",&n);

    do{
        bas = n % 10;
        printf("%d ", bas);
        n /= 10;
    }while(n > 0);

    return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int gizli = rand() % 50 + 1;
    int tahmin;

    do{
        printf("Tahmin: ");
        scanf("%d",&tahmin);

        if(tahmin < gizli) printf("Daha buyuk!\n");
        else if(tahmin > gizli) printf("Daha kucuk!\n");

    }while(tahmin != gizli);

    printf("Tebrikler!");

    return 0;
}



#include <stdio.h>
int main(){
    for(int i=1; i<=100; i++){
        printf("%d ", i);
    }
    return 0;
}



#include <stdio.h>
int main(){
    int n, toplam=0;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        toplam += i;
    }
    printf("Toplam = %d", toplam);
    return 0;
}


#include <stdio.h>
int main(){
    int sayac=0;

    for(int i=1; sayac<20; i++){
        if(i % 2 != 0){
            printf("%d ", i);
            sayac++;
        }
    }
    return 0;
}




#include <stdio.h>
int main(){
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            printf("%2d ", i*j);
        }
        printf("\n");
    }
    return 0;
}



#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int a=0, b=1, c;

    for(int i=0; i<n; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}



#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(n % i == 0)
            printf("%d ", i);
    }
    return 0;
}


#include <stdio.h>
int main(){
    int n, asal=1;
    scanf("%d",&n);

    for(int i=2; i<=n/2; i++){
        if(n % i == 0){
            asal = 0;
            break;
        }
    }

    if(asal) printf("Asal");
    else printf("Degil");

    return 0;
}


#include <stdio.h>
int main(){
    for(int i=1; i<=10; i++){
        printf("%d  %d  %d\n", i, i*i, i*i*i);
    }
    return 0;
}


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int b=1; b<=n-i; b++) printf(" ");
        for(int y=1; y<=2*i-1; y++) printf("*");
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main(){
    int g;
    scanf("%d",&g);

    switch(g){
        case 1: printf("Pazartesi"); break;
        case 2: printf("Sali"); break;
        case 3: printf("Carsamba"); break;
        case 4: printf("Persembe"); break;
        case 5: printf("Cuma"); break;
        case 6: printf("Cumartesi"); break;
        case 7: printf("Pazar"); break;
        default: printf("Hatali giris");
    }

    return 0;
}


#include <stdio.h>
int main(){
    float a,b;
    char op;
    scanf("%f %f %c",&a,&b,&op);

    switch(op){
        case '+': printf("%.2f", a+b); break;
        case '-': printf("%.2f", a-b); break;
        case '*': printf("%.2f", a*b); break;
        case '/': printf("%.2f", a/b); break;
        default: printf("Hatali islem");
    }
    return 0;
}


#include <stdio.h>
int main(){
    char h;
    scanf(" %c",&h);

    switch(h){
        case 'A': printf("Mukemmel"); break;
        case 'B': printf("Cok iyi"); break;
        case 'C': printf("Orta"); break;
        case 'D': printf("Kotu"); break;
        case 'F': printf("Kaldi"); break;
        default: printf("Hatali");
    }
    return 0;
}


#include <stdio.h>
int main(){
    int ay;
    scanf("%d",&ay);

    switch(ay){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 gun");
            break;
        case 4: case 6: case 9: case 11:
            printf("30 gun");
            break;
        case 2:
            printf("28 veya 29 gun");
            break;
        default:
            printf("Hatali ay");
    }
    return 0;
}


#include <stdio.h>
int main(){
    int secim;

menu:
    printf("\n1-Yaz\n2-Yeniden Basla\n0-Cikis\nSecim: ");
    scanf("%d",&secim);

    if(secim == 1){
        printf("Merhaba!\n");
        goto menu;
    }
    else if(secim == 2){
        goto menu;
    }
    else if(secim == 0){
        printf("Program bitti");
    }
    else{
        printf("Hatali secim!\n");
        goto menu;
    }

    return 0;
}



#include <stdio.h>
#include <string.h>

int main(){
    char sifre[20];

tekrar:
    printf("Sifre: ");
    scanf("%s",sifre);

    if(strcmp(sifre,"1234")==0)
        printf("Giris basarili!");
    else{
        printf("Yanlis! Tekrar deneyin.\n");
        goto tekrar;
    }

    return 0;
}



#include <stdio.h>

int main(){
    int secim;
    float a,b;

    do{
        printf("\n1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n0-Cikis\nSecim: ");
        scanf("%d",&secim);

        if(secim==0) break;

        scanf("%f %f",&a,&b);

        switch(secim){
            case 1: printf("Sonuc=%.2f\n",a+b); break;
            case 2: printf("Sonuc=%.2f\n",a-b); break;
            case 3: printf("Sonuc=%.2f\n",a*b); break;
            case 4: printf("Sonuc=%.2f\n",a/b); break;
            default: printf("Hatali secim!");
        }

    }while(secim != 0);

    return 0;
}



#include <stdio.h>
int main(){
    int s, min=999999, max=-999999;

    for(int i=1; i<=10; i++){
        scanf("%d",&s);
        if(s < min) min = s;
        if(s > max) max = s;
    }

    printf("En kucuk=%d En buyuk=%d", min, max);
    return 0;
}


#include <stdio.h>
int main(){
    int n, toplam=0;
    scanf("%d",&n);

    for(int i=1; i<=n/2; i++){
        if(n % i == 0)
            toplam += i;
    }

    if(toplam == n) printf("Mukemmel sayi");
    else printf("Degil");

    return 0;
}


#include <stdio.h>
int main(){
    int n, b[50], i=0;
    scanf("%d",&n);

    if(n == 0){
        printf("0");
        return 0;
    }

    while(n > 0){
        b[i] = n % 2;
        n /= 2;
        i++;
    }

    for(int j=i-1; j>=0; j--){
        printf("%d", b[j]);
    }

    return 0;
}
