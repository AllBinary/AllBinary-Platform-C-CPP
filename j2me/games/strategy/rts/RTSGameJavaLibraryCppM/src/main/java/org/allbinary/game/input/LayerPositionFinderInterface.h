
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_LAYERPOSITIONFINDERINTERFACE_H
        #define ORG_ALLBINARY_GAME_INPUT_LAYERPOSITIONFINDERINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class AllBinaryLayer;
class GeographicMapCellPosition;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerPositionFinderInterface
            : public virtual Object
         {

    public: virtual AllBinaryLayer* getLayerInterface(GeographicMapCellPosition* geographicMapCellPosition) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_LAYERPOSITIONFINDERINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_LAYERPOSITIONFINDERINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_LAYERPOSITIONFINDERINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif

        #endif
    
