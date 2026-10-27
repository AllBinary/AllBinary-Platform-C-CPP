
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/android/input/VirtualKeyboard.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h>

      
#include <android/app/Activity.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VirtualKeyboardAPI1: public VirtualKeyboard, public VirtualKeyboardEventListenerInterface {

    public: static inline int32_t MIN_API = 1;

    public: static inline int32_t MAX_API = 2;

public: VirtualKeyboardAPI1(Activity* activity);

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_API1_VIRTUALKEYBOARDAPI1_H
