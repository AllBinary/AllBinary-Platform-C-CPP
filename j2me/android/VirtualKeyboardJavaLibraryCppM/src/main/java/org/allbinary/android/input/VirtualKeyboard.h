
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARD_H
        #define ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARD_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class VirtualKeyboardEvent;
class ForcedLogUtil;
class AllBinaryEventObject;
class EventStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VirtualKeyboard
            : public virtual Object
         {

    private: static VirtualKeyboard* NULL_VIRTUAL_KEYBOARD_owner();
    public: static VirtualKeyboard* NULL_VIRTUAL_KEYBOARD;


            
    public: VirtualKeyboard();
        
    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onVirtualKeyboardEvent(VirtualKeyboardEvent* virtualKeyboardEvent);

    public: void forceHide();

    public: void hide();

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARD_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARD_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARD_H_COMPLETE
        #if __has_include(<org/allbinary/input/event/VirtualKeyboardEvent.h>)
#include <org/allbinary/input/event/VirtualKeyboardEvent.h>
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

        #endif
    
