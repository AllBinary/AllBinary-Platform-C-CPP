
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PCGameKey;
class PCKeyFactory;
class Input;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlatformKeyFactory
            : public virtual Object
         {

    private: static Object* instance;

    public: static PlatformKeyFactory* getInstance();


            
    public: PlatformKeyFactory();
        
    public: std::string getString(int32_t keyCode);

    public: bool isSubmission(Input* input);

    public: bool isDelete(Input* input);

    public: bool isBackSpace(Input* input);

    public: bool isUp(Input* input);

    public: bool isDown(Input* input);

    public: bool isEnter(Input* input);

    public: bool isLeft(Input* input);

    public: bool isRight(Input* input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/allbinary/game/input/PCGameKey.h")
#include "org/allbinary/game/input/PCGameKey.h"
#endif
#if __has_include("org/allbinary/game/input/PCKeyFactory.h")
#include "org/allbinary/game/input/PCKeyFactory.h"
#endif
#if __has_include("org/allbinary/game/input/Input.h")
#include "org/allbinary/game/input/Input.h"
#endif

        #endif
    
