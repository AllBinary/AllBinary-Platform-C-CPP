
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_INPUTFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_INPUTFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class NullUtil;
class LogUtil;
class SmallIntegerSingletonFactory;
class StringMaker;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Input;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputFactory
            : public virtual Object
         {

    private: static Object* instance;

    public: static InputFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    public: const std::string KEY_CODE_LABEL = "KeyCode: ";

    public: const std::string DEVICE_ID_LABEL = "DeviceId: ";

    public: const int32_t MAX;

    /*protected*/ public: std::vector<Input*> inputIntegerArray;

    public: Input* NO_INPUT;

private: InputFactory();

    public: void add(int32_t id, Input* input);

    public: Input* getInstanceById(int32_t id);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_INPUTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_INPUTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_INPUTFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/input/Input.h")
#include "org/allbinary/game/input/Input.h"
#endif

        #endif
    
