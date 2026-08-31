
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

            #include "../../../../../java/lang/Integer.h"
        
            #include "../../../../../java/lang/Runnable.h"
        
#include <android/app/Activity.h>

      
#include <org/allbinary/android/input/VirtualKeyboard.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEvent.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEventHandler.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShowVirtualKeyboardRunnable.h"
#include "HideVirtualKeyboardRunnable.h"

class VirtualKeyboardAPI3: public VirtualKeyboard: public VirtualKeyboardEventListenerInterface {
        

    public static MAX_API: int32_t = Integer.MAX_VALUE;

    public static MIN_API: int32_t = 3;

    private: virtualKeyboard: bool= false;

    private: activity: Activity;

    private: const showVirtualKeyboardRunnable: Runnable;

    private: const hideVirtualKeyboardRunnable: Runnable;

public constructor (Activity activity);

    public onEvent(AllBinaryEventObject eventObject);

    public onVirtualKeyboardEvent(VirtualKeyboardEvent virtualKeyboardEvent);

    public forceHide();

    public hide();

    showVirtualKeyboard();

    hideVirtualKeyboard();

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_API3_VIRTUALKEYBOARDAPI3_H
