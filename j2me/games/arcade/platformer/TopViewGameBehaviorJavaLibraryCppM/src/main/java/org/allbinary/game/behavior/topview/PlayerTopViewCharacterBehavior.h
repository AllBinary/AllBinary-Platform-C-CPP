
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Direction;
class AllBinaryTiledLayer;
class TrackingEventCircularStaticPool;
class TrackingEventHandler;
class DisplayInfoSingleton;
class AllBinaryLayer;
class LogUtil;
class BasicGeographicMap;
class BasicGeographicMapUtil;
class GeographicMapCellPosition;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/behavior/topview/TopViewCharacterBehavior.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlayerTopViewCharacterBehavior: public TopViewCharacterBehavior {


            
    public: PlayerTopViewCharacterBehavior();
        
    /*protected*/ public: LogUtil* logUtil;

                //@Throws(Exception.constructor)
            
    public: void terrainEvent(AllBinaryLayer* layer, Direction* direction, int32_t x, int32_t y, std::vector<BasicGeographicMap*> geographicMapInterfaceArray, GeographicMapCellPosition* geographicMapCellPosition);

    public: void terrainMove(AllBinaryLayer* layer, std::vector<BasicGeographicMap*> geographicMapInterfaceArray, int32_t x, int32_t y);

    private: void moveIfOnScreen(AllBinaryLayer* layer, int32_t ax, int32_t ay);

    private: bool isTiledLayerMoveable(AllBinaryTiledLayer* terrainTiledLayer, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLAYERTOPVIEWCHARACTERBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLAYERTOPVIEWCHARACTERBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLAYERTOPVIEWCHARACTERBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/direction/Direction.h>)
#include <org/allbinary/direction/Direction.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/game/tracking/TrackingEventCircularStaticPool.h>)
#include <org/allbinary/game/tracking/TrackingEventCircularStaticPool.h>
#endif
#if __has_include(<org/allbinary/game/tracking/TrackingEventHandler.h>)
#include <org/allbinary/game/tracking/TrackingEventHandler.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMapUtil.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapUtil.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include("org/allbinary/game/behavior/topview/TopViewCharacterBehavior.h")
#include "org/allbinary/game/behavior/topview/TopViewCharacterBehavior.h"
#endif

        #endif
    
