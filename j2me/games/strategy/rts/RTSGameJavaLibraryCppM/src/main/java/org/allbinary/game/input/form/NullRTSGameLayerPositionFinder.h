
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSGAMELAYERPOSITIONFINDER_H
        #define ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSGAMELAYERPOSITIONFINDER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/LayerPositionFinderInterface.h>
class AllBinaryLayer;
class GeographicMapCellPosition;
class DropCellPositionHistory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullRTSGameLayerPositionFinder
            : public virtual Object
        , public virtual LayerPositionFinderInterface {

    private: static NullRTSGameLayerPositionFinder* instance_owner();
    private: static NullRTSGameLayerPositionFinder* instance;

    public: static NullRTSGameLayerPositionFinder* getInstance();

/*protected*/ public: NullRTSGameLayerPositionFinder();

    public: AllBinaryLayer* getLayerInterface(GeographicMapCellPosition* geographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSGAMELAYERPOSITIONFINDER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSGAMELAYERPOSITIONFINDER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSGAMELAYERPOSITIONFINDER_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/LayerPositionFinderInterface.h>)
#include <org/allbinary/game/input/LayerPositionFinderInterface.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>)
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>
#endif

        #endif
    
