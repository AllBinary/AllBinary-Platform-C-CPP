
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGPROPERTIESFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGPROPERTIESFACTORY_H

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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BuildingLayer.h"

class BuildingPropertiesFactory
            : public Object
         {
        

    private: static const instance: BuildingPropertiesFactory = new BuildingPropertiesFactory();

    public static BuildingPropertiesFactory getInstance();

    public int32_t getEfficiencyPerLevel(BuildingLayer buildingLayer);

    public damageFloatersPaintableInterface: Paintable = NullPaintable.getInstance()!;

    public DamageFloaters getDamageFloaters(BuildingLayer buildingLayer);

                //@Throws(Exception.constructor)
            
    public Paintable getHealthBar(BuildingLayer buildingLayer);

    public Hashtable<any, any> getHashtable();

    public TrackingEvent getTrackingEvent(BuildingLayer buildingLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGPROPERTIESFACTORY_H
