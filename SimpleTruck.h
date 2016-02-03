//
// Created by ben on 03/02/16.
//

#ifndef AUTOMATICWAREHOUSE_SIMPLETRUCK_H
#define AUTOMATICWAREHOUSE_SIMPLETRUCK_H


#include "storage/CargoStorage.h"

class SimpleTruck {
public:
    bool PickUpItem(int position, storage::CargoStorage& storage);
    bool PutDownItem(int position, storage::CargoStorage& storage);

protected:
    storage::Pallet* item; // The item we picked up
};


#endif //AUTOMATICWAREHOUSE_SIMPLETRUCK_H
