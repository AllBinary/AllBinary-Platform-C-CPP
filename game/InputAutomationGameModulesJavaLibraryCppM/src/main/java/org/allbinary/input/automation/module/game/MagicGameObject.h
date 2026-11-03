
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_MAGICGAMEOBJECT_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_MAGICGAMEOBJECT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/image/BufferedImage.h>
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/game/MeteredGameObject.h"
#include "org/allbinary/input/automation/module/game/MagicGameObjectInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MagicGameObject: public MeteredGameObject, public virtual MagicGameObjectInterface {

    private: const std::string MP_LABEL = "MP:";

public: MagicGameObject(std::vector<BufferedImage*> bufferedImage, int32_t minX, int32_t maxX, int32_t y);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_MAGICGAMEOBJECT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_MAGICGAMEOBJECT_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_MAGICGAMEOBJECT_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/input/automation/module/game/MeteredGameObject.h")
#include "org/allbinary/input/automation/module/game/MeteredGameObject.h"
#endif
#if __has_include("org/allbinary/input/automation/module/game/MagicGameObjectInterface.h")
#include "org/allbinary/input/automation/module/game/MagicGameObjectInterface.h"
#endif

        #endif
    
