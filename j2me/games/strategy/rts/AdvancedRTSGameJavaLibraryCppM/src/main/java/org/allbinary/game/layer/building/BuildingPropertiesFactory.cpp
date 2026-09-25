
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BuildingLayer.h"

class BuildingPropertiesFactory
            : public Object
         {

    private: static BuildingPropertiesFactory instance() { return BuildingPropertiesFactory(); }

    public: static BuildingPropertiesFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BuildingPropertiesFactory::instance();
    
}


    public: int32_t getEfficiencyPerLevel(BuildingLayer buildingLayer){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 10000 /buildingLayer.getMaxLevel() +10000 % buildingLayer.getMaxLevel();
    
}


    public: Paintable damageFloatersPaintableInterface = NullPaintable::getInstance();

    public: DamageFloaters getDamageFloaters(BuildingLayer buildingLayer){

    DamageFloaters damageFloaters = DamageFloaters::getInstance();;
    

                        if(Features::getInstance().isFeature(GameFeatureFactory::getInstance().DAMAGE_FLOATERS))
                        
                                    {
                                    damageFloaters= PtsDamageFloaters(buildingLayer);
    
this->damageFloatersPaintableInterface= damageFloaters;
    

                                    }
                                
                        else {
                            damageFloaters= DamageFloaters();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return damageFloaters;
    
}


                //@Throws(Exception.constructor)
            
    public: Paintable getHealthBar(BuildingLayer buildingLayer){

    Paintable healthBar = NullPaintable::getInstance();;
    

                        if(Features::getInstance().isFeature(GameFeatureFactory::getInstance().HEALTH_BARS))
                        
                                    {
                                    healthBar= HealthBar(buildingLayer, buildingLayer.getHealthInterface(), HealthBarTwodAnimation(buildingLayer as AllBinaryLayer, BasicHudFactory::getInstance().BOTTOMLEFT),  -1);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return healthBar;
    
}


    public: Hashtable<any, any> getHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StdUtil::getInstance().createHashtable();;
    
}


    public: TrackingEvent getTrackingEvent(BuildingLayer buildingLayer){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TrackingEvent(buildingLayer);
    
}


};

            

