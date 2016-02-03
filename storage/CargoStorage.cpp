//
// Created by ben on 02/02/16.
//

#include "CargoStorage.h"
#include <iostream>

namespace storage {

    CargoStorage::CargoStorage() {
        // Work-around way of dynamic memory management to get a null value :(
        // Silly C++ being too barebones for its own good

        // Allocate the memory for a Pallet object
        for(int i = 0; i < CargoStorage::CARGO_SIZE; i++) {
            CargoStorage::pallets[i] = nullptr;
        }
    }

    bool CargoStorage::AddPalletAtPosition(int position, storage::Pallet *pallet) {
        if(CargoStorage::pallets[position] == nullptr) {
            CargoStorage::pallets[position] = pallet;
            return true;
        } else {
            return false;
        }
    }

    Pallet* CargoStorage::RetrievePalletFromPosition(int position) {
        if(CargoStorage::pallets[position] != nullptr) {
            Pallet* tmp = CargoStorage::pallets[position];
            CargoStorage::pallets[position] = nullptr;
            return tmp;
        } else {
            return new Pallet(0,0);
        }
    }

    void CargoStorage::ListContents() {
        for(int i = 0; i < CargoStorage::CARGO_SIZE; i++) {
            if(CargoStorage::pallets[i] != nullptr) {
                std::cout << "Pallet at position " << i << " has ID: " << CargoStorage::pallets[i]->GetId() << std::endl;
            }
        }
    }
}