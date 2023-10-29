//
// Created by Gabriel-Claudiu Privantu on 29.10.2023.
//

#include "Watch.h"
/** initializarea membrilor din constructor */
//Watch(string brand_name, bool smart, int releaseYear); //constructor
Watch :: Watch(string brand_name, bool smart, int releaseYear, char *informations) {
    this->brand_name=brand_name;
    this->isSmart=smart;
    this->releaseYear = releaseYear;
    if(informations != nullptr){
        this->info=new char[strlen(informations)+1];
        strcpy(this->info, informations);
    } else{
        this->info= nullptr;
    }
}

/** Eiberarea heap-ului in cadrul destructorului */
//~Watch(); //destructor
Watch :: ~Watch(){
    if(this->info != nullptr) {
        cout << strcat(this->info, " deleted!") << endl;
        delete[] this->info;
    }
}

/** Suprascrierea copy constructor-ului */
//Watch(const Watch& prevWatch);//copy constructor
Watch ::Watch(const Watch& otherWatch) {
    cout<<otherWatch.brand_name<<" copied!"<<endl;
    this->brand_name=otherWatch.brand_name;
    this->isSmart=otherWatch.isSmart;
    this->releaseYear=otherWatch.releaseYear;
    this->info=new char[strlen(otherWatch.info)+1];
    strcpy(this->info, otherWatch.info);
}

/** Crearea unui move constructor */
//Watch(Watch&& other) noexcept; //move constructor
Watch ::Watch(Watch&& otherWatch) noexcept {
    cout<<otherWatch.brand_name<<" moved!"<<endl;
//    cout<<strcat(this->info," moved!")<<endl;
    this->brand_name = (otherWatch.brand_name);
    this->isSmart = (otherWatch.isSmart);
    this->releaseYear = (otherWatch.releaseYear);
    this->info = otherWatch.info;
    otherWatch.info=nullptr;
}

/** Incapsulare - ascunderea detaliilor de implementare ale unei clase si oferirea
 * unei interfete publice pentru a interactiona cu obiectul*/
string Watch :: getBrand_name(){
    return brand_name;
}
void Watch::setBrand_name(string brand){
    brand_name=brand;
}
bool Watch::getIsSmart(){
    return isSmart;
}
void Watch::setIsSmart(bool smart){
    isSmart=smart;
}
int Watch::getReleaseYear(){
    return releaseYear;
}
void Watch::setReleaseYear(int year){
    releaseYear=year;
}

void Watch::toString() {
    if (this->info == nullptr){
        cout<<"Informations are null or has already been deleted!"<<endl;
    } else{
        cout<<endl<<"Brand: "<<this->brand_name;
        cout<<endl<<"Smart: "<<this->isSmart;
        cout<<endl<<"Release year: "<<this->releaseYear;
        cout<<endl<<"Informations: "<<this->info;
        cout<<endl<<"\n";
    }
}

void Watch::changeInfo(char *otherInfo) {
    delete[] this->info;
    this->info=new char[strlen(otherInfo)+ 1];;
    strcpy(this->info, otherInfo);
}
