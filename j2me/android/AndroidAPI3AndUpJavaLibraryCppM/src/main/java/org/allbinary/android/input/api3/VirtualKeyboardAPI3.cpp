
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_API3_VIRTUALKEYBOARDAPI3_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_API3_VIRTUALKEYBOARDAPI3_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/api3/VirtualKeyboardAPI3.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Boolean.h"
        
            #include "java/lang/Runnable.h"
        
#include <android/app/Activity.h>

      
#include <org/allbinary/android/input/VirtualKeyboard.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEvent.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEventHandler.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/input/api3/ShowVirtualKeyboardRunnable.h"
#include "org/allbinary/android/input/api3/HideVirtualKeyboardRunnable.h"

int32_t VirtualKeyboardAPI3::MAX_API = Integer.MAX_VALUE;

VirtualKeyboardAPI3::VirtualKeyboardAPI3(Activity* activity) : VirtualKeyboard(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->activity= activity;
    
this->showVirtualKeyboardRunnable= new ShowVirtualKeyboardRunnable(this->activity);
    
this->hideVirtualKeyboardRunnable= new HideVirtualKeyboardRunnable(this->activity);
    

    VirtualKeyboardEventHandler* virtualKeyboardEventHandler = VirtualKeyboardEventHandler::getInstance();;
    
virtualKeyboardEventHandler->removeAllListeners();
    
virtualKeyboardEventHandler->addListenerInterface(this);
    
}


    auto VirtualKeyboardAPI3::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto VirtualKeyboardAPI3::onVirtualKeyboardEvent(VirtualKeyboardEvent* virtualKeyboardEvent) -> void{

    bool isShow = JavaBoxes::unbox<bool>(virtualKeyboardEvent->getSource());;
    

                        if(isShow)
                        
                                    {
                                    this->showVirtualKeyboard();
    

                                    }
                                
                        else {
                            this->hideVirtualKeyboard();
    

                        }
                            
}


    auto VirtualKeyboardAPI3::forceHide() -> void{
this->hideVirtualKeyboard();
    
}


    auto VirtualKeyboardAPI3::hide() -> void{

                        if(this->virtualKeyboard)
                        
                                    {
                                    this->forceHide();
    

                                    }
                                
}


    auto VirtualKeyboardAPI3::showVirtualKeyboard() -> void{
this->activity->runOnUiThread(this->showVirtualKeyboardRunnable);
    
this->virtualKeyboard= true;
    
}


    auto VirtualKeyboardAPI3::hideVirtualKeyboard() -> void{
this->activity->runOnUiThread(this->hideVirtualKeyboardRunnable);
    
this->virtualKeyboard= false;
    
}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_API3_VIRTUALKEYBOARDAPI3_CPP
