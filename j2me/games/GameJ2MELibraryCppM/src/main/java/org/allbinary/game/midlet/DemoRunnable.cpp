
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Runnable.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/graphics/displayable/command/MyCommandsFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DemoGameMidlet.h"
#include "DemoGameMidletEvent.h"
#include "DemoGameMidletStateFactory.h"
#include "DemoGameMidletEventHandler.h"

class DemoRunnable
            : public Object
        : public Runnable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const demoGameMidlet: DemoGameMidlet;

    private: const startDemoGameMidletEvent: DemoGameMidletEvent;

public constructor (DemoGameMidlet demoGameMidlet){

            super();
        this.demoGameMidlet= demoGameMidlet;
    
this.startDemoGameMidletEvent= new DemoGameMidletEvent(this.demoGameMidlet, DemoGameMidletStateFactory.getInstance()!.START_DEMO);
    
}


    public run(){

        try {
            this.logUtil!.putF(new StringMaker().append(CommonLabels.getInstance()!.START_LABEL)!.append("GameCanvasRunnableInterface")!.toString(), this, this.commonStrings!.RUN);
    
this.demoGameMidlet!.commandAction(MyCommandsFactory.getInstance()!.SET_DISPLAYABLE, ProgressCanvasFactory.getInstance());
    
this.demoGameMidlet!.setGameCanvasRunnableInterface(this.demoGameMidlet!.createDemoGameCanvasRunnableInterface());
    
this.demoGameMidlet!.demoSetup();
    
DemoGameMidletEventHandler.getInstance()!.fireEvent(this.startDemoGameMidletEvent);
    
this.demoGameMidlet!.startGameCanvasRunnableInterface();
    
this.demoGameMidlet!.postDemoSetup();
    
this.logUtil!.putF(this.commonStrings!.END_RUNNABLE, this, this.commonStrings!.RUN);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.RUN, e);
    
}

}


};

            

