
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_BUILDING_SIMULATEDBUILDINGPROPERTIESFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_BUILDING_SIMULATEDBUILDINGPROPERTIESFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class DamageFloaters;
class TrackingEvent;
class TrackingEventHandler;
class NullPaintable;
class Paintable;
class StdUtil;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/building/BuildingPropertiesFactory.h"
class BuildingLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SimulatedBuildingPropertiesFactory: public BuildingPropertiesFactory {

    private: static SimulatedBuildingPropertiesFactory* instanceC_owner();
    private: static SimulatedBuildingPropertiesFactory* instanceC;

    public: static SimulatedBuildingPropertiesFactory* getInstance();


            
    public: SimulatedBuildingPropertiesFactory();
        
    public: int32_t getEfficiencyPerLevel(BuildingLayer* buildingLayer);

    public: DamageFloaters* getDamageFloaters(BuildingLayer* buildingLayer);

                //@Throws(Exception.constructor)
            
    public: Paintable* getHealthBar(BuildingLayer* buildingLayer);

    public: ABHashtable<Object*, Object*>* getHashtable();

    public: TrackingEvent* getTrackingEvent(BuildingLayer* buildingLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_BUILDING_SIMULATEDBUILDINGPROPERTIESFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_BUILDING_SIMULATEDBUILDINGPROPERTIESFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_BUILDING_SIMULATEDBUILDINGPROPERTIESFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/combat/damage/DamageFloaters.h>)
#include <org/allbinary/game/combat/damage/DamageFloaters.h>
#endif
#if __has_include(<org/allbinary/game/tracking/TrackingEvent.h>)
#include <org/allbinary/game/tracking/TrackingEvent.h>
#endif
#if __has_include(<org/allbinary/game/tracking/TrackingEventHandler.h>)
#include <org/allbinary/game/tracking/TrackingEventHandler.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullPaintable.h>)
#include <org/allbinary/graphics/paint/NullPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/layer/building/BuildingPropertiesFactory.h")
#include "org/allbinary/game/layer/building/BuildingPropertiesFactory.h"
#endif
#if __has_include("org/allbinary/game/layer/building/BuildingLayer.h")
#include "org/allbinary/game/layer/building/BuildingLayer.h"
#endif

        #endif
    
