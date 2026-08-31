
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

class VirtualKeyboardAPI3: public VirtualKeyboard: public VirtualKeyboardEventListenerInterface {
        

    public static MAX_API: int32_t = Integer.MAX_VALUE;

    public static MIN_API: int32_t = 3;

    private: virtualKeyboard: bool= false;

    private: activity: Activity;

    private: const showVirtualKeyboardRunnable: Runnable;

    private: const hideVirtualKeyboardRunnable: Runnable;

public constructor (Activity activity){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this.activity= activity;
    
this.showVirtualKeyboardRunnable= new ShowVirtualKeyboardRunnable(this.activity);
    
this.hideVirtualKeyboardRunnable= new HideVirtualKeyboardRunnable(this.activity);
    

    virtualKeyboardEventHandler: VirtualKeyboardEventHandler = VirtualKeyboardEventHandler.getInstance()!;;
    
virtualKeyboardEventHandler!.removeAllListeners();
    
virtualKeyboardEventHandler!.addListenerInterface(this);
    
}


    public onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


    public onVirtualKeyboardEvent(VirtualKeyboardEvent virtualKeyboardEvent){

    isShow: Boolean = virtualKeyboardEvent!.getSource() as Boolean;;
    

                        if(isShow.valueOf())
                        
                                    {
                                    this.showVirtualKeyboard();
    

                                    }
                                
                        else {
                            this.hideVirtualKeyboard();
    

                        }
                            
}


    public forceHide(){
this.hideVirtualKeyboard();
    
}


    public hide(){

                        if(this.virtualKeyboard)
                        
                                    {
                                    this.forceHide();
    

                                    }
                                
}


    showVirtualKeyboard(){
this.activity.runOnUiThread(this.showVirtualKeyboardRunnable);
    
this.virtualKeyboard= true;
    
}


    hideVirtualKeyboard(){
this.activity.runOnUiThread(this.hideVirtualKeyboardRunnable);
    
this.virtualKeyboard= false;
    
}


};

            

