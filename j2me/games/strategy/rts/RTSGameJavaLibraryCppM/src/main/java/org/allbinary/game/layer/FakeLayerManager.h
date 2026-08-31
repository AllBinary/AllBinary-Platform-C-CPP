
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_FAKELAYERMANAGER_H
        #define ORG_ALLBINARY_GAME_LAYER_FAKELAYERMANAGER_H

#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameLayerManager.h"

class FakeLayerManager: public AllBinaryGameLayerManager: public GeographicMapCompositeInterface {
        

    private: geographicMapInterfaceArray: std::vector<BasicGeographicMap> = BasicGeographicMap.NULL_BASIC_GEOGRAPHIC_MAP_ARRAY;

    private: geographicMapCellTypeArray: std::vector<GeographicMapCellType> = GeographicMapCellType.NULL_GEOGRAPHIC_MAP_CELL_TYPE_ARRAY;

public constructor (GameInfo gameInfo);

    public std::vector<BasicGeographicMap> getGeographicMapInterface();

    public setGeographicMapInterface(std::vector<BasicGeographicMap> geographicMapInterfaceArray);

    public std::vector<GeographicMapCellType> geographicMapCellTypeArray();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_FAKELAYERMANAGER_H
