//
// Created by ben on 02/02/16.
//

#include "CargoStorage.h"
#include <iostream>

namespace storage {

    bool CargoStorage::AddPalletAtPosition(int position, storage::Pallet pallet) {
        return true;
    }

    Pallet CargoStorage::RetrievePalletFromPosition(int position) {
        Pallet p(0, 0);
        return p;
    }

    void CargoStorage::ListContents() {

    }
}