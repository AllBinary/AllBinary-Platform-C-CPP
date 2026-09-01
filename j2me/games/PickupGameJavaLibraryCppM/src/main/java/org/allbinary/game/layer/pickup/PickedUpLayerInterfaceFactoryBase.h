
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORYBASE_H
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORYBASE_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PickedUpLayerInterfaceFactoryInterface.h"
#include "PickedUpLayerType.h"

class PickedUpLayerInterfaceFactoryBase
            : public Object
        : public PickedUpLayerInterfaceFactoryInterface {

    public: static const PickedUpLayerInterfaceFactoryBase NULL_PICKED_UP_LAYER_FACTORY_BASE = PickedUpLayerInterfaceFactoryBase();

    public: AllBinaryLayer getIconLayer();

    public: Animation getAnimationInterface();

    public: PickedUpLayerType getPickedUpLayerType();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORYBASE_H
