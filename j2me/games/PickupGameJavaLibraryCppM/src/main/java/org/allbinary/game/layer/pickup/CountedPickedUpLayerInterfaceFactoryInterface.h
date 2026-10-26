
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYINTERFACE_H
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYINTERFACE_H

#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PickedUpLayerInterfaceFactoryInterface.h"

class CountedPickedUpLayerInterfaceFactoryInterface: public PickedUpLayerInterfaceFactoryInterface, public LayerInterfaceFactoryInterface {

    int32_t getId();

    int32_t getTotal();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYINTERFACE_H
