
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
        



        #ifndef ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLAYERTOPVIEWCHARACTERBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLAYERTOPVIEWCHARACTERBEHAVIOR_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/tracking/TrackingEventCircularStaticPool.h>

      
#include <org/allbinary/game/tracking/TrackingEventHandler.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TopViewCharacterBehavior.h"

class PlayerTopViewCharacterBehavior: public TopViewCharacterBehavior {

    protected: const LogUtil logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: void terrainEvent(AllBinaryLayer layer, Direction direction, int32_t x, int32_t y, std::vector<BasicGeographicMap> geographicMapInterfaceArray, GeographicMapCellPosition geographicMapCellPosition);

    public: void terrainMove(AllBinaryLayer layer, std::vector<BasicGeographicMap> geographicMapInterfaceArray, int32_t x, int32_t y);

    private: void moveIfOnScreen(AllBinaryLayer layer, int32_t ax, int32_t ay);

    private: bool isTiledLayerMoveable(AllBinaryTiledLayer terrainTiledLayer, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLAYERTOPVIEWCHARACTERBEHAVIOR_H
