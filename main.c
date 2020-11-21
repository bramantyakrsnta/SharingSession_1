#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

typedef char string [100];

typedef struct
{
	string namaAba;
	string namaBram;
	string ultahAba;
	string ultahBram;
	int umurAba;
	string negaraAba;
	string negaraBram;
	string pertamaKetemu;
	string pertamaDate;
	string tempatNembak;
	string namaTeja;
	string pertamaTrip;
	string kapanTrip;
	string alasanNangis;
	string hadiah;
	string cukupTidak;
}Beginning;

typedef struct
{
	string thingMe;
	string thingDontMe;
	string thingYou;
	string thingDontYou;
	string worstMe;
	string worstYou;
	string moment;
	string reasonsLove;
	string reasonsFight;
	string reasonsNumberOne;
	int scale;
	string BTS;
}Middle;

typedef struct
{
	string hopeYou;
	string hopeMe;
	string future;
	string dream;
	string goal;
}Thankyou;

void main()
{
	system("mode 650"); //------------------------------------------ begitu running langsung alt+enter//
	
	Beginning B;
	Middle M;
	Thankyou T;
	FILE *bacaFile, *tulisFile;
	
	string nama, pilihan1, pilihan2, pilihan3;
	int pilihan, prizes, cek=0, prizesCek=0;
	
	printf("\n\n\tInsert your name : "); fflush(stdin); gets(nama);
	
	do
	{
		system("cls");
		printf("\n\n\t\t[$]===> Aba's Birthday Program <===[$]"); //Judul//
		
		printf("\n\n\tDear %s,", nama); //Pembukaan//
		printf("\n\tThe one i always look up to,");
		printf("\n\tThe one who loves me the way i am,");
		printf("\n\tThe one who take care of me,");
		printf("\n\tThe one who stay by my side no matter how the situation is");
		printf("\n\tThe one who cheer me up when im down");
		printf("\n\tThe one who i really love");
		printf("\n\tMy Friend, My Enemy, My Lover, a shoulder to lean on,");
		printf("\n\tMy Everything");
		
		printf("\n\n\tWelcome to Aba's Birthday Program!");
		printf("\n\n\tSo, You need to get in all of the menu down below");
		printf("\n\tEvery Menu has a Question that you need to answer");
		printf("\n\tIn case you already answer all of the question");
		printf("\n\tYou will get a prize!");
		
//------------------------------------------------------------------------------------------------------------------------------//
		
		printf("\n\n\tRemember :");
		printf("\n\t   You = Aba");
		printf("\n\t   Me = Bram");
		
		printf("\n\n\tAre you ready? i bet you are");
		
		if(cek==4)
		{
			printf("\n\n\t\t\t\t\t\t\t\t\t\t[!] Insert your birthday below");
			printf("\n\t\t\t\t\t\t\t\t\t\tFor more surprises [!]");
		}
		
		printf("\n\n\tSelect one of this :");
		printf("\n\t   1. The Beginning");
		printf("\n\t   2. Back and Forth");
		printf("\n\t   3. Thank You");
		printf("\n\t   4. Prizes");
		printf("\n\t   0. Exit");
		
		
		printf("\n\n\t(Choose the number) ---> "); scanf("%d", &pilihan);
		
		switch(pilihan)
		{
			case 1: if(cek==0)
					{
						system("cls");
						printf("\n\n\t===> The Beginning <===");
						
						printf("\n\n\tWelcome to the First Menu, %s", nama);
						printf("\n\n\tIn this 'The Beginning' menu");
						printf("\n\tThere are questions that you need to answer");
						printf("\n\tAt the end of the menu");
						printf("\n\tYou will get a Letter for your birthday gift");
						
						printf("\n\n\tAre you ready? (y/n) : "); fflush(stdin); gets(pilihan1);
						if(strcmpi(pilihan1, "y")==0)
						{
							bacaFile = fopen("Menu 1.txt", "rb");
							if(bacaFile==NULL)
							{
								tulisFile = fopen("Menu 1.txt", "w");
								if(tulisFile!=NULL)
								{
									system("cls");
									printf("\n\n\tAight, here you goo..\n\n");
									
									do
									{
										printf("\t1. Your Name : "); fflush(stdin); gets(B.namaAba);
									}while(strcmpi(B.namaAba, "Ni Wayan Prabasiwi Kirana")!=0 || strlen(B.namaAba)==0);
									do
									{
										printf("\t2. My Name : "); fflush(stdin); gets(B.namaBram);
									}while(strcmpi(B.namaBram, "Kadek Bramantya Krisnanta Putra")!=0 || strlen(B.namaBram)==0);
									do
									{
										printf("\t3. Your Birthday? (dd/bulan/yyyy) : "); fflush(stdin); gets(B.ultahAba);
									}while(strcmpi(B.ultahAba, "25 Juli 2000")!=0 || strlen(B.ultahAba)==0);
									do
									{
										printf("\t4. My Birthday? (dd/bulan/yyyy) : "); fflush(stdin); gets(B.ultahBram);
									}while(strcmpi(B.ultahBram, "21 September 2000")!=0 || strlen(B.ultahBram)==0);
									do
									{
										printf("\t5. How old are you now? (number) : "); scanf("%d", &B.umurAba);
									}while(B.umurAba!=20);
									do
									{
										printf("\t6. Where are you from? (country) : "); fflush(stdin); gets(B.negaraAba);
									}while(strcmpi(B.negaraAba, "Indonesia")!=0 || strlen(B.negaraAba)==0);
									do
									{
										printf("\t7. Where am i from? (country) : "); fflush(stdin); gets(B.negaraBram);
									}while(strcmpi(B.negaraBram, "Indonesia")!=0 || strlen(B.negaraBram)==0);
									do
									{
										printf("\t8. Where did we first meet? (place) : "); fflush(stdin); gets(B.pertamaKetemu);
										if(strcmpi(B.pertamaKetemu, "Smansa")!=0)
										{
											printf("\t\t[!] Pilihan : Cak Iwan, Smansa, Sushi tei\n\n");
										}
									}while(strcmpi(B.pertamaKetemu, "Smansa")!=0 || strlen(B.pertamaKetemu)==0);
									do
									{
										printf("\t9. Where did we first go on a date? (place) : "); fflush(stdin); gets(B.pertamaDate);
										if(strcmpi(B.pertamaDate, "Cak iwan")!=0)
										{
											printf("\t\t[!] Pilihan : Cak Iwan, Smansa, Sushi tei\n\n");
										}
									}while(strcmpi(B.pertamaDate, "Cak iwan")!=0 || strlen(B.pertamaDate)==0);
									do
									{
										printf("\t10. Where did i propose you to be my GF? (place) : "); fflush(stdin); gets(B.tempatNembak);
										if(strcmpi(B.tempatNembak, "Sushi Tei")!=0)
										{
											printf("\t\t[!] Pilihan : Cak Iwan, Smansa, Sushi tei\n\n");
										}
									}while(strcmpi(B.tempatNembak, "Sushi Tei")!=0 || strlen(B.tempatNembak)==0);
									do
									{
										printf("\t11. Who helped me when i propose you? (short name) : "); fflush(stdin); gets(B.namaTeja);
									}while(strcmpi(B.namaTeja, "Teja")!=0 || strlen(B.namaTeja)==0);
									do
									{
										printf("\t12. Where did we go for our first trip? (place) : "); fflush(stdin); gets(B.pertamaTrip);
										if(strcmpi(B.pertamaTrip, "Sekumpul Waterfall")!=0)
										{
											printf("\t\t[!] Pilihan : Tegenungan Waterfall, Ubud, Sekumpul Waterfall\n\n");
										}
									}while(strcmpi(B.pertamaTrip, "Sekumpul Waterfall")!=0 || strlen(B.pertamaTrip)==0);
									do
									{
										printf("\t13. When did we go for our first trip? (dd/bulan/yyyy) : "); fflush(stdin); gets(B.kapanTrip);
										if(strcmpi(B.kapanTrip, "17 Agustus 2017")!=0)
										{
											printf("\t\t[!] Pilihan : 18 Agustus 2017, 17 Agustus 2018, 17 Agustus 2017\n\n");
										}
									}while(strcmpi(B.kapanTrip, "17 Agustus 2017")!=0 || strlen(B.kapanTrip)==0);
									do
									{
										printf("\t14. Why did you cry at that time? : "); fflush(stdin); gets(B.alasanNangis);
									}while(strlen(B.alasanNangis)==0);
									do
									{
										printf("\t15. What do you want for a Birthday Gift? : "); fflush(stdin); gets(B.hadiah);
									}while(strcmpi(B.hadiah, "Nike Air Force 1")!=0 || strlen(B.hadiah)==0);
									do
									{
									printf("\t16. Am i good enough for you? : "); fflush(stdin); gets(B.cukupTidak);
									}while(strlen(B.cukupTidak)==0);
									
									fwrite(&B, sizeof(B), 1, tulisFile);
									fclose(tulisFile);
										getch();
										
									system("cls");
									cek=1;
									printf("\n\n\tWoww, seems like you answer all of that correctly"); //Cerita//
									printf("\n\tI'm so proud of you bbyyy <3");
									
									printf("\n\n\tHere all of your answer :");
									printf("\n\t1. Your Name : %s", B.namaAba);
									printf("\n\t2. My Name : %s", B.namaBram);
									printf("\n\t3. Your Birthday : %s", B.ultahAba);
									printf("\n\t4. My Birthday : %s", B.ultahBram);
									printf("\n\t5. How old are you : %d", B.umurAba);
									printf("\n\t6. Where are you from : %s", B.negaraAba);
									printf("\n\t7. Where am i from : %s", B.negaraBram);
									printf("\n\t8. Where did we first meet : %s", B.pertamaKetemu);
									printf("\n\t9. Where did we first go on a date : %s", B.pertamaDate);
									printf("\n\t10. Where did i propose you to be my GF : %s", B.tempatNembak);
									printf("\n\t11. Who helped me when i propose you? : %s", B.namaTeja);
									printf("\n\t12. Where did we go for our first trip : %s", B.pertamaTrip);
									printf("\n\t13. When did we go for our first trip? : %s", B.kapanTrip);
									printf("\n\t14. Why did you cry at that time : %s", B.alasanNangis);
									printf("\n\t15. What do you want for a Birthday Gift : %s", B.hadiah);
									printf("\n\t16. Am i good enough for you : %s", B.cukupTidak);
									
									printf("\n\n\tWKWKWKWKWKWKKWKWKWKWK"); //Cerita//
									printf("\n\tIt's really making me reminiscing about our good old times");
									printf("\n\tKalo ditanya yang paling berkesan sih pastinya yang");
									printf("\n\tPas ke Sekumpul Waterfall trus pulangnya bener2 intens banget WKWK");
									printf("\n\n\tIt's okay bybyy <3");
									printf("\n\tI still Love You <3");
										getch();
									
									system("cls");
									printf("\n\n\tBecause you already pass the First Menu");
									printf("\n\tYou got a letter");
									printf("\n\tand the letter is 'A'");
									
									printf("\n\n\tLet's go back to the main menu");
									printf("\n\n\t<---");
								}
							}else{
								while(fread(&B, sizeof(B), 1, bacaFile)==1)
								{
									system("cls");
									cek=1;
									printf("\n\n\tWoww, seems like you answer all of that correctly"); //Cerita//
									printf("\n\tI'm so proud of you bbyyy <3");
									
									printf("\n\n\tHere all of your answer :");
									printf("\n\t1. Your Name : %s", B.namaAba);
									printf("\n\t2. My Name : %s", B.namaBram);
									printf("\n\t3. Your Birthday : %s", B.ultahAba);
									printf("\n\t4. My Birthday : %s", B.ultahBram);
									printf("\n\t5. How old are you : %d", B.umurAba);
									printf("\n\t6. Where are you from : %s", B.negaraAba);
									printf("\n\t7. Where am i from : %s", B.negaraBram);
									printf("\n\t8. Where did we first meet : %s", B.pertamaKetemu);
									printf("\n\t9. Where did we first go on a date : %s", B.pertamaDate);
									printf("\n\t10. Where did i propose you to be my GF : %s", B.tempatNembak);
									printf("\n\t11. Who helped me when i propose you? : %s", B.namaTeja);
									printf("\n\t12. Where did we go for our first trip : %s", B.pertamaTrip);
									printf("\n\t13. When did we go for our first trip? : %s", B.kapanTrip);
									printf("\n\t14. Why did you cry at that time : %s", B.alasanNangis);
									printf("\n\t15. What do you want for a Birthday Gift : %s", B.hadiah);
									printf("\n\t16. Am i good enough for you : %s", B.cukupTidak);
									
									printf("\n\n\tWKWKWKWKWKWKKWKWKWKWK"); //Cerita//
									printf("\n\tIt's really making me reminiscing about our good old times");
									printf("\n\tKalo ditanya yang paling berkesan sih pastinya yang");
									printf("\n\tPas ke Sekumpul Waterfall trus pulangnya bener2 intens banget WKWK");
									printf("\n\n\tIt's okay bybyy <3");
									printf("\n\tI still Love You <3");
										getch();
									
									system("cls");
									printf("\n\n\tBecause you already pass the First Menu");
									printf("\n\tYou got a letter");
									printf("\n\tand the letter is 'A'");
									
									printf("\n\n\tLet's go back to the main menu");
									printf("\n\n\t<---");
								}
								fclose(bacaFile);
							}
						}else{
							printf("\n\n\t[!] Why you do that to me :(");
						}
					}else{
						system("cls");
						printf("\n\n\t[!] Oopsie, you cant enter this menu [!]");
						printf("\n\t[!] it is what it is");
					}
				getch();
			break;
			case 2: if(cek==1)
					{
						system("cls");
						printf("\n\n\t===> Back and Forth <===");
						
						printf("\n\n\tWelcome to the Second Menu, %s", nama);
						printf("\n\n\tIn this 'Back and Forth' menu");
						printf("\n\tI want you to be honest with yourself, okay?");
						printf("\n\tI bet all of the questions will be easy");
						printf("\n\tand you can answer it less than 10 minutes");
						
						printf("\n\n\tAre you ready? (y/n) : "); fflush(stdin); gets(pilihan2);
						if(strcmpi(pilihan2, "y")==0)
						{
							bacaFile = fopen("Menu 2.txt", "rb");
							if(bacaFile==NULL)
							{
								tulisFile = fopen("Menu 2.txt", "w");
								if(tulisFile!=NULL)
								{
									system("cls");
									printf("\n\n\tAight, here you goo..\n\n");
									
									do
									{
										printf("\t1. Things you like about me : "); fflush(stdin); gets(M.thingMe);
									}while(strlen(M.thingMe)==0);
									do
									{
										printf("\t2. Things you dont like about me : "); fflush(stdin); gets(M.thingDontMe);
									}while(strlen(M.thingDontMe)==0);
									do
									{
										printf("\t3. Things you like about yourself : "); fflush(stdin); gets(M.thingYou);
									}while(strlen(M.thingYou)==0);
									do
									{
										printf("\t4. Things you dont like about yourself : "); fflush(stdin); gets(M.thingDontYou);
									}while(strlen(M.thingDontYou)==0);
									do
									{
										printf("\t5. The worst thing i've done to you : "); fflush(stdin); gets(M.worstMe);
									}while(strlen(M.worstMe)==0);
									do
									{
										printf("\t6. The worst thing you've done to me : "); fflush(stdin); gets(M.worstYou);
									}while(strlen(M.worstYou)==0);
									do
									{
										printf("\t7. If you can turn back the time, what moment will you repeat? : "); fflush(stdin); gets(M.moment);
									}while(strlen(M.moment)==0);
									do
									{
										printf("\t8. Reasons why you love me : "); fflush(stdin); gets(M.reasonsLove);
									}while(strlen(M.reasonsLove)==0);
									do
									{
										printf("\t9. Reasons why we fight all this time : "); fflush(stdin); gets(M.reasonsFight);
									}while(strlen(M.reasonsFight)==0);
									do
									{
										printf("\t10. Reasons why you always be my number one : "); fflush(stdin); gets(M.reasonsNumberOne);
									}while(strlen(M.reasonsNumberOne)==0);
									do
									{
										printf("\t11. In a scale from 1 to 100, how much you love me? : "); scanf("%d", &M.scale);
										if(M.scale!=100)
										{
											printf("\t\t[!] Pilihan : 100\n\n");
										}
									}while(M.scale!=100);
									do
									{
										printf("\t12. Me or BTS? (>_<) : "); fflush(stdin); gets(M.BTS);
										if(strcmpi(M.BTS, "Both")!=0)
										{
											printf("\t\t[!] Pilihan : Both, Keduanya, Semuanya\n\n");
										}
									}while(strcmpi(M.BTS, "Both")!=0 || strlen(M.BTS)==0);
									
									fwrite(&M, sizeof(M), 1, tulisFile);
									fclose(tulisFile);
										getch();
										
									system("cls");
									cek=2;
									printf("\n\n\tWoww, seems like you answer all of that correctly"); //Cerita//
									printf("\n\tI'm so proud of you bbyyy <3");
									
									printf("\n\n\tHere all of your answer :");
									printf("\n\t1. Things you like about me : %s", M.thingMe);
									printf("\n\t2. Things you dont like about me : %s", M.thingDontMe);
									printf("\n\t3. Things you like about yourself : %s", M.thingYou);
									printf("\n\t4. Things you dont like about yourself : %s", M.thingDontYou);
									printf("\n\t5. The worst thing i've done to you : %s", M.worstMe);
									printf("\n\t6. The worst thing you've done ti me : %s", M.worstYou);
									printf("\n\t7. If you can turn back the time, what moment will you repeat? : %s", M.moment);
									printf("\n\t8. Reasons why you love me : %s", M.reasonsLove);
									printf("\n\t9. Reasons why we fight all this time : %s", M.reasonsFight);
									printf("\n\t10. Reasons why you always be my number one : %s", M.reasonsNumberOne);
									printf("\n\t12. In a scale from 1 to 100, how much you love me? : %d", M.scale);
									printf("\n\t13. Me or BTS? (>_<) : %s", M.BTS); 
									
									printf("\n\n\tYaaa.... whatever the answer"); //Cerita//
									printf("\n\tI Still Love You kokk wkwkwkwk");
									printf("\n\tAku jadi kangen kalo jalan-jalan berdua sama ke di mobil");
									printf("\n\tTerus ke tbtb gila gitu denger lagu BTS and langsung joget-joget");
									printf("\n\tMasi banyak sih sebenarnya yang aku kangenin kalo jalan-jalan sama ke");
									printf("\n\n\tHope that COVID-19 will disappear asap");
										getch();
									
									system("cls");
									printf("\n\n\tBecause you already pass the Second Menu");
									printf("\n\tYou got a letter");
									printf("\n\tand the letter is 'F'");
									
									printf("\n\n\tLet's go back to the main menu");
									printf("\n\n\t<---");	
								}
							}else{
								while(fread(&M, sizeof(M), 1, bacaFile)==1)
								{
									system("cls");
									cek=2;
									printf("\n\n\tWoww, seems like you answer all of that correctly"); //Cerita//
									printf("\n\tI'm so proud of you bbyyy <3");
									
									printf("\n\n\tHere all of your answer :");
									printf("\n\t1. Things you like about me : %s", M.thingMe);
									printf("\n\t2. Things you dont like about me : %s", M.thingDontMe);
									printf("\n\t3. Things you like about yourself : %s", M.thingYou);
									printf("\n\t4. Things you dont like about yourself : %s", M.thingDontYou);
									printf("\n\t5. The worst thing i've done to you : %s", M.worstMe);
									printf("\n\t6. The worst thing you've done ti me : %s", M.worstYou);
									printf("\n\t7. If you can turn back the time, what moment will you repeat? : %s", M.moment);
									printf("\n\t8. Reasons why you love me : %s", M.reasonsLove);
									printf("\n\t9. Reasons why we fight all this time : %s", M.reasonsFight);
									printf("\n\t10. Reasons why you always be my number one : %s", M.reasonsNumberOne);
									printf("\n\t12. In a scale from 1 to 100, how much you love me? : %d", M.scale);
									printf("\n\t13. Me or BTS? (>_<) : %s", M.BTS); 
									
									printf("\n\n\tYaaa.... whatever the answer"); //Cerita//
									printf("\n\tI Still Love You kokk wkwkwkwk");
									printf("\n\tAku jadi kangen kalo jalan-jalan berdua sama ke di mobil");
									printf("\n\tTerus ke tbtb gila gitu denger lagu BTS and langsung joget-joget");
									printf("\n\tMasi banyak sih sebenarnya yang aku kangenin kalo jalan-jalan sama ke");
									printf("\n\n\tHope that COVID-19 will disappear asap");
										getch();
									
									system("cls");
									printf("\n\n\tBecause you already pass the Second Menu");
									printf("\n\tYou got a letter");
									printf("\n\tand the letter is 'F'");
									
									printf("\n\n\tLet's go back to the main menu");
									printf("\n\n\t<---");
								}
							}
							fclose(bacaFile);
						}else{
							printf("\n\n\t[!] Why you do that to me :(");
						}
					}else{
						system("cls");
						printf("\n\n\t[!] Oopsie, you cant enter this menu [!]");
						printf("\n\t[!] it is what it is");
					}
				getch();
			break;
			case 3: if(cek==2)
					{
						system("cls");
						printf("\n\n\t===> Thank You <===");
						
						printf("\n\n\tWelcome to the Third Menu, %s", nama);
						printf("\n\n\tIn this Thank You menu");
						printf("\n\tI have a few question for you, again");
						printf("\n\tJangan bosen yeeee (>_<)");
						
						printf("\n\n\tAre you ready? (y/n) : "); fflush(stdin); gets(pilihan3);
						if(strcmpi(pilihan3, "y")==0)
						{
							bacaFile = fopen("Menu 3.txt", "rb");
							if(bacaFile==NULL)
							{
								tulisFile = fopen("Menu 3.txt", "w");
								if(tulisFile!=NULL)
								{
									system("cls");
									printf("\n\n\tAight, here you goo..\n\n");
									
									do
									{
										printf("\t1. What is your hope for yourself : "); fflush(stdin); gets(T.hopeYou);
									}while(strlen(T.hopeYou)==0);
									do
									{
										printf("\t2. What is your hope for me : "); fflush(stdin); gets(T.hopeMe);
									}while(strlen(T.hopeMe)==0);
									do
									{
										printf("\t3. What do you want in the future : "); fflush(stdin); gets(T.future);
									}while(strlen(T.future)==0);
									do
									{
										printf("\t4. What is your biggest dream : "); fflush(stdin); gets(T.dream);
									}while(strlen(T.dream)==0);
									do
									{
										printf("\t5. What is your live goal : "); fflush(stdin); gets(T.goal);
									}while(strlen(T.goal)==0);
									
									fwrite(&T, sizeof(T), 1, tulisFile);
									fclose(tulisFile);
										getch();
										
									system("cls");
									cek=3;
									printf("\n\n\tWoww, seems like you answer all of that correctly"); //Cerita//
									printf("\n\tI'm so proud of you bbyyy <3");
									
									printf("\n\n\tHere all of your answer :");
									printf("\n\t1. What is your hope for yourself : %s", T.hopeYou);
									printf("\n\t2. What is your hope for me : %s", T.hopeMe);
									printf("\n\t3. What do you want in the future : %s", T.future);
									printf("\n\t4. What is your biggest dream : %s", T.dream);
									printf("\n\t5. What is your live goal : %s", T.goal);
									
									printf("\n\n\tWoww, you have a big dream and i appreciate it!");
									
									printf("\n\n\tHopefully, everything u've mentioned will become true");
									printf("\n\tRemember to always Pray to God");
									printf("\n\tand Do your best!");
										getch();
										
									system("cls");
									printf("\n\n\tBecause you already pass the Third Menu");
									printf("\n\tYou got a Lyrics");
									printf("\n\tand here's the lyrics'");
									
									printf("\n\n\t----------------------------------");
									printf("\n\n\tYou'll always be my day 1");
									printf("\n\tDay zero when I was no 1");
									printf("\n\tIm nothing by myself, you and no 1 else");
									printf("\n\tThankful you're my day 1 <3");
									printf("\n\t----------------------------------");
									
									printf("\n\n\tLet's go back to the main menu");
									printf("\n\n\t<---");
								}
							}else{
								while(fread(&T, sizeof(T), 1, bacaFile)==1)
								{
									system("cls");
									cek=3;
									printf("\n\n\tWoww, seems like you answer all of that correctly"); //Cerita//
									printf("\n\tI'm so proud of you bbyyy <3");
									
									printf("\n\n\tHere all of your answer :");
									printf("\n\t1. What is your hope for yourself : %s", T.hopeYou);
									printf("\n\t2. What is your hope for me : %s", T.hopeMe);
									printf("\n\t3. What do you want in the future : %s", T.future);
									printf("\n\t4. What is your biggest dream : %s", T.dream);
									printf("\n\t5. What is your live goal : %s", T.goal);
									
									printf("\n\n\tWoww, you have a big dream and i appreciate it!");
									
									printf("\n\n\tHopefully, everything u've mentioned will become true");
									printf("\n\tRemember to always Pray to God");
									printf("\n\tand Do your best!");
										getch();
										
									system("cls");
									printf("\n\n\tBecause you already pass the Third Menu");
									printf("\n\tYou got a Lyrics");
									printf("\n\tand here's the lyrics'");
									
									printf("\n\n\t----------------------------------");
									printf("\n\tYou'll always be my day 1");
									printf("\n\tDay zero when I was no 1");
									printf("\n\tIm nothing by myself, you and no 1 else");
									printf("\n\tThankful you're my day 1 <3");
									printf("\n\t----------------------------------");
									
									printf("\n\n\tLet's go back to the main menu");
									printf("\n\n\t<---");
								}
							}
							fclose(bacaFile);	
						}else{
							printf("\n\n\t[!] Why you do that to me :(");
						}
					}else{
						system("cls");
						printf("\n\n\t[!] Oopsie, you cant enter this menu [!]");
						printf("\n\t[!] it is what it is");
					}
				getch();
			break;
			case 4: if(cek==3)
					{
						do
						{
							system("cls");
							printf("\n\n\tHayy, welcome backk!");
							printf("\n\tSo in this menu, you will get a surprise");
							printf("\n\tYou need to choose it");
							printf("\n\tSelect the number 1 first, okay?");
							
							printf("\n\n\t    Prize 1");
							printf("\n\t    Prize 2");
							printf("\n\n\t0. Back to Main Menu");
							
							printf("\n\n\t(number only) ---> "); scanf("%d", &prizes);
							switch(prizes)
							{
								case 1: if(prizesCek==0)
										{
											system("cls");
											prizesCek=1;
											printf("\n\n\tCongratss %s !!!!", nama);
											printf("\n\tYou have won the first prizes");
											printf("\n\tBecause you can complete all your question");
											
											printf("\n\n\t------------------------------------"); //LINK VIDEO FULL ABA PAKE GDRIVE//
											printf("\n\t   Link : http://tiny.cc/happybirthdayaba");
											printf("\n\t------------------------------------");
											
											printf("\n\n\tSearch the link!");
											printf("\n\tOnce again, Congrats!!");
											
											printf("\n\n\tSecond Prizes have waited for you to open it up");
											printf("\n\n\t<----");
										}else{
											system("cls");
											printf("\n\n\t[!] Oopsie, you cant enter this menu [!]");
											printf("\n\t[!] it is what it is");
										}
									getch();
								break;
								case 2: if(prizesCek==1)
										{
											system("cls");
											cek=4;
											printf("\n\n\tCongratss %s !!!!", nama);
											printf("\n\tYou have won the second prizes");
											printf("\n\tBecause you can complete all your question");
											printf("\n\n\tReady?");
												getch();
											
											system("cls");
											printf("\n\n\t*********************************************************");
											printf("\n\t*							*");
											printf("\n\t*          a		ffffffffffff	   1111		*");
											printf("\n\t*         a a		ff		  1   1		*");
											printf("\n\t*        a   a		ff		 1    1		*");
											printf("\n\t*       a     a		ff		      1		*");
											printf("\n\t*      a       a	ffffffffffff	      1		*");
											printf("\n\t*     aaaaaaaaaaa	ff		      1		*");
											printf("\n\t*    a           a	ff		      1		*");
											printf("\n\t*   a             a	ff		      1		*");
											printf("\n\t*  a               a	ff		 11111111111	*");
											printf("\n\t*							*");
											printf("\n\t*********************************************************");
											
											printf("\n\n\t[!] Bramantya, give the prize [!]");
										}else{
											system("cls");
											printf("\n\n\t[!] Oopsie, you cant enter this menu [!]");
											printf("\n\t[!] it is what it is");
										}
									getch();
								break;
								case 0: printf("\n\n\t[!] HOLD UP BYY [!]");
									getch();
								break;
							}
						}while(prizes!=0);
					}else{
						system("cls");
						printf("\n\n\t[!] Oopsie, you cant enter this menu [!]");
						printf("\n\t[!] it is what it is");
					}
				getch();
			break;
			case 25: if(cek==4)
					{
						system("cls");
						printf("\n\n\tI just wanna say Thank You so Much, %s", nama);
						printf("\n\n\tIf it wasn't you in the first place, I won't be able to accomplish anything now");
						printf("\n\tCause you're truly a support system for me");
						
						printf("\n\n\tI believe in you");
						printf("\n\tI can't imagine what my high school experience be like if you weren't there");
						printf("\n\tI can't imagine how I can survive from that suicidal thought ");
						printf("\n\t   back then if you weren't there for me");
						
						printf("\n\n\tI'm so sorry");
						printf("\n\tI'm not sweet enough");
						printf("\n\tI'm not good enough");
						printf("\n\tI'm not what you want");
						printf("\n\tbut you know, I'll try my best");
						
						printf("\n\n\tThank you for completing me");
						printf("\n\tThank you for understanding me");
						printf("\n\tThank you for letting me love you");
						printf("\n\tThank you for guiding me to the way I am today");
						
						printf("\n\n\tFrom now, until then,");
						printf("\n\tI love you so much %s <3", nama);
					}else{
						system("cls");
						printf("\n\n\t[!] Oopsie, you cant enter this menu [!]");
						printf("\n\t[!] it is what it is");
					}
				getch();
			break;
			case 0: system("cls");
					printf("\n\nI love you, and i will always be");
					printf("\n\nBye Bye <3\n\n");
					//buat love//
					//---------------------------------------------------------------------------------------------------------------------------------------------------------------//
					int i, j, n=15;
					for(i=n/2; i<=n; i+=2)
				    {
				        for(j=1; j<n-i; j+=2)
				        {
				            printf(" ");
				        }
				
				        for(j=1; j<=i; j++)
				        {
				            printf("*");
				        }
				
				        for(j=1; j<=n-i; j++)
				        {
				            printf(" ");
				        }
				
				        for(j=1; j<=i; j++)
				        {
				            printf("*");
				        }
				
				        printf("\n");
				    }
				    
				    for(i=n; i>=1; i--)
				    {
				        for(j=i; j<n; j++)
				        {
				            printf(" ");
				        }
				
				        for(j=1; j<=(i*2)-1; j++)
				        {
				            printf("*");
				        }
				
				        printf("\n");
				    }
				    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
				getch();
			break;
		}
	}while(pilihan!=0);
	getch();
}
