
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
        class ActivityFractureControllerUtilFactory;
class AndroidKeyFactory;
class AndroidGameKey;
class Input;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlatformKeyFactory
            : public virtual Object
         {

    private: static Object* instance;

    public: static PlatformKeyFactory* getInstance();


            
    public: PlatformKeyFactory();
        
    private: AndroidKeyFactory* androidKeyFactory;

    public: std::string getString(int32_t keyCode);

    public: bool isSubmission(Input* input);

    public: bool isDelete(Input* input);

    public: bool isBackSpace(Input* input);

    public: bool isLeft(Input* input);

    public: bool isRight(Input* input);

    public: bool isUp(Input* input);

    public: bool isDown(Input* input);

    public: bool isEnter(Input* input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_PLATFORMKEYFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/allbinary/game/input/ActivityFractureControllerUtilFactory.h")
#include "org/allbinary/game/input/ActivityFractureControllerUtilFactory.h"
#endif
#if __has_include("org/allbinary/game/input/AndroidKeyFactory.h")
#include "org/allbinary/game/input/AndroidKeyFactory.h"
#endif
#if __has_include("org/allbinary/game/input/AndroidGameKey.h")
#include "org/allbinary/game/input/AndroidGameKey.h"
#endif
#if __has_include("org/allbinary/game/input/Input.h")
#include "org/allbinary/game/input/Input.h"
#endif

        #endif
    
