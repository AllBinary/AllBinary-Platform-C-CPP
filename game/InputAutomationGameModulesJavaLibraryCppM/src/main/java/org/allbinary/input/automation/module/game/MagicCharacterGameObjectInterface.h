
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_MAGICCHARACTERGAMEOBJECTINTERFACE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_MAGICCHARACTERGAMEOBJECTINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class HitPointGameObjectInterface;
class MagicGameObjectInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MagicCharacterGameObjectInterface
            : public virtual Object
         {

    public: virtual HitPointGameObjectInterface* getHitPointGameObjectInterface() = 0;

    public: virtual MagicGameObjectInterface* getMagicGameObjectInterface() = 0;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_MAGICCHARACTERGAMEOBJECTINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_MAGICCHARACTERGAMEOBJECTINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_MAGICCHARACTERGAMEOBJECTINTERFACE_H_COMPLETE
        #if __has_include("org/allbinary/input/automation/module/game/HitPointGameObjectInterface.h")
#include "org/allbinary/input/automation/module/game/HitPointGameObjectInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/module/game/MagicGameObjectInterface.h")
#include "org/allbinary/input/automation/module/game/MagicGameObjectInterface.h"
#endif

        #endif
    
