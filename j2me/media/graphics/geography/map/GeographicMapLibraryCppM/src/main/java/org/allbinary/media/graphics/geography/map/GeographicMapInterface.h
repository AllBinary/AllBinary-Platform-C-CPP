
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPINTERFACE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class AllBinaryTiledLayer;
class BasicColor;
class Layer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GeographicMapCellPosition;
class GeographicMapCellType;
class BasicGeographicMapCellPositionFactory;
class GeographicMapCellPositionFactoryInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicMapInterface
            : public virtual Object
         {

    public: virtual int32_t getId() = 0;

    public: virtual std::string getName() = 0;

    public: virtual void reset() = 0;

    public: virtual AllBinaryTiledLayer* getAllBinaryTiledLayer() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual bool getCellPositionsAt(Layer* layer, std::vector<std::vector<GeographicMapCellPosition*>> currentCellPositionArray, std::vector<std::vector<GeographicMapCellPosition*>> cellPositionArray) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual GeographicMapCellPosition* getCellPositionAtXY(int32_t x, int32_t y) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual GeographicMapCellPosition* getCellPositionAtXYNoThrow(int32_t x, int32_t y) = 0;

    public: virtual int32_t getCellTypeFromMapCellTypeInt(int32_t cellTypeId) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual GeographicMapCellType* getCellTypeAtXY(int32_t x, int32_t y) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual GeographicMapCellType* getCellTypeAt(GeographicMapCellPosition* geographicMapCellPosition) = 0;

    public: virtual BasicGeographicMapCellPositionFactory* getGeographicMapCellPositionFactory() = 0;

    public: virtual GeographicMapCellPositionFactoryInterface* getGeographicMapCellPositionFactoryInterface() = 0;

    public: virtual BasicColor* getForegroundBasicColor() = 0;

    public: virtual BasicColor* getBackgroundBasicColor() = 0;

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/layer/Layer.h>)
#include <org/allbinary/layer/Layer.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellType.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h")
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h"
#endif

        #endif
    
