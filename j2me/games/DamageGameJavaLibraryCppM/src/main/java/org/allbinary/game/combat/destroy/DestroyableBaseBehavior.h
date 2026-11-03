
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEBASEBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEBASEBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/combat/destroy/DestroyableInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DestroyableBaseBehavior
            : public virtual Object
        , public virtual DestroyableInterface {

    private: static DestroyableBaseBehavior* instance_owner();
    private: static DestroyableBaseBehavior* instance;

    public: static DestroyableBaseBehavior* getInstance();


            
    public: DestroyableBaseBehavior();
        
    public: std::string getName();

                //@Throws(Exception.constructor)
            
    public: bool isDestroyed();

    public: void setDestroyed(bool destroyed);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEBASEBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEBASEBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEBASEBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/combat/destroy/DestroyableInterface.h")
#include "org/allbinary/game/combat/destroy/DestroyableInterface.h"
#endif

        #endif
    
