
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEBASEBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEBASEBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/combat/destroy/DestroyableInterface.h"


DestroyableBaseBehavior::DestroyableBaseBehavior() {
        }
        auto DestroyableBaseBehavior::instance_owner() -> DestroyableBaseBehavior* { static std::unique_ptr<DestroyableBaseBehavior> value(new DestroyableBaseBehavior()); return value.get(); }
DestroyableBaseBehavior* DestroyableBaseBehavior::instance = DestroyableBaseBehavior::instance_owner();

    auto DestroyableBaseBehavior::getInstance() -> DestroyableBaseBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DestroyableBaseBehavior::instance;
    
}


    auto DestroyableBaseBehavior::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getClass()->getName();;
    
}


                //@Throws(Exception.constructor)
            
    auto DestroyableBaseBehavior::isDestroyed() -> bool{



                            throw Exception(CommonStrings::getInstance()->NOT_IMPLEMENTED);
                    
}


    auto DestroyableBaseBehavior::setDestroyed(bool destroyed) -> void{
}




        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEBASEBEHAVIOR_CPP
