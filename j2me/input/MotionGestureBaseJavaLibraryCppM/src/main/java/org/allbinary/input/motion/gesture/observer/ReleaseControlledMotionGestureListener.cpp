
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionGestureEventListener.h"
#include "CompleteMotionGestureListenerInterface.h"
#include "MotionGestureEvent.h"

class ReleaseControlledMotionGestureListener
            : public Object
        : public MotionGestureEventListener {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: currentMotionGesture: MotionGestureInput = TouchMotionGestureFactory.getInstance()!.NO_MOTION;

    private: isMouseGestureOccurring: bool = false;

    private: motionGestureCollection: BasicArrayList = new BasicArrayListD();

    private: signed: CompleteMotionGestureListenerInterface;

public constructor (CompleteMotionGestureListenerInterface signed){

            super();
        this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    
this.signed= signed;
    
}


    public onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil.log(this.commonStrings!.NOT_IMPLEMENTED, this);
    
}


    public onUpMotionGestureEvent(MotionGestureEvent ev){
this.onMotionGestureEvent(ev);
    
}


    public onDownMotionGestureEvent(MotionGestureEvent ev){
this.onMotionGestureEvent(ev);
    
}


    public onLeftMotionGestureEvent(MotionGestureEvent ev){
this.onMotionGestureEvent(ev);
    
}


    public onRightMotionGestureEvent(MotionGestureEvent ev){
this.onMotionGestureEvent(ev);
    
}


    public onDiagonalDownRightMotionGestureEvent(MotionGestureEvent ev){
this.onMotionGestureEvent(ev);
    
}


    public onDiagonalDownLeftMotionGestureEvent(MotionGestureEvent ev){
this.onMotionGestureEvent(ev);
    
}


    public onDiagonalUpRightMotionGestureEvent(MotionGestureEvent ev){
this.onMotionGestureEvent(ev);
    
}


    public onDiagonalUpLeftMotionGestureEvent(MotionGestureEvent ev){
this.onMotionGestureEvent(ev);
    
}


    public onPressedMotionGestureEvent(MotionGestureEvent ev){
this.isMouseGestureOccurring= true;
    
this.currentMotionGesture= TouchMotionGestureFactory.getInstance()!.NO_MOTION;
    
this.onMotionGestureEvent(ev);
    
}


    public onScrolledMotionGestureEvent(MotionGestureEvent motionGestureEvent){
}


    public released(MotionGestureEvent ev){

        try {
            
                        if(this.isMouseGestureOccurring == false)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    
this.isMouseGestureOccurring= false;
    
this.signed.onMotionGestureCompleted(this.motionGestureCollection);
    
this.motionGestureCollection!.clear();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(new StringMaker().append(this.commonStrings!.EXCEPTION_LABEL)!.append(StringUtil.getInstance()!.toString(ev.getMotionGesture()))!.toString(), this, "release", e);
    
}

}


    public onMotionGestureEvent(MotionGestureEvent ev){

                        if(this.isMouseGestureOccurring == false)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

    motionGestureInput: MotionGestureInput = ev.getMotionGesture()!;;
    

                        if(motionGestureInput == TouchMotionGestureFactory.getInstance()!.PRESSED)
                        
                                    {
                                    this.onPressedMotionGestureEvent(ev);
    

                                    }
                                
                             else 
                        if(motionGestureInput == TouchMotionGestureFactory.getInstance()!.RELEASED)
                        
                                    {
                                    this.released(ev);
    

                                    }
                                
                        else {
                            
                        if(this.currentMotionGesture != motionGestureInput)
                        
                                    {
                                    this.currentMotionGesture= motionGestureInput;
    
this.motionGestureCollection!.add(ev.getMotionGesture());
    

                                    }
                                

                        }
                            
}


};

            

