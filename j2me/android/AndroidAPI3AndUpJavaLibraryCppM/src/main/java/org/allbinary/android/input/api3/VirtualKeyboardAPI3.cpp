
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

class VirtualKeyboardAPI3: public VirtualKeyboard, public VirtualKeyboardEventListenerInterface {

    public: static int32_t MAX_API = Integer::MAX_VALUE;

    public: static int32_t MIN_API = 3;

    private: bool virtualKeyboard= false;

    private: Activity activity;

    private: Runnable showVirtualKeyboardRunnable;

    private: Runnable hideVirtualKeyboardRunnable;

public: VirtualKeyboardAPI3(Activity activity){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this->activity= activity;
    
this->showVirtualKeyboardRunnable= ShowVirtualKeyboardRunnable(this->activity);
    
this->hideVirtualKeyboardRunnable= HideVirtualKeyboardRunnable(this->activity);
    

    VirtualKeyboardEventHandler virtualKeyboardEventHandler = VirtualKeyboardEventHandler::getInstance();;
    
virtualKeyboardEventHandler.removeAllListeners();
    
virtualKeyboardEventHandler.addListenerInterface(this);
    
}


    public: void onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


    public: void onVirtualKeyboardEvent(VirtualKeyboardEvent virtualKeyboardEvent){

    Boolean isShow = virtualKeyboardEvent.getSource() as Boolean;;
    

                        if(isShow.valueOf())
                        
                                    {
                                    this->showVirtualKeyboard();
    

                                    }
                                
                        else {
                            this->hideVirtualKeyboard();
    

                        }
                            
}


    public: void forceHide(){
this->hideVirtualKeyboard();
    
}


    public: void hide(){

                        if(this->virtualKeyboard)
                        
                                    {
                                    this->forceHide();
    

                                    }
                                
}


    private: void showVirtualKeyboard(){
this->activity.runOnUiThread(this->showVirtualKeyboardRunnable);
    
this->virtualKeyboard= true;
    
}


    private: void hideVirtualKeyboard(){
this->activity.runOnUiThread(this->hideVirtualKeyboardRunnable);
    
this->virtualKeyboard= false;
    
}


};

            

