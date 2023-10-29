#include "Watch.h"

int main() {
    Watch fossil("Fossil", false,2020,"fossil mecanic");
    Watch apple("Apple", true,2019,"apple seria 6");
    Watch samsung("Samsung", true,2022,"Galaxy Watch 5");

    fossil.toString();
    apple.toString();
    samsung.toString();

    //initializare unui obiect nou - fossilNew - folosind copyConstructor
    Watch fossilNew = fossil;
    fossilNew.toString();
    fossil.toString();

    //se poate observa faptul ca sunt independente,
    //deoarece schimbarea detaliilor lui fossilNew nu produce si modificarea detaliilor ceasului initial
    cout<<"Test independenta copy-constructor:"<<endl;
    fossilNew.changeInfo("ceas automat");
    fossilNew.toString();
    fossil.toString();

    //initializarea unui obiect nou - watch5 - folosind moveConstructor
    //se poate observa ca info a fost mutat din samsung in watch 5, nu copiat, acum info din samsung fiind nul
    Watch watch5(std::move(samsung));
    watch5.toString();
    samsung.toString();

    //putem observa ca am putut adauga o noua info lui samsung, iar acest lucru independent de watch5
    samsung.changeInfo("watch 6 pro");
    samsung.toString();
    watch5.toString();

    return 0;
}
