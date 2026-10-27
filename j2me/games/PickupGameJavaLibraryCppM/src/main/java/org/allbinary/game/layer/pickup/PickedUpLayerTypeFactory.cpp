
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"


PickedUpLayerTypeFactory::PickedUpLayerTypeFactory() : NONE(new PickedUpLayerType(StringUtil::getInstance()->NULL_STRING)), BEAM(new PickedUpLayerType("BEAM")), MINE(new PickedUpLayerType("MINE")), PROJECTILE(new PickedUpLayerType("PROJECTILE")), ENHANCEMENT(new PickedUpLayerType("Enhancement")), MORPH(new PickedUpLayerType("Morph")), PART(new PickedUpLayerType("Part")), HEAL(new PickedUpLayerType("Heal")), LIFE(new PickedUpLayerType("Life")), POINTS(new PickedUpLayerType("Points")) {
        }
        auto PickedUpLayerTypeFactory::instance_owner() -> PickedUpLayerTypeFactory* { static std::unique_ptr<PickedUpLayerTypeFactory> value(new PickedUpLayerTypeFactory()); return value.get(); }
PickedUpLayerTypeFactory* PickedUpLayerTypeFactory::instance = PickedUpLayerTypeFactory::instance_owner();

    auto PickedUpLayerTypeFactory::getInstance() -> PickedUpLayerTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PickedUpLayerTypeFactory::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPEFACTORY_CPP
