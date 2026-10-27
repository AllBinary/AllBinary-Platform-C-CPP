
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYERFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class RemoteInfo;
class AllBinaryLayer;
#include <org/allbinary/layer/AllBinaryLayerFactoryInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class FallingPickupLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FallingPickupLayerFactory
            : public virtual Object
        , public AllBinaryLayerFactoryInterface {


            
    public: FallingPickupLayerFactory();
        
                //@Throws(Exception.constructor)
            
    public: AllBinaryLayer* getInstance();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYERFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/multiplayer/layer/RemoteInfo.h>)
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerFactoryInterface.h>)
#include <org/allbinary/layer/AllBinaryLayerFactoryInterface.h>
#endif
#if __has_include("org/allbinary/game/ag/layer/pickup/FallingPickupLayer.h")
#include "org/allbinary/game/ag/layer/pickup/FallingPickupLayer.h"
#endif

        #endif
    
