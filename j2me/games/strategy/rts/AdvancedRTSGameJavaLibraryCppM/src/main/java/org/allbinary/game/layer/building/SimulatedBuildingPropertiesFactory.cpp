
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_BUILDING_SIMULATEDBUILDINGPROPERTIESFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_BUILDING_SIMULATEDBUILDINGPROPERTIESFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/building/SimulatedBuildingPropertiesFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/combat/damage/DamageFloaters.h>

      
#include <org/allbinary/game/tracking/TrackingEvent.h>

      
#include <org/allbinary/game/tracking/TrackingEventHandler.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/building/BuildingPropertiesFactory.h"
#include "org/allbinary/game/layer/building/BuildingLayer.h"


SimulatedBuildingPropertiesFactory::SimulatedBuildingPropertiesFactory() {
        }
        auto SimulatedBuildingPropertiesFactory::instanceC_owner() -> SimulatedBuildingPropertiesFactory* { static std::unique_ptr<SimulatedBuildingPropertiesFactory> value(new SimulatedBuildingPropertiesFactory()); return value.get(); }
SimulatedBuildingPropertiesFactory* SimulatedBuildingPropertiesFactory::instanceC = SimulatedBuildingPropertiesFactory::instanceC_owner();

    auto SimulatedBuildingPropertiesFactory::getInstance() -> SimulatedBuildingPropertiesFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SimulatedBuildingPropertiesFactory::instanceC;
    
}


    auto SimulatedBuildingPropertiesFactory::getEfficiencyPerLevel(BuildingLayer* buildingLayer) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto SimulatedBuildingPropertiesFactory::getDamageFloaters(BuildingLayer* buildingLayer) -> DamageFloaters*{

    DamageFloaters* damageFloaters = DamageFloaters::getInstance();;
    
this->damageFloatersPaintableInterface= damageFloaters;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return damageFloaters;
    
}


                //@Throws(Exception.constructor)
            
    auto SimulatedBuildingPropertiesFactory::getHealthBar(BuildingLayer* buildingLayer) -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullPaintable::getInstance();;
    
}


    auto SimulatedBuildingPropertiesFactory::getHashtable() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StdUtil::getInstance()->NULL_TABLE;
    
}


    auto SimulatedBuildingPropertiesFactory::getTrackingEvent(BuildingLayer* buildingLayer) -> TrackingEvent*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new TrackingEvent(TrackingEventHandler::getInstance());
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_BUILDING_SIMULATEDBUILDINGPROPERTIESFACTORY_CPP
