
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/layer/weapon/WeaponLayer.h>

      
#include <org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h>

      
#include <org/allbinary/game/score/NoScoreable.h>

      
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/math/NoDecimalTrigTable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/part/weapon/BasicWeaponPart.h"

class StraightMultiProjectileWeaponPart: public BasicWeaponPart {

    public: static StraightMultiProjectileWeaponPart* createStraightMultiProjectileWeaponPart(Animation* animationInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StraightMultiProjectileWeaponPart(animationInterface, AllBinaryLayer::NULL_ALLBINARY_LAYER, weaponLayerCircularStaticPool, 2, WeaponProperties::NULL_WEAPON_PROPERTIES, NoScoreable::getInstance(), RelativeRelationship::NULL_RELATIVE_RELATIONSHIP);
    
}


    private: WeaponLayerCircularPool* weaponLayerCircularStaticPool;

    private: int32_t total;

public: StraightMultiProjectileWeaponPart(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, int32_t total, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) : BasicWeaponPart(animationInterface, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->total= total;
    
this->weaponLayerCircularStaticPool= weaponLayerCircularStaticPool;
    
}


    private: NoDecimalTrigTable* noDecimalTrigTable = NoDecimalTrigTable::getInstance();

                //@Throws(Exception.constructor)
            
    public: void processScore(AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface){

    AllBinaryLayer* sourceLayerInterface = this->getOwnerLayerInterface();;
    

    int32_t reducedWidth = (sourceLayerInterface->getWidth() *8 /10);;
    

    int32_t halfWidth = (reducedWidth>>1);;
    

    int32_t x = this->relativeRelationship.getX();;
    

    int32_t y = this->relativeRelationship.getY();;
    

    int64_t sine= 0;;
    

    int32_t beamX= 0;;
    

    int64_t cosine= 0;;
    

    int32_t beamY= 0;;
    

    WeaponLayer* weaponLayer;;
    

    int32_t increment = reducedWidth /(this->total -1);;
    

    int32_t next =  -halfWidth;;
    




                        for (
    int32_t index = 0;index < this->total; index++)
        {
sine= (next *this->noDecimalTrigTable->sin(static_cast<int32_t>(angle)));
    
beamX= static_cast<int32_t>((sine /this->noDecimalTrigTable->SCALE));
    
cosine= (next *this->noDecimalTrigTable->cos(static_cast<int32_t>(angle)));
    
beamY=  -static_cast<int32_t>((cosine /this->noDecimalTrigTable->SCALE));
    
weaponLayer= this->weaponLayerCircularStaticPool->getInstanceWeaponLayer(sourceLayerInterface, x +beamX, y +beamY, 0, static_cast<int32_t>(angle), static_cast<int32_t>(otherAngle), weaponProperties, scoreableInterface);
    
allbinaryLayerManager->append(weaponLayer);
    
next += increment;
    
}

}


};

            

