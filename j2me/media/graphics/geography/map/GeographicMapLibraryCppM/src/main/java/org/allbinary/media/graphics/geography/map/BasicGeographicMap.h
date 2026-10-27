
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAP_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAP_H

        
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
class MathUtil;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/SimpleGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapInterface.h"
class BasicGeographicMapCellPositionFactory;
class GeographicMapCellPositionFactoryInterface;
class GeographicMapCellTypeFactory;
class GeographicMapCellPositionBaseFactory;
class GeographicMapCellPosition;
class SimpleGeographicMapCellPositionFactory;
class GeographicMapCellType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicGeographicMap: public SimpleGeographicMap, public GeographicMapInterface {

    public: static std::vector<BasicGeographicMap*> NULL_BASIC_GEOGRAPHIC_MAP_ARRAY;

    private: MathUtil* mathUtil;

    private: BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory;

    private: GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface;

    private: GeographicMapCellTypeFactory* geographicMapCellTypeFactory;

public: BasicGeographicMap(int32_t id, std::string name, std::vector<int32_t> cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer* tiledLayer, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getCellPosition(int32_t direction, GeographicMapCellPosition* oldGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getCellPositionNoThrow(int32_t direction, GeographicMapCellPosition* oldGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: bool isOfFourDirections(GeographicMapCellPosition* oldGeographicMapCellPosition, GeographicMapCellPosition* newGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getCellPositionAtXY(int32_t x, int32_t y);

    public: GeographicMapCellPosition* getCellPositionAtXYNoThrow(int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: bool isOnMap(GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getCellPositionAtNoThrow(int32_t x, int32_t y, int32_t x2, int32_t y2, BasicArrayList* geographicMapCellPositionList);

                //@Throws(Exception.constructor)
            
    public: bool getCellPositionsAt(Layer* layer, std::vector<std::vector<GeographicMapCellPosition*>> currentCellPositionArray, std::vector<std::vector<GeographicMapCellPosition*>> cellPositionArray);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellType* getCellTypeAtXY(int32_t x, int32_t y);

    public: BasicGeographicMapCellPositionFactory* getGeographicMapCellPositionFactory();

    public: GeographicMapCellPositionFactoryInterface* getGeographicMapCellPositionFactoryInterface();

    public: GeographicMapCellTypeFactory* getGeographicMapCellTypeFactory();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAP_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAP_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAP_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/layer/Layer.h>)
#include <org/allbinary/layer/Layer.h>
#endif
#if __has_include(<org/allbinary/logic/math/MathUtil.h>)
#include <org/allbinary/logic/math/MathUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/SimpleGeographicMap.h")
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMap.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapInterface.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapInterface.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h")
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h")
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellType.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#endif

        #endif
    
