
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class StringMaker;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/PlayerOwnedRTSLayers.h"
class RTSLayer;
class AllBinaryGameLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvancedPlayerOwnedRTSLayers: public PlayerOwnedRTSLayers {


            
    public: AdvancedPlayerOwnedRTSLayers();
        
    private: BasicArrayList* unitsList;

    private: BasicArrayList* waypointsList;

    private: BasicArrayList* buildingList;

    private: BasicArrayList* baseList;

    private: BasicArrayList* garrisonList;

    private: BasicArrayList* houseList;

    private: BasicArrayList* labList;

    private: BasicArrayList* factoryList;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_ADVANCEDPLAYEROWNEDRTSLAYERS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDPLAYEROWNEDRTSLAYERS_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/layer/PlayerOwnedRTSLayers.h")
#include "org/allbinary/game/layer/PlayerOwnedRTSLayers.h"
#endif
#if __has_include("org/allbinary/game/layer/RTSLayer.h")
#include "org/allbinary/game/layer/RTSLayer.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryGameLayer.h")
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#endif

        #endif
    
