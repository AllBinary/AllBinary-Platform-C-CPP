
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_BASEDROPCELLPOSITIONGENERATOR_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_BASEDROPCELLPOSITIONGENERATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllBinaryGameLayerManager;
class AllBinaryLayerManager;
class GeographicMapCellPosition;
class BasicGeographicMap;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionGeneratorInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BaseDropCellPositionGenerator
            : public virtual Object
        , public virtual DropCellPositionGeneratorInterface {


            
    public: BaseDropCellPositionGenerator();
        
    public: std::string getName();

                //@Throws(Exception.constructor)
            
    public: void update(AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface);

                //@Throws(Exception.constructor)
            
    public: bool isDropAllowedAt(GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_BASEDROPCELLPOSITIONGENERATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_BASEDROPCELLPOSITIONGENERATOR_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_BASEDROPCELLPOSITIONGENERATOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/drop/DropCellPositionGeneratorInterface.h")
#include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionGeneratorInterface.h"
#endif

        #endif
    
