
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellTypeFactory.h"
#include "GeographicMapCellType.h"
#include "GeographicMapCellPosition.h"

class SimpleGeographicMap
            : public Object
         {

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: Integer id;

    private: std::string name;

    protected: std::vector<int32_t> cellTypeIdToGeographicMapCellType;

    private: AllBinaryTiledLayer tiledLayer;

    private: BasicColor foregroundBasicColor = BasicColorFactory::getInstance().NULL_COLOR;

    private: BasicColor backgroundBasicColor = BasicColorFactory::getInstance().NULL_COLOR;

public: SimpleGeographicMap(Integer id, std::string name, std::vector<int32_t> cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer tiledLayer, BasicColor foregroundBasicColor, BasicColor backgroundBasicColor);

    public: Integer getId();

    public: std::string getName();

    public: void reset();

    public: AllBinaryTiledLayer getAllBinaryTiledLayer();

    private: const GeographicMapCellTypeFactory geographicMapCellTypeFactory = GeographicMapCellTypeFactory::getInstance();

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellType getCellTypeAt(GeographicMapCellPosition cellPosition);

    public: int32_t getCellTypeFromMapCellTypeInt(int32_t cellTypeId);

    public: BasicColor getForegroundBasicColor();

    private: void setForegroundBasicColor(BasicColor foregroundBasicColor);

    public: BasicColor getBackgroundBasicColor();

    private: void setBackgroundBasicColor(BasicColor backgroundBasicColor);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAP_H
