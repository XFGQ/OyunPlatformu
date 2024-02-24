#include <iostream>
#include <conio.h>
#include <vector>
#include <Windows.h>
#include <string>
#include <fstream>

using namespace std;


//at yarisinda esc basýnca veya bitince anamenuye seçim ekranýna gelmiyor
// fstreamli çekiliþte çekiliþten sonra tekrar baþa gelmiyor

/*fstreamli çekiliste eðer ayni isimde kiþiler girilirse onlarý nasýl ayýrt edicem
 if else ile ayný ise sonuna (1) ekliyerekmi*/

 //vectorlu çekilisten kura cekildikten sonra basa dönmesini veya tekrar secmesini iste
 /*dünya tahmin etmede 10 tane var ise 9u gittiðinde sonuncuyu bulmak için bekletiyo ve sürekli
 // random sayýnýn 10 çýkmasýný bekliyoruz bunun daha kolay bi yolu varmý*/



int y = 1;//anamenü seçim ekraný


int denemesayisi = 0;//yanlis bilme sayisi
string tahmin, cikis;//Ulkenin ismini bildiði ver
int z = 0;//dogru sayisi
int x = 20;//dogru sayisi


int o = 0;//at yarisi seçim ekrani
int girisekran = 0;//at yarisi
int Alperinyolu = 0;//at yarisi
int Samilinyolu = 0;//at yarisi
int Furkaninyolu = 0;//at yarisi
int süre = 0;//at yarisi
int sayac = 0;//at yarisiint sayac = 0;
bool at1_tokezleme, at2_tokezleme, at3_tokezleme;
int atsecimimenu;//at yarisi


string names;//giveaway
int randomnumber;//giveaway randomnumberi
int linecount = 0;//giveaway


int random_number, verilenisimsayisi = 0;;//fstream ile cekilis uygulamasý
string isim, gelenisim, secilenisim, tekrarsecim;

class ülkeler
{

public:
    string ülkeisim2;
    string ülkeisim;
    string ozellik1;
    string ozellik2;
    string ozellik3;
    string ozellik4;

    ülkeler(string ülkeisim, string ülkeisim2, string ozellik1, string ozellik2, string ozellik3, string ozellik4)
        :ülkeisim(ülkeisim), ülkeisim2(ülkeisim2), ozellik1(ozellik1), ozellik2(ozellik2), ozellik3(ozellik3), ozellik4(ozellik4) {
    }


};
class at
{
public:

    string isim;
    int hýz;
    int aðýrlýk;
    at(string isim, int hýz, int aðýrlýk) :isim(isim), hýz(hýz), aðýrlýk(aðýrlýk) {}

};
void atyarisi()
{

}
void oran()
{
    /* cout << "\033[8;40;160t";*/  //tam ekran yapma kodu
    cout << "\033[1;100H"; // Satýr 14 ve sütun 140'a git
    cout << z << "/" << x << endl;


}
void dunya()

