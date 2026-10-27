
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

class BuildingPropertiesFactory
            : public Object
         {

    private: static BuildingPropertiesFactory* instance() { static std::unique_ptr<BuildingPropertiesFactory> value(new BuildingPropertiesFactory()); return value.get(); }

    public: static BuildingPropertiesFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BuildingPropertiesFactory::instance();
    
}


    public: int32_t getEfficiencyPerLevel(BuildingLayer* buildingLayer){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 10000 /buildingLayer->getMaxLevel() +10000 % buildingLayer->getMaxLevel();
    
}


    public: Paintable* damageFloatersPaintableInterface = NullPaintable::getInstance();

    public: DamageFloaters* getDamageFloaters(BuildingLayer* buildingLayer){

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
            
    public: Paintable* getHealthBar(BuildingLayer* buildingLayer){

    Paintable* healthBar = NullPaintable::getInstance();;
    

                        if(Features::getInstance()->isFeature(GameFeatureFactory::getInstance()->HEALTH_BARS))
                        
                                    {
                                    healthBar= new HealthBar(buildingLayer, buildingLayer->getHealthInterface(), new HealthBarTwodAnimation(dynamic_cast<AllBinaryLayer*>(buildingLayer), BasicHudFactory::getInstance()->BOTTOMLEFT),  -1);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return healthBar;
    
}


    public: ABHashtable<Object*, Object*>* getHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StdUtil::getInstance()->createHashtable();;
    
}


    public: TrackingEvent* getTrackingEvent(BuildingLayer* buildingLayer){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new TrackingEvent(buildingLayer);
    
}


};

            

