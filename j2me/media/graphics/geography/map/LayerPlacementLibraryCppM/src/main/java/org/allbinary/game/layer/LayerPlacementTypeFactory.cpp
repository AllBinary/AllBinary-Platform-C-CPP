
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTTYPEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/LayerPlacementTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/direction/DirectionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/LayerPlacementType.h"


LayerPlacementTypeFactory::LayerPlacementTypeFactory() : MAP(new LayerPlacementType(Integer.MAX_VALUE)), LEFT(new LayerPlacementType(DirectionFactory::getInstance()->LEFT->getValue())), DOWN(new LayerPlacementType(DirectionFactory::getInstance()->DOWN->getValue())), UP(new LayerPlacementType(DirectionFactory::getInstance()->UP->getValue())), RIGHT(new LayerPlacementType(DirectionFactory::getInstance()->RIGHT->getValue())) {
        }
        auto LayerPlacementTypeFactory::instance_owner() -> LayerPlacementTypeFactory* { static std::unique_ptr<LayerPlacementTypeFactory> value(new LayerPlacementTypeFactory()); return value.get(); }
LayerPlacementTypeFactory* LayerPlacementTypeFactory::instance = LayerPlacementTypeFactory::instance_owner();

    auto LayerPlacementTypeFactory::getInstance() -> LayerPlacementTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LayerPlacementTypeFactory::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTTYPEFACTORY_CPP