{
    vector<ülkeler> ülkelervector;
    vector<int>sayilar;

    ülkeler Ulke_Fransa("Fransa", "fransa", "mutfaklari peynir, sarap, croissant ve escargot gibi lezzetleriyle taninir.", "dunyada en çok konusulan dillerden biridir ve kuresel diplomasi dilidir.", "sanat ve kulturde buyuk bir mirasa sahiptir ve unlu sanatcilar ve yazarlar yetistirmistir.", "Eiffel Kulesi ");
    ülkeler Ulke_Japonya("Japonya", "japonya", "mutfagi dunya capinda deniz yemekleriyle taninir.", "teknolojik yeniliklerde oncudur ve elektronik urunlerin uretimi konusunda onemli bir rol oynamaktadýr.", "geleneksel kiyafeti olan kimono kulturel oneme sahiptir.", "Ulkenin dogal guzellikleri arasinda daglar, bahceler ve geleneksel tapinaklar bulunur.");
    ülkeler Ulke_Brezilya("Brezilya", "brezilya", "en buyuk Amazon yagmur ormanlarýna ev sahipligi yapar ", "Samba ve Capoeira gibi muzik ve dans formlari", "Rio Karnavalý'na ev sahipligi yapar", "futbolunun merkezi olarak kabul edilir");
    ülkeler Ulke_Italya("Italya", "italya", "Moda ve lüks markalarinin merkezlerinden biridir.", "Pizza ve makarna gibi lezzetli yiyecekleriyle unludur.", "Venedik'teki kanallar ve gondollarýyla tanýnýr.", "Pisa Kulesi");
    ülkeler Ulke_Meksika("Meksika", "meksika", "Maya ve Aztek medeniyetlerinin izlerini tasir", "Renkli Day of the Dead (Oluler Gunu) kutlamalariyla unludur", "Taco ve guacamole gibi mutfak lezzetleri vardir", "Chichen Itza gibi tarihi kalýntýlar UNESCO Dünya Mirasýnda yer alýr");
    ülkeler Ulke_Guneykore("Guneykore", "guneykore", "kimchi, bulgogi ve bibimbap gibi lezzetli yemekleriyle unludur.", "K-Pop müziði, dünya genelinde büyük bir popülerlik kazanmýþtýr.", "özgün bir karakter alfabesi olan Hangul ile yazýlýr.", "geleneksel hanok evleri arasýnda ilginç bir denge sunar.");
    ülkeler Ulke_Çin("Cin", "cin", "Mutfagý pirinc ile zengindir", "Dunyanin en kalabalik ulkesidir", "Istanbulda icinde adý gecen bir yapiya sahiptir", "Cerry Blossom Festivali ile unludur");
    ülkeler Ulke_Turkiye("Turkiye", "turkiye", "Meze ve cay gibi lezzetleri vardir", "Osmanli imparatorlugunun mirasý olan bir ulkedir", "Kebap ve baklava bilinen ünlü lezzetleriyle ünlüdür", "Musluman bir ulkedir");
    ülkeler Ulke_Kanada("Kanada", "kanada", "Dogal guzellikleri ve cok kulturlu yapýsýyla dikkat ceker", "Niagara selalesi unlu bir dogal harikasidir", "Mutfagi poutine,butter tarts ve maple syrup gibi lezzetleriyle bilinir", "Kuzey amerikada yer alir");
    ülkeler Ulke_Yunanistan("Yunanistan", "yunanistan", "Mutfagi moussaka ,souvlaki ve baklava gibi lezzetleriyle taninir", "Bir cok lezzetlerini Turkiyede kopyalamistir", "Antik tarihi ve adalariyla unludur", "Akropolis ve parthenon tapinagi önemli tarihi yapilaridir");
    ülkeler Ulke_Ingýltere("ingiltere", "Ingiltere", "Mutfagi fish ,cips ve puding ile bilinir", "Dunyada en cok konusan dile sahiptirler", "Shakespeare gibi ünlü yazarlar bu ulkeden gelmistir", "Big Ben ve Buckingham Sarayý tanýnmýþ simgelerdir.");

    ülkelervector.push_back(Ulke_Fransa);//0
    ülkelervector.push_back(Ulke_Japonya);//1
    ülkelervector.push_back(Ulke_Brezilya);//2
    ülkelervector.push_back(Ulke_Italya);//3
    ülkelervector.push_back(Ulke_Meksika);//4
    ülkelervector.push_back(Ulke_Guneykore);//5
    ülkelervector.push_back(Ulke_Çin);//6
    ülkelervector.push_back(Ulke_Turkiye);//7
    ülkelervector.push_back(Ulke_Kanada);//8
    ülkelervector.push_back(Ulke_Yunanistan);//9
    ülkelervector.push_back(Ulke_Ingýltere);//10



    while (true)
    {
        while (true)
        {
            int min = 0;
            int max = ülkelervector.size();
        aynisayi:
        digersoru:
            srand(static_cast<unsigned int>(time(nullptr)));
            int random_number = rand() % (max - min) + min;
            cout << random_number;
            Sleep(1000);
            for (int i = 0; i < sayilar.size(); i++)
            {
                if (random_number == sayilar[i])
                {
                    goto aynisayi;


                }
            }


        birdahaaynisoru:
            system("cls");

            cout << ülkelervector[random_number].ozellik1 << "\t\t"; oran(); cout << ülkelervector[random_number].ozellik2 << endl << ülkelervector[random_number].ozellik3 << endl << ülkelervector[random_number].ozellik4 << endl << "\n\n" << "Ulkeyi tahmin ediniz  :";
            cin >> tahmin;
            sayilar.push_back(random_number);//random seçilen sayi bir daha seçilmemek üzere sayilar vektörüne atýldý for döngüsünde eðer randomnumber ile sayilardaki elemanlar çakýþýyorsa birdaha çekecek

            if (ülkelervector[random_number].ülkeisim == tahmin || ülkelervector[random_number].ülkeisim2 == tahmin)
            {
                cout << "Tebrikler Ulkeyi Dogru Tahmin ettiniz" << endl;
                Sleep(1000);
                cout << "Diðer Soru Geliyor" << endl;
                z = z + 1;//kaç tane doðru bildiyse sað üstte yazdýrýcaz
                goto digersoru;//random sayi seçme kismina gider diðer soruyu belirlemek için
            }
            else
            {
                denemesayisi++;;//bir soruya 5 kere deneme hakký tanýnmýþtýr
                cout << "Yanlis tahmin ettiniz bir daha deneyiniz " << endl << "kalan deneme sayisi 4" << endl;
                Sleep(1000);
                system("cls");
                if (denemesayisi > 4)
                {
                    cout << "5 kere ulkeyi yanlis tahmin ettiniz.Oyuna tekrardan baslayiniz" << endl;
                    z = 0;//doðru tahmin edilmiþ soru sayisi 0'a düþtü
                    system("cls");
                    break;
                }
                goto birdahaaynisoru;

            }

            if (z == x)
            {
                cout << "Oyunu " << x << "Soru dogru bilerek tamamladiniz" << endl;
                break;
            }


        }




    }

}//dunya tahmin etme
void atlar()
{
    while (true) {

        system("cls");
    tekrarsec:
        cout << "Secmek istediginiz atin numarasini giriniz\n\n" << "1-Sungurbatur(tokezleme 4/10)\n" << "2-Devirhan(tokezleme 5/10)\n" << "3-Sahbaz(tokezleme 5/10)\n" << endl;
        cin >> atsecimimenu;
        if (atsecimimenu == 1)
        {
            system("cls");
            cout << "Sungurbatur secilmistir" << endl << "At yarisi basliyor" << endl;
            atyarisi();
        }
        if (atsecimimenu == 2)
        {
            system("cls");
            cout << "Devirhan secilmistir" << endl << "At yarisi basliyor" << endl;
            atyarisi();
        }
        if (atsecimimenu == 3)
        {
            system("cls");
            cout << "Sahbaz secilmistir" << endl << "At yarisi basliyor" << endl;
            atyarisi();
        }
        else
        {
            cout << "Boyle bir at yoktur birdaha deneyiniz" << endl;
            break;

        }

    }



}
void atyarisi_anamenu()
{
    char p = _getch();
    system("cls");
    o = 1;
    cout << "Bilinmesi Gerekenler" << endl << "1-At yarisi 150 yildiz birimi kadardir" << endl << "2-Butun atlar 4'un katý  yildiz birimine ulastiginda atlar aksilik yasamaya baslayabilir" << endl << "Enter basiniz" << endl << "3-Iyi Seyirler" << endl;
    if (o > 3)
    {
        o = 1;
    }
    if (o < 1)
    {
        o = 3;
    }
    if (p == 80) // yukarý tuþ
    {
        o = o + 1;
    }
    if (p == 72)//aþa tuþ
    {
        o = o - 1;;
    }
    if (p == 27)
    {
        int main();

    }
    if (o == 1)//at yarisini baslatir
    {
        system("cls");
        cout << "--->At yarisini baslat" << endl;
        cout << "Guncel atlari goruntule " << endl;
        cout << "cikis" << endl;
        if (p == 13)
        {
            system("cls");
            Sleep(1000);
            cout << "At yarisi basliyor.." << endl;
            atyarisi();
        }
    }
    if (o == 2)//guncel atlarý göruntuler
    {
        cout << "At yarisini baslat" << endl;
        cout << "--->Guncel atlari goruntule " << endl;
        cout << "cikis" << endl;
        if (p == 13)
        {
            system("cls");
            atlar();
        }
    }
    if (o == 3)//cikis
    {
        cout << "At yarisini baslat" << endl;
        cout << "Guncel atlari goruntule " << endl;
        cout << "--->cikis" << endl;
        if (p == 13)
        {
            system("cls");
            cout << "Cikis yapiliyor.." << endl;
            int main();

        }
    }


}
void cekilis()
{

    srand(static_cast<unsigned int>(std::time(nullptr)));
    ofstream dosya("dosya.txt");//dosya.txt adýnda txt oluþturur.
    while (isim != "run")
    {
        cout << "Eger run yazarsaniz, yazdiginiz kisiler arasindan biri rastgele secilecektir\n" << endl;
        cout << "Isim veriniz  :";
        cin >> isim;
        dosya << isim << endl;
        system("cls");
        if (isim != "run")// run girdisini verilere dahil etme
        {
            verilenisimsayisi = verilenisimsayisi + 1;
        }
        system("cls");
    }
    dosya.close();
    cout << "Verilen isimler asagidaki gibidir" << "Kura cekiliyor.." << endl;
    ifstream dosyaoku("dosya.txt");//dosya okuma
    while (dosyaoku >> isim)
    {

        cout << isim << "\n" << endl;

    }
    cout << "\"run\"kelimesi cekilisten cekilmeyecektir" << endl;
    Sleep(2000);
    int randomNum = rand() % verilenisimsayisi;//verilenisimsayisi kadar sayidan random sayi seçer 
    Sleep(500);
    dosyaoku.clear();//hatalarý yok eder
    dosyaoku.seekg(0, ios::beg);//dosyayý baþtan itibaren okumasýný saglar
    for (int i = 0; i <= randomNum; i++)//random sayiyi bulur ve ekrana o satiri yazdýrýr.
    {
        dosyaoku >> gelenisim;
        if (gelenisim == "run")//eger kuradan run kelimesi secilirse bastan ceker.
        {
            // Eðer 'run' çýkarsa tekrar dön ve baþka bir isim seç
            randomNum = rand() % verilenisimsayisi;
            i = -1; // i yi -1 e ayarladýgý icin döngü basinda 0 oldugundan döngü tekrardan baslar
        }
    }
    system("cls");
    cout << "Cekilisten cikan sansli kisi :" << gelenisim;//ve sonuc
    Sleep(3000);


}
int main()
{
    vector<string> lines;
    srand(static_cast<unsigned int>(std::time(nullptr)));
    system("cls");
    int Girissecim;
    int girissecimtus = 1;
    cout << "--Oyun Platformu--\n" << endl;
    cout << "Secenek secmek icin asagi veya yukarý tusuna basiniz\n\n" << endl;
    cout << "Dunya Tahmin Etme Oyunu " << endl;
    cout << "At yarisi" << endl;
    cout << "Giveaway(fstream)" << endl;
    cout << "Giveaway(vector)" << endl;
    cout << "Oyun Kurallari" << endl;
    cout << "Cikis" << endl;

    while (true)
    {
        while (true)
        {
        basa:

            char c = _getch();
            if (y > 6)
            {
                y = 1;

            }
            if (y < 1)
            {
                y = 6;
            }

            if (c == 27)//esc tus basa gider
            {
                goto basa;

            }
            if (c == 80) // yukarý tuþ
            {
                y = y + 1;
            }
            if (c == 72)//aþa tuþ
            {
                y = y - 1;;
            }

        anamenu:
        exit:
            // cout << "-->Dunya Tahmin Etme Oyunu " << endl;
            // cout << "At yarisi" << endl;
            // cout << "Giveaway(fstream)" << endl;
            // cout << "Giveaway(vector)" << endl;
            // cout << "Oyun Kurallari" << endl;
            // cout << "Cikis" << endl;
            if (y == 1)//dunya tahmin******
            {

                system("cls");
                cout << "-->Dunya Tahmin Etme Oyunu " << endl;
                cout << "At yarisi" << endl;
                cout << "Giveaway(fstream)" << endl;
                cout << "Giveaway(vector)" << endl;
                cout << "Oyun Kurallari" << endl;
                cout << "Cikis" << endl;
                if (c == 13) {
                    system("cls");

                    cout << "Anamenu icin yukari veya asagi tusuna basiniz" << "\n\n" << endl;
                    cout << "1-Dunyadaki ulkeler hakkinda bir kac bilgi verilecektir ve o ulkeyi tahmin etmeye calisacaksiniz" << endl;
                    cout << "2-Eger 5 kere yanlis tahmin edersiniz oyuna sifirlanacaktir" << endl;
                    cout << "Basarilar" << endl;
                    Sleep(3000);
                    dunya();
                    break;
                }
            }
            else if (y == 2)//at yarisi*******
            {
                system("cls");
                cout << "Dunya Tahmin Etme Oyunu " << endl;
                cout << "-->At yarisi" << endl;
                cout << "Giveaway(fstream)" << endl;
                cout << "Giveaway(vector)" << endl;
                cout << "Oyun Kurallari" << endl;
                cout << "Cikis" << endl;
                if (c == 13)
                {
                    while (true) {

                        system("cls");
                    tekrarsec:
                        cout << "Secmek istediginiz atin numarasini giriniz\n\n" << "1-Sungurbatur(tokezleme 4/10)\n" << "2-Devirhan(tokezleme 5/10)\n" << "3-Sahbaz(tokezleme 5/10)\n" << endl;
                        cin >> atsecimimenu;
                        if (atsecimimenu == 1)
                        {
                            system("cls");
                            cout << "Sungurbatur secilmistir" << endl << "At yarisi basliyor" << endl;
                            Sleep(1000);
                            break;

                        }
                        if (atsecimimenu == 2)
                        {
                            system("cls");
                            cout << "Devirhan secilmistir" << endl << "At yarisi basliyor" << endl;
                            Sleep(1000);
                            break;


                        }
                        if (atsecimimenu == 3)
                        {
                            system("cls");
                            cout << "Sahbaz secilmistir" << endl << "At yarisi basliyor" << endl;
                            Sleep(1000);
                            break;

                        }
                        else
                        {
                            cout << "Boyle bir at yoktur birdaha deneyiniz" << endl;
                            break;

                        }






                        break;
                    }

                    while (true)
                    {
                        at at1("Sungurbatur", 3, 9);//hýz9 aðýrlýk 9
                        at at2("Devirhan", 3, 9);
                        at at3("Sahbaz", 3, 9);
                        system("cls");
                        cout << "AT YARISI BASLIYOR";
                        Sleep(1000);
                        while (true)
                        {
                            sayac++;
                            if (sayac % 4 == 0)
                            {
                                srand(time(0)); // Rastgele sayý üreteciyi baþlat

                                int randomNum = rand() % 3 + 1;
                                /*int tokezleme = rand() % 3+ 1;*/
                                /*return (rand() % 100) < 3;*/


                                if (randomNum == 1)
                                    at1.hýz = -1;
                                if (randomNum == 2)
                                    at2.hýz = -1;
                                if (randomNum == 3)
                                    at3.hýz = -1;

                                cout << randomNum << ". at dokezledi" << endl;

                            }
                            system("cls");
                            süre++;//atlarin aldýgý yol sürekli artýcak ve aþþaðýda ne kadar artýcaðýný belirticez

                            Alperinyolu = at1.hýz + Alperinyolu;//alperinyolu ata verdiðimiz hýz kadar alperinyoluna eklenicek
                            Samilinyolu = at2.hýz + Samilinyolu;
                            Furkaninyolu = at3.hýz + Furkaninyolu;

                            for (int i = 0; i <= Alperinyolu; i++)
                            {
                                cout << "*";
                            }
                            cout << at1.isim << endl << endl;
                            for (int i = 0; i <= Samilinyolu; i++)
                            {
                                cout << "*";
                            }
                            cout << at2.isim << endl << endl;
                            for (int i = 0; i <= Furkaninyolu; i++)
                            {
                                cout << "*";
                            }
                            cout << at3.isim << endl << endl;
                            //jokeyin kirbaci düþtü,at tökezledi jokey attan düþtü

                            Sleep(200);
                            if (at1.hýz |= 3)
                            {
                                at1.hýz = 3;
                            }

                            if (at2.hýz |= 3)
                            {
                                at2.hýz = 3;
                            }

                            if (at3.hýz |= 3)
                            {
                                at3.hýz = 3;
                            }

                        }
                        if (Furkaninyolu || Samilinyolu || Alperinyolu >= 60)
                        {
                            cout << "KAZANDI";
                            Sleep(2000);
                            break;
                        }












                        break;

                    }
                }

            }
            else if (y == 3)//fstream cekilis
            {

                system("cls");
                cout << "Dunya Tahmin Etme Oyunu " << endl;
                cout << "At yarisi" << endl;
                cout << "-->Giveaway(fstream)" << endl;
                cout << "Giveaway(vector)" << endl;
                cout << "Oyun Kurallari" << endl;
                cout << "Cikis" << endl;
                if (c == 13)
                {
                    system("cls");
                    while (true)
                    {
                    tekrarcekilis:
                        cekilis();
                        system("cls");
                    tekrarsec1:
                        cout << "Tekrardan cekilis yapmak icin (y/n)" << endl;
                        cin >> tekrarsecim;
                        if (tekrarsecim == "y" || tekrarsecim == "Y")
                        {
                            goto tekrarcekilis;
                        }
                        else if (tekrarsecim == "n" || tekrarsecim == "N")
                        {
                            goto anamenu;
                        }
                        else
                        {

                            cout << "\n(y/n) giriniz" << endl;
                            goto tekrarsec1;
                        }


                    }
                }

            }
            else if (y == 4)//vector cekilis
            {
                system("cls");
                cout << "Dunya Tahmin Etme Oyunu " << endl;
                cout << "At yarisi" << endl;
                cout << "Giveaway(fstream)" << endl;
                cout << "-->Giveaway(vector)" << endl;
                cout << "Oyun Kurallari" << endl;
                cout << "Cikis" << endl;
                if (c == 13)
                {
                    system("cls");
                    while (true)
                    {
                        //of stream deki dosya ile if streamdaki dosya  ayný olamaz dosyaoku yazdýk


                        srand(time(0));
                        cout << "welcome to the giveaway " << endl;
                        cout << "Write names and then write \"run\" to choose a name" << endl;
                        cout << "if you want to quit from app type quit" << endl;
                        Sleep(1000);


                        while (true)
                        {
                            system("cls");
                            cout << "Type the names you want to choose from  :" << endl;
                            cin >> names;

                            if (names == "run")
                            {
                                break;
                            }
                            else if (names == "quit")
                            {
                                break;
                            }
                            lines.push_back(names);


                        }
                        cout << "Loading.." << endl;
                        Sleep(500);
                        randomnumber = rand() % lines.size();

                        system("cls");
                        cout << "cekilisten secilen sanli kisi  :" << lines[randomnumber];
                        Sleep(1000);

                        break;

                    }

                }
            }
            else if (y == 5)//kurallar
            {
                system("cls");
                cout << "Dunya Tahmin Etme Oyunu " << endl;
                cout << "At yarisi" << endl;
                cout << "Giveaway(fstream)" << endl;
                cout << "Giveaway(vector)" << endl;
                cout << "-->Oyun Kurallari" << endl;
                cout << "Cikis" << endl;

                if (c == 13)
                {
                    system("cls");
                    cout << "Kurallar\n\n" << "1-Dunya tahmin etmede 5 kere yanlis tahmin ederseniz oyun bastan baslar" << endl << "2-Ingilizce karakter kullanmaya calisin aksi takdirde yanlis kabul edecektir\n" << "3-20 soru dogru bildiginiz zaman oyun bitecektir\n" << "4-At yarisinda 3 attan bir tanesini seciyorsunuz hepsinin tokezleme oraný aynidir\n" << "Iyý Kumarlar\n" << "Yukari veya asagi tusuna basip anamenu gidiniz" << endl;

                    if (c == 27)
                    {
                        system("cls");
                        goto anamenu;
                    }

                }
            }
            else if (y == 6)//cikis
            {
                system("cls");
                cout << "Dunya Tahmin Etme Oyunu " << endl;
                cout << "At yarisi" << endl;
                cout << "Giveaway(fstream)" << endl;
                cout << "Giveaway(vector)" << endl;
                cout << "Oyun Kurallari" << endl;
                cout << "-->Cikis" << endl;

                if (c == 13)
                {
                    system("cls");
                    cout << "Cikis icin \"evet\" anamenu icin \"hayir\" yaziniz" << endl;
                    cin >> cikis;
                    if (cikis == "evet")
                    {
                        system("cls");
                        cout << "cikis yapiliyor..." << endl;
                        Sleep(1000);
                        return 0;

                    }
                    else if (cikis == "hayir")
                    {
                        y = 0;
                        system("cls");
                        cout << "Anamenuye Donuluyor" << endl;
                        Sleep(500);
                        goto anamenu;
                    }
                }

            }





        }




    }



}