
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicWeaponPart.h"
#include "BasicWeaponPartFactoryInterface.h"

class BasicWeaponPartCircularPool
            : public Object
         {

    public: static const BasicWeaponPartCircularPool NULL_BASIC_WEAPON_PART_CIRCULAR_POOL = BasicWeaponPartCircularPool();

    private: BasicWeaponPart basicWeaponPart = BasicWeaponPart::NULL_BASIC_WEAPON_PART;

                //@Throws(Exception.constructor)
            
    public: void init(BasicWeaponPartFactoryInterface basicWeaponPartFactoryInterface){
this->basicWeaponPart= basicWeaponPartFactoryInterface.getInstance();
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: BasicWeaponPart getInstance(AllBinaryLayer sourceLayerInterface, WeaponProperties weaponProperties, ScoreableInterface scoreableInterface, RelativeRelationship relativeRelationship){
this->basicWeaponPart.init(sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicWeaponPart;
    
}


};

            

