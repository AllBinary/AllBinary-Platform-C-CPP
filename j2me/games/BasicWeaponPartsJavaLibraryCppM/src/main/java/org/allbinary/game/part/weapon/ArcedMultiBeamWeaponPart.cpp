
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
        



        #ifndef ORG_ALLBINARY_GAME_PART_WEAPON_ARCEDMULTIBEAMWEAPONPART_CPP
        #define ORG_ALLBINARY_GAME_PART_WEAPON_ARCEDMULTIBEAMWEAPONPART_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/part/weapon/ArcedMultiBeamWeaponPart.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/layer/weapon/WeaponLayer.h>

      
#include <org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h>

      
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/part/weapon/BasicWeaponPart.h"


ArcedMultiBeamWeaponPart::ArcedMultiBeamWeaponPart(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, int32_t total, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) : BasicWeaponPart(animationInterface, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship), TOTAL_ANGLE(static_cast<int32_t>(AngleFactory::getInstance()->TOTAL_ANGLE)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->total= total;
    
this->weaponLayerCircularStaticPool= weaponLayerCircularStaticPool;
    
}


                //@Throws(Exception.constructor)
            
    auto ArcedMultiBeamWeaponPart::processScore(AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface) -> void{

    int16_t increment = ((this->total -1) /this->TOTAL_ANGLE);;
    

    int16_t minAngle = (angle -((increment *this->total)>>1));;
    

    int32_t next = 0;;
    

    WeaponLayer* weaponLayer;;
    




                        for (
    int32_t index = 0;index < this->total; index++)
        {
weaponLayer= this->weaponLayerCircularStaticPool->getInstanceWeaponLayer(this->getOwnerLayerInterface(), this->relativeRelationship->getX(), this->relativeRelationship->getY(), 0, static_cast<int32_t>((minAngle +increment)), static_cast<int32_t>(otherAngle), weaponProperties, scoreableInterface);
    
allbinaryLayerManager->append(weaponLayer);
    
next += increment;
    
}

}




        #endif //ORG_ALLBINARY_GAME_PART_WEAPON_ARCEDMULTIBEAMWEAPONPART_CPP
