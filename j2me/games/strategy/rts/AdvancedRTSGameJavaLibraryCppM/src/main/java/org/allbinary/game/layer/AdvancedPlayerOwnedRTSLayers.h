
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

#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PlayerOwnedRTSLayers.h"
#include "RTSLayer.h"
#include "AllBinaryGameLayer.h"

class AdvancedPlayerOwnedRTSLayers: public PlayerOwnedRTSLayers {
        

    private: const unitsList: BasicArrayList = new BasicArrayListD();

    private: const waypointsList: BasicArrayList = new BasicArrayListD();

    private: const buildingList: BasicArrayList = new BasicArrayListD();

    private: const baseList: BasicArrayList = new BasicArrayListD();

    private: const garrisonList: BasicArrayList = new BasicArrayListD();

    private: const houseList: BasicArrayList = new BasicArrayListD();

    private: const labList: BasicArrayList = new BasicArrayListD();

    private: const factoryList: BasicArrayList = new BasicArrayListD();

    public addUnit(RTSLayer rtsLayer);

    public addWaypoint(RTSLayer rtsLayer);

    public addBase(RTSLayer rtsLayer);

    public addGarrison(RTSLayer rtsLayer);

    public addHouse(RTSLayer rtsLayer);

    public addLab(RTSLayer rtsLayer);

    public addFactory(RTSLayer rtsLayer);

    public removeUnit(AllBinaryGameLayer gameLayer);

    public removeWaypoint(AllBinaryGameLayer gameLayer);

    public BasicArrayList getUnitsList();

    public BasicArrayList getWaypointsList();

    public BasicArrayList getBaseList();

    public BasicArrayList getGarrisonList();

    public BasicArrayList getHouseList();

    public BasicArrayList getLabList();

    public BasicArrayList getFactoryList();

    public int32_t getTotalBuildings();

    public removeBuilding(AllBinaryGameLayer layerInterface);

    public string toString();

    public BasicArrayList getBuildingList();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ADVANCEDPLAYEROWNEDRTSLAYERS_H
