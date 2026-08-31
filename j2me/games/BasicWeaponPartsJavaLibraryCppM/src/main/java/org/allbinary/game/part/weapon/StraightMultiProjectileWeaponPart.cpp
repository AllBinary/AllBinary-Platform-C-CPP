
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
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicWeaponPart.h"

class StraightMultiProjectileWeaponPart: public BasicWeaponPart {
        

    public static StraightMultiProjectileWeaponPart createStraightMultiProjectileWeaponPart(Animation animationInterface, WeaponLayerCircularPool weaponLayerCircularStaticPool){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StraightMultiProjectileWeaponPart(animationInterface, AllBinaryLayer.NULL_ALLBINARY_LAYER, weaponLayerCircularStaticPool, 2, WeaponProperties.NULL_WEAPON_PROPERTIES, NoScoreable.getInstance(), RelativeRelationship.NULL_RELATIVE_RELATIONSHIP);
    
}


    private: const weaponLayerCircularStaticPool: WeaponLayerCircularPool;

    private: const total: int32_t;

public constructor (Animation animationInterface, AllBinaryLayer sourceLayerInterface, WeaponLayerCircularPool weaponLayerCircularStaticPool, int32_t total, WeaponProperties weaponProperties, ScoreableInterface scoreableInterface, RelativeRelationship relativeRelationship){
            super(animationInterface, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.total= total;
    
this.weaponLayerCircularStaticPool= weaponLayerCircularStaticPool;
    
}


    private: const noDecimalTrigTable: NoDecimalTrigTable = NoDecimalTrigTable.getInstance()!;

                //@Throws(Exception.constructor)
            
    public processScore(AllBinaryLayerManager allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties weaponProperties, ScoreableInterface scoreableInterface){

    sourceLayerInterface: AllBinaryLayer = this.getOwnerLayerInterface()!;;
    

    reducedWidth: int32_t = (sourceLayerInterface!.getWidth() *8 /10);;
    

    halfWidth: int32_t = (reducedWidth>>1);;
    

    x: int32_t = this.relativeRelationship!.getX()!;;
    

    y: int32_t = this.relativeRelationship!.getY()!;;
    

    sine: int64_t= 0;;
    

    beamX: int32_t= 0;;
    

    cosine: int64_t= 0;;
    

    beamY: int32_t= 0;;
    

    weaponLayer: WeaponLayer;;
    

    increment: int32_t = reducedWidth /(this.total -1);;
    

    next: int32_t =  -halfWidth;;
    




                        for (
    index: int32_t = 0;index < this.total; index++)
        {
sine= (next *this.noDecimalTrigTable!.sin(static_cast<int32_t>(angle)));
    
beamX= static_cast<int32_t>((sine /this.noDecimalTrigTable!.SCALE));
    
cosine= (next *this.noDecimalTrigTable!.cos(static_cast<int32_t>(angle)));
    
beamY=  -static_cast<int32_t>((cosine /this.noDecimalTrigTable!.SCALE));
    
weaponLayer= this.weaponLayerCircularStaticPool!.getInstanceWeaponLayer(sourceLayerInterface, x +beamX, y +beamY, 0, static_cast<int32_t>(angle), static_cast<int32_t>(otherAngle), weaponProperties, scoreableInterface);
    
allbinaryLayerManager!.append(weaponLayer);
    
next += increment;
    
}

}


};

            

