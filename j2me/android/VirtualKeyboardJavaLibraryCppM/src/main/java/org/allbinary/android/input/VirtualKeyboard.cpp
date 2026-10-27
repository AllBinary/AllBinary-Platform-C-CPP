
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARD_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARD_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/VirtualKeyboard.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/input/event/VirtualKeyboardEvent.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

VirtualKeyboard::VirtualKeyboard() {
        }
        auto VirtualKeyboard::NULL_VIRTUAL_KEYBOARD_owner() -> VirtualKeyboard* { static std::unique_ptr<VirtualKeyboard> value(new VirtualKeyboard()); return value.get(); }
VirtualKeyboard* VirtualKeyboard::NULL_VIRTUAL_KEYBOARD = VirtualKeyboard::NULL_VIRTUAL_KEYBOARD_owner();

    auto VirtualKeyboard::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto VirtualKeyboard::onVirtualKeyboardEvent(VirtualKeyboardEvent* virtualKeyboardEvent) -> void{
}


    auto VirtualKeyboard::forceHide() -> void{
}


    auto VirtualKeyboard::hide() -> void{
}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_VIRTUALKEYBOARD_CPP
