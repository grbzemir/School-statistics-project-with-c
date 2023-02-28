#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// School Statistics Project
// Emircan Gürbüz

int main ()
{

system("color 0a");
int teneffusdakika;
int sinif;
int gun;
int dersaati;
int zil;
int uc;
int teneffusgun;
int dersdakika;
int dersgun;
int beden;
int sinav;
int kantin;
int Jupiter;


int tatbikat;
int servisdakika;
int servisgun;
int yurume;
int merdiven;
int saatebakma;
int bosders;
int karne;
int tahtayakalkma;
int kapat;

if(sinif==1)
{
    goto yeniden;
}
sinif=sinif-1;
yeniden:

    gun=178*sinif;
    dersaati=gun*8;
    dersdakika=dersaati*60;
    teneffusgun=gun*2;
    teneffusdakika=teneffusgun*60;
    dersgun=gun*6;
    beden=dersgun*45;
    sinav=dersgun*45;
    kantin=dersgun*30;
    Jupiter=dersgun*30;
    tatbikat=dersgun*30;
    servisgun=dersgun*2;
    servisdakika=servisgun*60;
    yurume=dersgun*30;
    merdiven=dersgun*30;
    saatebakma=dersgun*30;
    bosders=dersgun*30;
    karne=dersgun*30;
    tahtayakalkma=dersgun*30;
    kapat=dersgun*30;
    zil=dersgun*30;
    uc=dersgun*30;


printf("\n\n\t\t\t   --%d gun okula gittiniz--",gun);
sleep(4);
printf("\n\t\t\t   --%d saat ders calistiniz--",dersaati);
sleep(4);
printf("\n\t\t\t   --%d dakika ders calistiniz--",dersdakika);
sleep(4);
printf("\n\t\t\t   --%d dakika teneffus ettiniz--",teneffusdakika);
sleep(4);
printf("\n\t\t\t   --%d dakika beden egitimi yaptiniz--",beden);
sleep(4);
printf("\n\t\t\t   --%d dakika sinav yaptiniz--",sinav);
sleep(4);
printf("\n\t\t\t   --%d dakika kantinde yattiniz--",kantin);
sleep(4);
printf("\n\t\t\t   --%d dakika Jupiter'de yattiniz--",Jupiter);
sleep(4);
printf("\n\t\t\t   --%d dakika tatbikat yaptiniz--",tatbikat);
sleep(4);
printf("\n\t\t\t   --%d dakika servise gittiniz--",servisdakika);
sleep(4);
printf("\n\t\t\t   --%d dakika yurume yaptiniz--",yurume);
sleep(4);
printf("\n\t\t\t   --%d dakika merdiven cikisi yaptiniz--",merdiven);
sleep(4);
printf("\n\n\t\t\t   --%d dakika saate baktiniz--",saatebakma);
sleep(4);
printf("\n\t\t\t   --%d dakika bos ders yaptiniz--",bosders);
sleep(4);
printf("\n\t\t\t   --%d dakika karne aldin--",karne);
sleep(4);
printf("\n\t\t\t   --%d dakika tahtaya yuklendiniz--",tahtayakalkma);
sleep(4);
printf("\n\t\t\t   --%d dakika zil caldi--",zil);
sleep(4);
printf("\n\t\t\t   --%d dakika ucak ucurdunuz--",uc);
sleep(4);
printf("\n\t\t\t  -- 0 yazip entera basarak programi kapatabilirsiniz");
scanf("%d",&kapat);




return 0;
}