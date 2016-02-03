//
// Created by ben on 02/02/16.
//

#ifndef AUTOMATICWAREHOUSE_CARGOSTORAGE_H
#define AUTOMATICWAREHOUSE_CARGOSTORAGE_H

#include "pallet.h"

namespace storage {

    class CargoStorage {
    public:
        bool AddPalletAtPosition(int position, Pallet pallet);
        storage::Pallet RetrievePalletFromPosition(int position);
        void ListContents();
    protected:
        Pallet pallets[10];
    };
}

#endif //AUTOMATICWAREHOUSE_CARGOSTORAGE_H
