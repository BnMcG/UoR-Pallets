//
// Created by ben on 03/02/16.
//

#include "SimpleTruck.h"

bool SimpleTruck::PickUpItem(int position, storage::CargoStorage &storage) {
    // Retrieving the item sets the position in the storage container as null
    item = storage.RetrievePalletFromPosition(position);
    return item != nullptr;
}

bool SimpleTruck::PutDownItem(int position, storage::CargoStorage &storage) {
    // This will return true if added, else false
    return storage.AddPalletAtPosition(position, item);
}
