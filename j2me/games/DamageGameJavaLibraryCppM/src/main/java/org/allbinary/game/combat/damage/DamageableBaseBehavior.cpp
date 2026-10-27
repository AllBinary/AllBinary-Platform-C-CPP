
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

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/combat/damage/DamageableInterface.h"

class DamageableBaseBehavior
            : public Object
        , public DamageableInterface {

    private: static DamageableBaseBehavior* instance() { static std::unique_ptr<DamageableBaseBehavior> value(new DamageableBaseBehavior()); return value.get(); }

    public: static DamageableBaseBehavior* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DamageableBaseBehavior::instance();
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getClass()->getName();;
    
}


                //@Throws(Exception.constructor)
            
    public: void damage(int32_t damage, int32_t damageType){
}


                //@Throws(Exception.constructor)
            
    public: int32_t getDamage(int32_t damageType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 6000;
    
}


};

            

