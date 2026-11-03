
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_BASICLAYERPLACEMENT_CPP
        #define ORG_ALLBINARY_GAME_LAYER_BASICLAYERPLACEMENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/BasicLayerPlacement.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/LayerPlacementType.h"


BasicLayerPlacement::BasicLayerPlacement(LayerPlacementType* layerType, int32_t width, int32_t height){
this->layerType= layerType;
    
this->width= width;
    
this->height= height;
    
}


    auto BasicLayerPlacement::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->width;
    
}


    auto BasicLayerPlacement::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->height;
    
}


    auto BasicLayerPlacement::getLayerType() -> LayerPlacementType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->layerType;
    
}


    auto BasicLayerPlacement::setLayerType(LayerPlacementType* layerType) -> void{
this->layerType= layerType;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_BASICLAYERPLACEMENT_CPP
