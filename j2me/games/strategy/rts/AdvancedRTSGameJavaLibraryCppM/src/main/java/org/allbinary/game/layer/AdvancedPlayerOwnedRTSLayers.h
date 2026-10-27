
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ADVANCEDPLAYEROWNEDRTSLAYERS_H
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDPLAYEROWNEDRTSLAYERS_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/PlayerOwnedRTSLayers.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"

class AdvancedPlayerOwnedRTSLayers: public PlayerOwnedRTSLayers {

    private: BasicArrayList* unitsList = new BasicArrayListD();

    private: BasicArrayList* waypointsList = new BasicArrayListD();

    private: BasicArrayList* buildingList = new BasicArrayListD();

    private: BasicArrayList* baseList = new BasicArrayListD();

    private: BasicArrayList* garrisonList = new BasicArrayListD();

    private: BasicArrayList* houseList = new BasicArrayListD();

    private: BasicArrayList* labList = new BasicArrayListD();

    private: BasicArrayList* factoryList = new BasicArrayListD();

    public: void addUnit(RTSLayer* rtsLayer);

    public: void addWaypoint(RTSLayer* rtsLayer);

    public: void addBase(RTSLayer* rtsLayer);

    public: void addGarrison(RTSLayer* rtsLayer);

    public: void addHouse(RTSLayer* rtsLayer);

    public: void addLab(RTSLayer* rtsLayer);

    public: void addFactory(RTSLayer* rtsLayer);

    public: void removeUnit(AllBinaryGameLayer* gameLayer);

    public: void removeWaypoint(AllBinaryGameLayer* gameLayer);

    public: BasicArrayList* getUnitsList();

    public: BasicArrayList* getWaypointsList();

    public: BasicArrayList* getBaseList();

    public: BasicArrayList* getGarrisonList();

    public: BasicArrayList* getHouseList();

    public: BasicArrayList* getLabList();

    public: BasicArrayList* getFactoryList();

    public: int32_t getTotalBuildings();

    public: void removeBuilding(AllBinaryGameLayer* layerInterface);

    public: std::string toString();

    public: BasicArrayList* getBuildingList();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ADVANCEDPLAYEROWNEDRTSLAYERS_H
