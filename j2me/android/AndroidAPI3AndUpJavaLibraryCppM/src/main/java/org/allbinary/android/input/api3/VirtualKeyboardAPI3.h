
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_API3_VIRTUALKEYBOARDAPI3_H
        #define ORG_ALLBINARY_ANDROID_INPUT_API3_VIRTUALKEYBOARDAPI3_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Runnable.h"
        
class Activity;
#include <org/allbinary/android/input/VirtualKeyboard.h>
class VirtualKeyboardEvent;
class VirtualKeyboardEventHandler;
#include <org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h>
class ForcedLogUtil;
class AllBinaryEventObject;
class EventStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ShowVirtualKeyboardRunnable;
class HideVirtualKeyboardRunnable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VirtualKeyboardAPI3: public VirtualKeyboard, public VirtualKeyboardEventListenerInterface {

    public: static int32_t MAX_API;

    public: static inline int32_t MIN_API = 3;

    private: bool virtualKeyboard= false;

    private: Activity* activity;

    private: Runnable* showVirtualKeyboardRunnable;

    private: Runnable* hideVirtualKeyboardRunnable;

public: VirtualKeyboardAPI3(Activity* activity);

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onVirtualKeyboardEvent(VirtualKeyboardEvent* virtualKeyboardEvent);

    public: void forceHide();

    public: void hide();

    private: void showVirtualKeyboard();

    private: void hideVirtualKeyboard();

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_API3_VIRTUALKEYBOARDAPI3_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_INPUT_API3_VIRTUALKEYBOARDAPI3_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_INPUT_API3_VIRTUALKEYBOARDAPI3_H_COMPLETE
        #if __has_include(<android/app/Activity.h>)
#include <android/app/Activity.h>
#endif
#if __has_include(<org/allbinary/android/input/VirtualKeyboard.h>)
#include <org/allbinary/android/input/VirtualKeyboard.h>
#endif
#if __has_include(<org/allbinary/input/event/VirtualKeyboardEvent.h>)
#include <org/allbinary/input/event/VirtualKeyboardEvent.h>
#endif
#if __has_include(<org/allbinary/input/event/VirtualKeyboardEventHandler.h>)
#include <org/allbinary/input/event/VirtualKeyboardEventHandler.h>
#endif
#if __has_include(<org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h>)
#include <org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include("org/allbinary/android/input/api3/ShowVirtualKeyboardRunnable.h")
#include "org/allbinary/android/input/api3/ShowVirtualKeyboardRunnable.h"
#endif
#if __has_include("org/allbinary/android/input/api3/HideVirtualKeyboardRunnable.h")
#include "org/allbinary/android/input/api3/HideVirtualKeyboardRunnable.h"
#endif

        #endif
    
