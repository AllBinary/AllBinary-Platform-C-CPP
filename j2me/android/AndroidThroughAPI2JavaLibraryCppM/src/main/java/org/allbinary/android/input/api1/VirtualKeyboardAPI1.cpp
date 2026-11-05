
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_API1_VIRTUALKEYBOARDAPI1_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_API1_VIRTUALKEYBOARDAPI1_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/api1/VirtualKeyboardAPI1.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/android/input/VirtualKeyboard.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h>

      
#include <android/app/Activity.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEvent.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

VirtualKeyboardAPI1::VirtualKeyboardAPI1(Activity* activity){
}


    auto VirtualKeyboardAPI1::onVirtualKeyboardEvent(VirtualKeyboardEvent* virtualKeyboardEvent) -> void{
VirtualKeyboard::onVirtualKeyboardEvent(virtualKeyboardEvent);
    
}


    auto VirtualKeyboardAPI1::onEvent(AllBinaryEventObject* eventObject) -> void{
VirtualKeyboard::onEvent(eventObject);
    
}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_API1_VIRTUALKEYBOARDAPI1_CPP
