
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHINPUTFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHINPUTFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class InputFactory;
class InputToGameKeyMapping;
class NullUtil;
class LogUtil;
class StringMaker;
class CommonLabels;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TouchButtonInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicTouchInputFactory
            : public virtual Object
         {

    private: static Object* instance;

    public: static BasicTouchInputFactory* getInstance();


            
    public: BasicTouchInputFactory();
        
    /*protected*/ public: LogUtil* logUtil;

    public: TouchButtonInput* SPECIAL_BUTTON_SIX;

    public: TouchButtonInput* SPECIAL_BUTTON_FIVE;

    public: TouchButtonInput* SPECIAL_BUTTON_FOUR;

    public: TouchButtonInput* SPECIAL_BUTTON_THREE;

    public: TouchButtonInput* SPECIAL_BUTTON_TWO;

    public: TouchButtonInput* SPECIAL_BUTTON_ONE;

    public: TouchButtonInput* UP;

    public: TouchButtonInput* LEFT;

    public: TouchButtonInput* RIGHT;

    public: TouchButtonInput* DOWN;

    public: TouchButtonInput* NONE;

    private: bool initialized = false;

    private: BasicArrayList* list;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void init(InputToGameKeyMapping* inputToGameKeyMapping);

    public: void updateAll(InputToGameKeyMapping* inputToGameKeyMapping);

    public: void updateAllList(BasicArrayList* list, InputToGameKeyMapping* inputToGameKeyMapping);

    public: BasicArrayList* getList();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHINPUTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHINPUTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHINPUTFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/InputFactory.h>)
#include <org/allbinary/game/input/InputFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/InputToGameKeyMapping.h>)
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonInput.h")
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#endif

        #endif
    
