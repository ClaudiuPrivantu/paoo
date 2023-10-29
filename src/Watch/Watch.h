//
// Created by Gabriel-Claudiu Privantu on 29.10.2023.
//

#ifndef TEMA1_WATCH_H
#define TEMA1_WATCH_H

#include<iostream>
#include<string>
using namespace std;

class Watch {
private:
    string brand_name;
    bool isSmart;
    int releaseYear;
    char *info;

public:
    Watch(string brand_name, bool smart, int releaseYear, char *info); //constructor
    ~Watch(); //destructor
    Watch(const Watch& prevWatch);//copy constructor
    Watch(Watch&& other) noexcept; //move constructor

    //incapsulare
    string getBrand_name();
    void setBrand_name(string brand);
    bool getIsSmart();
    void setIsSmart(bool smart);
    int getReleaseYear();
    void setReleaseYear(int year);

    void toString();
    void changeInfo(char *info);
};


#endif //TEMA1_WATCH_H
