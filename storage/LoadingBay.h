//
// Created by ben on 10/02/16.
//

#ifndef AUTOMATICWAREHOUSE_LOADINGBAY_H
#define AUTOMATICWAREHOUSE_LOADINGBAY_H

#include "CargoStorage.h"

namespace storage {

    class LoadingBay: public CargoStorage {
    public:
        void Arrive();
        void Leave();
    };

}


#endif //AUTOMATICWAREHOUSE_LOADINGBAY_H
