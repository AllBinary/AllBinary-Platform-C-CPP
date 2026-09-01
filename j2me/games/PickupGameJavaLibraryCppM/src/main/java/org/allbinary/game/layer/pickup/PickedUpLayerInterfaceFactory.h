
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORY_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PickedUpLayerInterfaceFactoryBase.h"
#include "PickedUpLayerType.h"
#include "IconLayer.h"

class PickedUpLayerInterfaceFactory: public PickedUpLayerInterfaceFactoryBase {

    private: PickedUpLayerType pickedUpLayerType;

    private: IconLayer iconLayer;

    private: Animation animationInterface;

protected: PickedUpLayerInterfaceFactory(PickedUpLayerType pickeUpLayerType, IconLayer iconLayer, Animation animationInterface);

    public: AllBinaryLayer getIconLayer();

    public: Animation getAnimationInterface();

    public: PickedUpLayerType getPickedUpLayerType();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORY_H
