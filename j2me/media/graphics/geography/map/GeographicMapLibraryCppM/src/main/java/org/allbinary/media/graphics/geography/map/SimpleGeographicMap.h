
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAP_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAP_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class AllBinaryTiledLayer;
class BasicColor;
class BasicColorFactory;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GeographicMapCellTypeFactory;
class GeographicMapCellType;
class GeographicMapCellPosition;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SimpleGeographicMap
            : public virtual Object
         {

    /*protected*/ public: CommonStrings* commonStrings;

    private: int32_t id;

    private: std::string name;

    /*protected*/ public: std::vector<int32_t> cellTypeIdToGeographicMapCellType;

    private: AllBinaryTiledLayer* tiledLayer;

    private: BasicColor* foregroundBasicColor;

    private: BasicColor* backgroundBasicColor;

public: SimpleGeographicMap(int32_t id, std::string name, std::vector<int32_t> cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer* tiledLayer, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor);

    public: int32_t getId();

    public: std::string getName();

    public: void reset();

    public: AllBinaryTiledLayer* getAllBinaryTiledLayer();

    private: GeographicMapCellTypeFactory* geographicMapCellTypeFactory;

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellType* getCellTypeAt(GeographicMapCellPosition* cellPosition);

    public: int32_t getCellTypeFromMapCellTypeInt(int32_t cellTypeId);

    public: BasicColor* getForegroundBasicColor();

    private: void setForegroundBasicColor(BasicColor* foregroundBasicColor);

    public: BasicColor* getBackgroundBasicColor();

    private: void setBackgroundBasicColor(BasicColor* backgroundBasicColor);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAP_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAP_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAP_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellType.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#endif

        #endif
    
