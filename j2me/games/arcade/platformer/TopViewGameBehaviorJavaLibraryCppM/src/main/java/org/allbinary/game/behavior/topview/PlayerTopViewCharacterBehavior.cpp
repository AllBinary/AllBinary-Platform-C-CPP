
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/game/behavior/topview/TopViewCharacterBehavior.h"

class PlayerTopViewCharacterBehavior: public TopViewCharacterBehavior {

    protected: LogUtil* logUtil = LogUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: void terrainEvent(AllBinaryLayer* layer, Direction* direction, int32_t x, int32_t y, std::vector<BasicGeographicMap*> geographicMapInterfaceArray, GeographicMapCellPosition* geographicMapCellPosition){
TrackingEventHandler::getInstance()->fireEvent(TrackingEventCircularStaticPool::getInstance()->getNextInstance(layer));
    
}


    public: void terrainMove(AllBinaryLayer* layer, std::vector<BasicGeographicMap*> geographicMapInterfaceArray, int32_t x, int32_t y){

    BasicGeographicMapUtil* basicGeographicMapUtil = BasicGeographicMapUtil::getInstance();;
    
basicGeographicMapUtil->setPosition(geographicMapInterfaceArray, x, y);
    
}


    private: void moveIfOnScreen(AllBinaryLayer* layer, int32_t ax, int32_t ay){
}


    private: bool isTiledLayerMoveable(AllBinaryTiledLayer* terrainTiledLayer, int32_t x, int32_t y){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (terrainTiledLayer->getXP() +DisplayInfoSingleton::getInstance()->getLastWidth() < terrainTiledLayer->getWidth() || x < 0) && (terrainTiledLayer->getXP() > 0 || x > 0);
    
}


};

            

