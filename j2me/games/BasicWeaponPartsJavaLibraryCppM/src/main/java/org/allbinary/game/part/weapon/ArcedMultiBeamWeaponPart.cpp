
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
        



            #include "../../../../../java/lang/Exception.h"
        
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
        #include "BasicWeaponPart.h"

class ArcedMultiBeamWeaponPart: public BasicWeaponPart {

    private: WeaponLayerCircularPool weaponLayerCircularStaticPool;

    private: int32_t total;

public: ArcedMultiBeamWeaponPart(Animation animationInterface, AllBinaryLayer sourceLayerInterface, WeaponLayerCircularPool weaponLayerCircularStaticPool, int32_t total, WeaponProperties weaponProperties, ScoreableInterface scoreableInterface, RelativeRelationship relativeRelationship){
            super(animationInterface, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->total= total;
    
this->weaponLayerCircularStaticPool= weaponLayerCircularStaticPool;
    
}


    private: const int32_t TOTAL_ANGLE = static_cast<int32_t>(AngleFactory::getInstance().TOTAL_ANGLE);

                //@Throws(Exception.constructor)
            
    public: void processScore(AllBinaryLayerManager allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties weaponProperties, ScoreableInterface scoreableInterface){

    int16_t increment = ((this->total -1) /this->TOTAL_ANGLE);;
    

    int16_t minAngle = (angle -((increment *this->total)>>1));;
    

    int32_t next = 0;;
    

    WeaponLayer weaponLayer;;
    




                        for (
    int32_t index = 0;index < this->total; index++)
        {
weaponLayer= this->weaponLayerCircularStaticPool.getInstanceWeaponLayer(this->getOwnerLayerInterface(), this->relativeRelationship.getX(), this->relativeRelationship.getY(), 0, static_cast<int32_t>((minAngle +increment)), static_cast<int32_t>(otherAngle), weaponProperties, scoreableInterface);
    
allbinaryLayerManager.append(weaponLayer);
    
next += increment;
    
}

}


};

            

