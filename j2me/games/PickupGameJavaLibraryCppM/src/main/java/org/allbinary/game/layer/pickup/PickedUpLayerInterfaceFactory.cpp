
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryBase.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"
#include "org/allbinary/game/layer/pickup/IconLayer.h"


PickedUpLayerInterfaceFactory::PickedUpLayerInterfaceFactory(PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface){
this->pickedUpLayerType= pickeUpLayerType;
    
this->animationInterface= animationInterface;
    
this->iconLayer= iconLayer;
    
}


    auto PickedUpLayerInterfaceFactory::getIconLayer() -> AllBinaryLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->iconLayer;
    
}


    auto PickedUpLayerInterfaceFactory::getAnimationInterface() -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterface;
    
}


    auto PickedUpLayerInterfaceFactory::getPickedUpLayerType() -> PickedUpLayerType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pickedUpLayerType;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORY_CPP
