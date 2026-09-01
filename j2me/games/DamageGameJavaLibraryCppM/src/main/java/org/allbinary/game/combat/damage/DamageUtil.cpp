
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DamageableInterface.h"

class DamageUtil
            : public Object
         {

    private: static DamageUtil instance() { return DamageUtil(); }

    public: static DamageUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DamageUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: const std::string COLLIDE = "collide";

private: DamageUtil(){
}


                //@Throws(Exception.constructor)
            
    public: void process(DamageableInterface damageableInterface, DamageableInterface damageableInterface2){
damageableInterface.damage(damageableInterface2.getDamage(0), 0);
    
}


                //@Throws(Exception.constructor)
            
    public: void debugDamage(CollidableCompositeLayer collidableInterfaceCompositeInterface1, CollidableCompositeLayer collidableInterfaceCompositeInterface){

    CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer = collidableInterfaceCompositeInterface as CollidableDestroyableDamageableLayer;;
    

    int32_t damage = collidableDestroyableDamageableLayer.getDamage(0);;
    

                        if(damage > 20000)
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Collision ");
    
stringBuffer.append(collidableInterfaceCompositeInterface1.toString());
    
stringBuffer.append(" with: ");
    
stringBuffer.append(collidableInterfaceCompositeInterface.toString());
    
stringBuffer.append(" damage: ");
    
stringBuffer.appendint(damage);
    
this->logUtil.putF(stringBuffer.toString(), collidableInterfaceCompositeInterface1, this->COLLIDE);
    

                                    }
                                
}


};

            

