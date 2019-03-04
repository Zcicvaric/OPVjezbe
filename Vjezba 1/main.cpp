#include <iostream>


typedef struct _student {
    int id;
    std::string ime;
    char spol;
    int kviz1_score;
    int kviz2_score;
    int mid_term_score;
    int final_score;
    int total_score;

} student;

void provjeri_duplikate(int arr[], int br) {
    int niz_duplikata[10] = {0,0,0,0,0,0,0,0,0,0};
    for(int i = 0; i<br ;i++) {
            for(int j = i+1; j<br; j++) {
                if(arr[i] == arr[j]) {
                      niz_duplikata[arr[i]]++;
                      break;
                }
            }
    }
    for(int i = 1; i < 10; i++) {
        if(niz_duplikata[i] > 0)
            std::cout<<"Broj "<< i << " se ponavlja " << niz_duplikata[i] << " puta"<<std::endl;
    }
}


float prosjek(student studenti) {
    float rez = (studenti.kviz1_score + studenti.kviz2_score + studenti.mid_term_score + studenti.final_score + studenti.total_score) / 5.0;
    return rez;
}

int nadi_studenta(student studenti[], int id_studenta) { //vraca poziciju studenta u nizu na temelju njegovod id
    for(int i = 0; i <20; i++) {
        if(studenti[i].id == id_studenta)
            return i;
    }
}

void ispisi_studenta(student studenti) {
    std::cout<<"Student ID: "<<studenti.id<<std::endl;
    std::cout<<"Ime: "<<studenti.ime<<std::endl;
    std::cout<<"Ocjena na 1. kvizu: "<<studenti.kviz1_score<<std::endl;
    std::cout<<"Ocjena na 2. kvizu: "<<studenti.kviz2_score<<std::endl;
    std::cout<<"Ocjena na sredini semestra: "<<studenti.mid_term_score<<std::endl;
    std::cout<<"Ocjena na kraju semestra: "<<studenti.final_score<<std::endl;
    std::cout<<"Ukupan broj bodova: "<<studenti.total_score<<std::endl;
    std::cout<<std::endl;
}


