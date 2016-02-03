//
// Created by ben on 26/01/16.
//

#ifndef AUTOMATICWAREHOUSE_PALLET_H
#define AUTOMATICWAREHOUSE_PALLET_H

#include <string>
#include <vector>

namespace storage {

    /**
     * Define our Pallet class. The pallet is essentially an implementation of a
     * stack for storing items
     */

    class Pallet {
    public:
        bool AddItem(std::string item);
        void RemoveTopItem();
        std::string getItemAtPosition(int position);
        void ListAllItems();
        int GetCurrentWeight();
        int GetMaxWeight();
        Pallet(int id, int maxWeight);
        Pallet();
        int GetId();

    protected:
        std::vector<std::string> contents;
        int id;
        int maxWeight;
    };

}


#endif //AUTOMATICWAREHOUSE_PALLET_H
