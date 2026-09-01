
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
        



        #ifndef ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_TOPVIEWCHARACTERBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_TOPVIEWCHARACTERBEHAVIOR_H

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/topview/BasicTopViewGeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TopViewCharacterBehavior
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: void terrainEvent(AllBinaryLayer layer, Direction direction, int32_t x, int32_t y, std::vector<BasicGeographicMap> geographicMapInterfaceArray, GeographicMapCellPosition geographicMapCellPosition);

    public: void terrainMove(AllBinaryLayer layer, std::vector<BasicGeographicMap> geographicMapInterfaceArray, int32_t x, int32_t y);

    public: bool hasSolidBlock(std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray);

};

            


        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_TOPVIEWCHARACTERBEHAVIOR_H
