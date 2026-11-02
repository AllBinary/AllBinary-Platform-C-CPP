
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Enumeration.h>
class CommonStrings;
class GeographicMapCellType;
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>
template<typename T1, typename T2> class ABHashtable;
class BasicArrayList;
class EnumerationUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicPlatormGeographicMapCellType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicPlatormGeographicMapCellTypeFactory: public GeographicMapCellTypeFactory {

    private: EnumerationUtil* enumerationUtil;

    public: BasicPlatormGeographicMapCellType* BLOCK_CELL_TYPE;

    public: BasicPlatormGeographicMapCellType* JUMP_THRU_CELL_TYPE;

    public: BasicPlatormGeographicMapCellType* LADDER_CELL_TYPE;

    private: int32_t maxTileId;

public: BasicPlatormGeographicMapCellTypeFactory(ABHashtable<Object*, Object*>* tileTypeToTileIdsMap, int32_t maxTileId);

    public: int32_t getStartType();

    public: int32_t getEndType();

    public: int32_t getEmptyType();

    public: bool isPath(GeographicMapCellType* cellType);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPEFACTORY_H_COMPLETE
        #if __has_include(<java/util/Enumeration.h>)
#include <java/util/Enumeration.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/EnumerationUtil.h>)
#include <org/allbinary/util/EnumerationUtil.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/platform/BasicPlatormGeographicMapCellType.h")
#include "org/allbinary/media/graphics/geography/map/platform/BasicPlatormGeographicMapCellType.h"
#endif

        #endif
    
