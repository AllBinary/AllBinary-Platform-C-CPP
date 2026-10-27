
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYERUTIL_H
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class GroupCommonFactory;
class BasicArrayList;
class LogUtil;
class DirectionFactory;
class GameInfo;
class WeaponProperties;
class BasicGroupFactory;
class PartInterface;
class BasicWeaponPart;
class StdUtil;
class StringMaker;
class BasicGeographicMap;
class BaseRaceTrackGeographicMap;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class RTSLayer;
class FakeLayerManager;
class AllBinaryGameLayerManager;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RTSLayerUtil
            : public virtual Object
         {

    private: static RTSLayerUtil* instance_owner();
    private: static RTSLayerUtil* instance;

    public: static RTSLayerUtil* getInstance();


            
    public: RTSLayerUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: GroupCommonFactory* groupCommonFactory;

    private: WeaponProperties* createWeaponProperties(WeaponProperties* weaponProperties, int32_t currentLevel, int32_t lastLevel);

    public: void downgrade(RTSLayer* rtsLayer);

    public: void upgrade(RTSLayer* rtsLayer);

    private: const int64_t MAX_RELOAD_TIME;

    public: int64_t getCostExponential(int64_t cost);

    private: int32_t getWeaponPropertiesCost(WeaponProperties* weaponProperties);

    public: int32_t getCost(RTSLayer* rtsLayer);

    public: int32_t getDowngradeCost(RTSLayer* rtsLayer);

    public: int32_t getUpgradeCost(RTSLayer* rtsLayer);

                //@Throws(Exception.constructor)
            
    public: void destroyAndClear(BasicArrayList* list);

    public: ABHashtable<Object*, Object*>* createFakeRTSLayerHashtable(BaseRaceTrackGeographicMap* baseRaceTrackGeographicMap);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_RTSLAYERUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/game/identification/GroupCommonFactory.h>)
#include <org/allbinary/game/identification/GroupCommonFactory.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/direction/DirectionFactory.h>)
#include <org/allbinary/direction/DirectionFactory.h>
#endif
#if __has_include(<org/allbinary/game/GameInfo.h>)
#include <org/allbinary/game/GameInfo.h>
#endif
#if __has_include(<org/allbinary/game/combat/weapon/WeaponProperties.h>)
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>
#endif
#if __has_include(<org/allbinary/game/identification/BasicGroupFactory.h>)
#include <org/allbinary/game/identification/BasicGroupFactory.h>
#endif
#if __has_include(<org/allbinary/game/part/PartInterface.h>)
#include <org/allbinary/game/part/PartInterface.h>
#endif
#if __has_include(<org/allbinary/game/part/weapon/BasicWeaponPart.h>)
#include <org/allbinary/game/part/weapon/BasicWeaponPart.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/layer/RTSLayer.h")
#include "org/allbinary/game/layer/RTSLayer.h"
#endif
#if __has_include("org/allbinary/game/layer/FakeLayerManager.h")
#include "org/allbinary/game/layer/FakeLayerManager.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#endif

        #endif
    