void evidencija(student studenti[]) {
        std::cout<< "1 - Dodaj novi zapis" <<std::endl;
        std::cout<< "2 - Ukloni zapis" <<std::endl;
        std::cout<< "3 - Azuriraj zapis" <<std::endl;
        std::cout<< "4 - Prikazi sve zapise" <<std::endl;
        std::cout<< "5 - Izracunaj prosjek bodova za studenta" <<std::endl;
        std::cout<< "6 - Prikazi studenta s najvecim brojem bodova" <<std::endl;
        std::cout<< "7 - Prikazi studenta s najmanjim brojem bodova" <<std::endl;
        std::cout<< "8 - Pronadi studenta po ID-u"<<std::endl;
        std::cout<< "9 - Sortiraj zapise po broju bodova (total)"<<std::endl;
        std::cout<< "10 - Izlaz"<<std::endl;

        int iskoristeni_id[20];
        for(int i = 0; i<20; i++) {
           iskoristeni_id[i] = 0;
        }
        int id_studenta;
        int arr_cp = 0;
        int poz_studenta;


    while(1) {
        int odabir = 0;
        std::cout<< "Odaberite radnju:" <<std::endl;
        std::cin>>odabir;
        if(odabir == 1) {
            while(1) {
            std::cout<<"Unesite ID studenta:"<<std::endl;
            std::cin>>id_studenta;
            if(iskoristeni_id[id_studenta] != 0) {
                std::cout<<"Postoji vec student sa istim ID!, vracanje u glavni izbornik..."<<std::endl;
                break;
            }
            studenti[arr_cp].id = id_studenta;
            iskoristeni_id[id_studenta] = 1;
            std::cout<<"Unesite ime studenta:"<<std::endl;
            std::cin>>studenti[arr_cp].ime;
            std::cout<<"Unesite spol studenta (M/Z):"<<std::endl;
            std::cin>>studenti[arr_cp].spol;
            std::cout<<"Unesite ocjenu na kvizu 1:"<<std::endl;
            std::cin>>studenti[arr_cp].kviz1_score;
            std::cout<<"Unesite ocjenu na kvizu 2:"<<std::endl;
            std::cin>>studenti[arr_cp].kviz2_score;
            std::cout<<"Unesite ocjenu na sredini semestra:"<<std::endl;
            std::cin>>studenti[arr_cp].mid_term_score;
            std::cout<<"Unesite ocjenu na kraju semestra"<<std::endl;
            std::cin>>studenti[arr_cp].final_score;
            studenti[arr_cp].total_score = studenti[arr_cp].kviz1_score + studenti[arr_cp].kviz2_score + studenti[arr_cp].mid_term_score + studenti[arr_cp].final_score;
            arr_cp++;

            break;
            }
        }
        if(odabir == 2) {//prepravit iz pocetka
            while(1) {
                if(arr_cp == 0) {
                    std::cout<<"Ne postoji ni jedan zapis! Povratak u glavni izbornik..."<<std::endl;
                    break;
                }
            std::cout<<"Unesite ID studenta"<<std::endl;
            std::cin>>id_studenta;
            poz_studenta = nadi_studenta(studenti, id_studenta);
            //delete studenti[poz_studenta]; //problem
            iskoristeni_id[id_studenta] = 0;
            arr_cp--;
            break;
            }
        }
        if(odabir == 3) {
            while(1) {
                std::cout<<"Unesite ID studenta:"<<std::endl;
                std::cin>>id_studenta;
                if(iskoristeni_id[id_studenta] == 0) {
                    std::cout<<"Ne postoji student sa unesenim ID! Vracanje u glavni izbornik..."<<std::endl;
                    break;
                }
                poz_studenta = nadi_studenta(studenti, id_studenta);
                std::cout<<"Unesite ime studenta:"<<std::endl;
                std::cin>>studenti[poz_studenta].ime;
                std::cout<<"Unesite spol studenta (M/Z):"<<std::endl;
                std::cin>>studenti[poz_studenta].spol;
                std::cout<<"Unesite ocjenu na kvizu 1:"<<std::endl;
                std::cin>>studenti[poz_studenta].kviz1_score;
                std::cout<<"Unesite ocjenu na kvizu 2:"<<std::endl;
                std::cin>>studenti[poz_studenta].kviz2_score;
                std::cout<<"Unesite ocjenu na sredini semestra:"<<std::endl;
                std::cin>>studenti[poz_studenta].mid_term_score;
                std::cout<<"Unesite ocjenu na kraju semestra"<<std::endl;
                std::cin>>studenti[poz_studenta].final_score;
                studenti[poz_studenta].total_score = studenti[poz_studenta].kviz1_score + studenti[poz_studenta].kviz2_score + studenti[poz_studenta].mid_term_score + studenti[poz_studenta].final_score;
                std::cout<<"povratak u glavni izbornik"<<std::endl;
                break;
            }

        }
        if(odabir == 4) {
            if(arr_cp == 0)
                 std::cout<<"Ne postoji ni jedan zapis! Povratak u glavni izbornik..."<<std::endl;
            for(int i = 0; i<20; i++) {
                if(studenti[i].id != 0)
                    ispisi_studenta(studenti[i]);
            }
        }
        if(odabir == 5) {
            while(1) {
            if(arr_cp == 0) {
                std::cout<<"Ne postoji ni jedan zapis! Povratak u glavni izbornik..."<<std::endl;
                break;
            }
            std::cout<<"Unesite ID studenta:"<<std::endl;
            std::cin>>id_studenta;
            if(iskoristeni_id[id_studenta] == 0) {
                std::cout<<"Ne postoji student sa unesenim ID! Vracanje u glavni izbornik..."<<std::endl;
                break;
            }
            poz_studenta = nadi_studenta(studenti, id_studenta);
            std::cout<<"Prosjek bodova za studenta "<< studenti[poz_studenta].ime<<": "<< prosjek(studenti[poz_studenta])<<std::endl;
            }
        }
        if(odabir == 6) {
            while(1) {
                if(arr_cp == 0) {
                    std::cout<<"Ne postoji ni jedan zapis! Povratak u glavni izbornik..."<<std::endl;
                    break;
                }
                int max_bodova = 0;
                for(int i = 0; i < 20; i++) {
                    if(studenti[i].final_score > max_bodova) {
                        max_bodova = studenti[i].final_score;
                        id_studenta = studenti[i].id;
                }
            }
                poz_studenta = nadi_studenta(studenti, id_studenta);
                std::cout<<std::endl;
                std::cout<<"Student s najvecim brojem bodova:"<<std::endl;
                ispisi_studenta(studenti[poz_studenta]);
                std::cout<<"Povratak u glavni izbornik..."<<std::endl;
                break;
            }

        }
        if(odabir == 7) {
            while(1) {
                if(arr_cp == 0) {
                    std::cout<<"Ne postoji ni jedan zapis! Povratak u glavni izbornik..."<<std::endl;
                    break;
                }
                int min_bodova = 21;
                for(int i = 0; i<20; i++) {
                    if(studenti[i].final_score < min_bodova && studenti[i].final_score != 0) {
                        min_bodova = studenti[i].final_score;
                        id_studenta = studenti[i].id;
                }
            }
                poz_studenta = nadi_studenta(studenti, id_studenta);
                std::cout<<std::endl;
                std::cout<<"Student sa najmanjim brojem bodova:"<<std::endl;
                ispisi_studenta(studenti[poz_studenta]);
                std::cout<<"Povratak u glavni izbornik..."<<std::endl;
                break;
            }

        }
        if(odabir == 8) {
            while(1) {
                if(arr_cp == 0) {
                    std::cout<<"Ne postoji ni jedan zapis! Povratak u glavni izbornik..."<<std::endl;
                    break;
                }
                std::cout<<"Unesite ID studenta"<<std::endl;
                std::cin>>id_studenta;
                poz_studenta = nadi_studenta(studenti, id_studenta);
                ispisi_studenta(studenti[poz_studenta]);
                break;
            }
        }


        if(odabir == 10)
            break;
    }

}

int& vrati_element_niza(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int stotica = (arr[i] / 100) % 10;
        int jedinica = arr[i] % 10;
        if(stotica + jedinica == 5)
            return arr[i];
    }
}



int main()
{
    int arr[] = {8,9,3,8,5,6,7,8,9,5,6,8};
    int br_elemenata = 12;
    //provjeri_duplikate(arr, br_elemenata);
    student* studenti = new student[20];
    evidencija(studenti);

    int niz[] = {1130, 1135, 2587, 1134};

    int& broj = vrati_element_niza(niz, 4);
/*
    std::cout<<broj<<std::endl;
    broj++;
    std::cout<<broj<<std::endl;
*/
}

