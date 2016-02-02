//
// Created by ben on 26/01/16.
//

#include <iostream>
#include "pallet.h"

namespace storage {

    /**
     * Pallet constructor
     */

    Pallet::Pallet(int id, int maxWeight) {
        Pallet::id = id;
        Pallet::maxWeight = maxWeight;
    }

    /**
     * Add an item to the top of the pallet
     */

    bool Pallet::AddItem(std::string item) {
        if(GetCurrentWeight() < GetMaxWeight()) {
            contents.push_back(item);
            return true;
        } else {
            return false;
        }
    }

    /**
     * Remove the top item of the pallet
     */

    void Pallet::RemoveTopItem() {
        if(!contents.empty()) {
            contents.erase(contents.begin() + contents.size()-1);
        }
    }

    /**
     * Return the item at a given position
     */

    std::string Pallet::getItemAtPosition(int position) {
        if(position > 0 && position < contents.size()-1) {
            return contents[position];
        } else {
            return "NO ITEM";
        }
    }

    /**
     * Lists all the items on our pallet.
     * Outputs the items directly to the screen
     */

    void Pallet::ListAllItems() {
        for(int i = 0; i < contents.size(); i++) {
            std::cout << i << ": "  << contents[i] << std::endl;
        }
    }

    /**
     * Each item weighs one unit of weight. Therefore the number of items is the same as the
     * current weight, so return it.
     */

    int Pallet::GetCurrentWeight() {
        return (int) contents.size();
    }

    /**
     * Get the maximum weight of this pallet
     */

    int Pallet::GetMaxWeight() {
        return maxWeight;
    }

}