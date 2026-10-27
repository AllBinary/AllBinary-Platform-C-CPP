
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CELLPOSITIONSUTIL_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CELLPOSITIONSUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class AllBinaryTiledLayer;
class BasicArrayListS;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicGeographicMapCellPositionFactory;
class GeographicMapCellPosition;
class BasicGeographicMap;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CellPositionsUtil
            : public virtual Object
         {

    private: static CellPositionsUtil* instance_owner();
    private: static CellPositionsUtil* instance;

    public: static CellPositionsUtil* getInstance();


            
    public: CellPositionsUtil();
        
                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getAll(BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* topRightGeographicMapCellPosition, int32_t columns, int32_t rows, BasicArrayList* reusableList);

    private: BasicArrayList* reusableSingleThreadedSurroundingList;

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getAllSurrounding(BasicGeographicMap* geographicMapInterface, BasicArrayList* occupyList, BasicArrayList* reusableList);

    private: std::vector<std::vector<int32_t>> surroundArray;

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getAllSurroundingAt(BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* layerGeographicMapCellPosition, BasicArrayList* reusableSurroundingList);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CELLPOSITIONSUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CELLPOSITIONSUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CELLPOSITIONSUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListS.h>)
#include <org/allbinary/util/BasicArrayListS.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h")
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/BasicGeographicMap.h")
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#endif

        #endif
    
