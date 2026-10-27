
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONTRACKING_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONTRACKING_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllBinaryGameCanvasInterface;
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SimpleGeographicMapCellPositionFactory;
class GeographicMapCellPosition;
class GeographicMapCellType;
class BasicGeographicMap;
class GeographicMapCompositeInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicMapCellPositionTracking
            : public virtual Object
         {

    private: GeographicMapCellPosition* currentGeographicMapCellPosition;

    private: GeographicMapCellPosition* previousGeographicMapCellPosition;

    private: GeographicMapCellPosition* newGeographicMapCellPosition;

    private: GeographicMapCellType* currentCellType;

public: GeographicMapCellPositionTracking();

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellType* getCurrentOverCellType(BasicGeographicMap* geographicMap);

                //@Throws(Exception.constructor)
            
    public: bool updateStart(AllBinaryGameCanvasInterface* gameCanvasInterface, AllBinaryLayer* layer);

    public: bool updateEnd();

    public: GeographicMapCellPosition* getPreviousGeographicMapCellPosition();

    public: GeographicMapCellPosition* getCurrentGeographicMapCellPosition();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONTRACKING_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONTRACKING_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONTRACKING_H_COMPLETE
        #if __has_include(<org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h>)
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h")
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellType.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/BasicGeographicMap.h")
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#endif

        #endif
    
