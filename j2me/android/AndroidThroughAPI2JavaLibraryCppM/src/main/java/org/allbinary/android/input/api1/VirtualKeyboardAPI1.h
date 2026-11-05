
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_API1_VIRTUALKEYBOARDAPI1_H
        #define ORG_ALLBINARY_ANDROID_INPUT_API1_VIRTUALKEYBOARDAPI1_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/android/input/VirtualKeyboard.h>
#include <org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h>
class Activity;
class VirtualKeyboardEvent;
class AllBinaryEventObject;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VirtualKeyboardAPI1: public VirtualKeyboard, public virtual VirtualKeyboardEventListenerInterface {

    public: static inline int32_t MIN_API = 1;

    public: static inline int32_t MAX_API = 2;

public: VirtualKeyboardAPI1(Activity* activity);

    public: void onVirtualKeyboardEvent(VirtualKeyboardEvent* virtualKeyboardEvent);

    public: void onEvent(AllBinaryEventObject* eventObject);

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_API1_VIRTUALKEYBOARDAPI1_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_INPUT_API1_VIRTUALKEYBOARDAPI1_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_INPUT_API1_VIRTUALKEYBOARDAPI1_H_COMPLETE
        #if __has_include(<org/allbinary/android/input/VirtualKeyboard.h>)
#include <org/allbinary/android/input/VirtualKeyboard.h>
#endif
#if __has_include(<org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h>)
#include <org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h>
#endif
#if __has_include(<android/app/Activity.h>)
#include <android/app/Activity.h>
#endif
#if __has_include(<org/allbinary/input/event/VirtualKeyboardEvent.h>)
#include <org/allbinary/input/event/VirtualKeyboardEvent.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif

        #endif
    
