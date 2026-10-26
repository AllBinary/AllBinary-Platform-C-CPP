
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

            #include <vector>
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SimpleGeographicMap.h"
#include "GeographicMapInterface.h"
#include "BasicGeographicMapCellPositionFactory.h"
#include "GeographicMapCellPositionFactoryInterface.h"
#include "GeographicMapCellTypeFactory.h"
#include "GeographicMapCellPositionBaseFactory.h"
#include "GeographicMapCellPosition.h"
#include "SimpleGeographicMapCellPositionFactory.h"
#include "GeographicMapCellType.h"

class BasicGeographicMap: public SimpleGeographicMap, public GeographicMapInterface {

    public: static const std::vector<BasicGeographicMap> NULL_BASIC_GEOGRAPHIC_MAP_ARRAY = {};

    private: const MathUtil mathUtil = MathUtil::getInstance();

    private: BasicGeographicMapCellPositionFactory geographicMapCellPositionFactory;

    private: GeographicMapCellPositionFactoryInterface geographicMapCellPositionFactoryInterface;

    private: GeographicMapCellTypeFactory geographicMapCellTypeFactory;

public: BasicGeographicMap(Integer id, std::string name, std::vector<int32_t> cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer tiledLayer, BasicColor foregroundBasicColor, BasicColor backgroundBasicColor, GeographicMapCellPositionFactoryInterface geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory geographicMapCellTypeFactory);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition getCellPosition(int32_t direction, GeographicMapCellPosition oldGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition getCellPositionNoThrow(int32_t direction, GeographicMapCellPosition oldGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: bool isOfFourDirections(GeographicMapCellPosition oldGeographicMapCellPosition, GeographicMapCellPosition newGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition getCellPositionAtXY(int32_t x, int32_t y);

    public: GeographicMapCellPosition getCellPositionAtXYNoThrow(int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: bool isOnMap(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getCellPositionAtNoThrow(int32_t x, int32_t y, int32_t x2, int32_t y2, BasicArrayList geographicMapCellPositionList);

                //@Throws(Exception.constructor)
            
    public: bool getCellPositionsAt(Layer layer, std::vector<std::vector<GeographicMapCellPosition>> currentCellPositionArray, std::vector<std::vector<GeographicMapCellPosition>> cellPositionArray);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellType getCellTypeAtXY(int32_t x, int32_t y);

    public: BasicGeographicMapCellPositionFactory getGeographicMapCellPositionFactory();

    public: GeographicMapCellPositionFactoryInterface getGeographicMapCellPositionFactoryInterface();

    public: GeographicMapCellTypeFactory getGeographicMapCellTypeFactory();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAP_H
