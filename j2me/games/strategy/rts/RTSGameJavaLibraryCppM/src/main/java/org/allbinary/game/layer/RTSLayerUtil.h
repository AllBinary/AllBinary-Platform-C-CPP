
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

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/identification/GroupCommonFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
#include <org/allbinary/game/part/PartInterface.h>

      
#include <org/allbinary/game/part/weapon/BasicWeaponPart.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSLayer.h"
#include "FakeLayerManager.h"
#include "AllBinaryGameLayerManager.h"

class RTSLayerUtil
            : public Object
         {

    private: static RTSLayerUtil instance() { return RTSLayerUtil(); }

    public: static RTSLayerUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const GroupCommonFactory groupCommonFactory = GroupCommonFactory::getInstance();

    private: WeaponProperties createWeaponProperties(WeaponProperties weaponProperties, int32_t currentLevel, int32_t lastLevel);

    public: void downgrade(RTSLayer rtsLayer);

    public: void upgrade(RTSLayer rtsLayer);

    private: const int64_t MAX_RELOAD_TIME = Integer::MAX_VALUE /100000;

    public: int64_t getCostExponential(int64_t cost);

    private: int32_t getWeaponPropertiesCost(WeaponProperties weaponProperties);

    public: int32_t getCost(RTSLayer rtsLayer);

    public: int32_t getDowngradeCost(RTSLayer rtsLayer);

    public: int32_t getUpgradeCost(RTSLayer rtsLayer);

                //@Throws(Exception.constructor)
            
    public: void destroyAndClear(BasicArrayList list);

    public: Hashtable<any, any> createFakeRTSLayerHashtable(BaseRaceTrackGeographicMap baseRaceTrackGeographicMap);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERUTIL_H
