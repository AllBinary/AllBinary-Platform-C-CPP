
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGPROPERTIESFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGPROPERTIESFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/building/BuildingPropertiesFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/combat/damage/DamageFloaters.h>

      
#include <org/allbinary/game/combat/damage/PtsDamageFloaters.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/game/health/HealthBar.h>

      
#include <org/allbinary/game/health/HealthBarTwodAnimation.h>

      
#include <org/allbinary/game/tracking/TrackingEvent.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/building/BuildingLayer.h"


BuildingPropertiesFactory::BuildingPropertiesFactory() : damageFloatersPaintableInterface(NullPaintable::getInstance()) {
        }
        auto BuildingPropertiesFactory::instance_owner() -> BuildingPropertiesFactory* { static std::unique_ptr<BuildingPropertiesFactory> value(new BuildingPropertiesFactory()); return value.get(); }
BuildingPropertiesFactory* BuildingPropertiesFactory::instance = BuildingPropertiesFactory::instance_owner();

    auto BuildingPropertiesFactory::getInstance() -> BuildingPropertiesFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BuildingPropertiesFactory::instance;
    
}


    auto BuildingPropertiesFactory::getEfficiencyPerLevel(BuildingLayer* buildingLayer) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 10000 /buildingLayer->getMaxLevel() +10000 % buildingLayer->getMaxLevel();
    
}


    auto BuildingPropertiesFactory::getDamageFloaters(BuildingLayer* buildingLayer) -> DamageFloaters*{

    DamageFloaters* damageFloaters = DamageFloaters::getInstance();;
    

                        if(Features::getInstance()->isFeature(GameFeatureFactory::getInstance()->DAMAGE_FLOATERS))
                        
                                    {
                                    damageFloaters= new PtsDamageFloaters(buildingLayer);
    
this->damageFloatersPaintableInterface= damageFloaters;
    

                                    }
                                
                        else {
                            damageFloaters= new DamageFloaters();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return damageFloaters;
    
}


                //@Throws(Exception.constructor)
            
    auto BuildingPropertiesFactory::getHealthBar(BuildingLayer* buildingLayer) -> Paintable*{

    Paintable* healthBar = NullPaintable::getInstance();;
    

                        if(Features::getInstance()->isFeature(GameFeatureFactory::getInstance()->HEALTH_BARS))
                        
                                    {
                                    healthBar= new HealthBar(buildingLayer, buildingLayer->getHealthInterface(), new HealthBarTwodAnimation(dynamic_cast<AllBinaryLayer*>(buildingLayer), BasicHudFactory::getInstance()->BOTTOMLEFT),  -1);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return healthBar;
    
}


    auto BuildingPropertiesFactory::getHashtable() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StdUtil::getInstance()->createHashtable();;
    
}


    auto BuildingPropertiesFactory::getTrackingEvent(BuildingLayer* buildingLayer) -> TrackingEvent*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new TrackingEvent(buildingLayer);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGPROPERTIESFACTORY_CPP
