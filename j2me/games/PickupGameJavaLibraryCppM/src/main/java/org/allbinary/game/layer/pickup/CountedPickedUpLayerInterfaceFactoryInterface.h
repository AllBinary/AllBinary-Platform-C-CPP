
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CountedPickedUpLayerInterfaceFactoryInterface: public virtual PickedUpLayerInterfaceFactoryInterface, public virtual LayerInterfaceFactoryInterface {

    public: virtual int32_t getId() = 0;

    public: virtual int32_t getTotal() = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/layer/LayerInterfaceFactoryInterface.h>)
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#endif

        #endif
    
