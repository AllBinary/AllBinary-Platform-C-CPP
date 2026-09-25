
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
        
#include <jsinterop/annotations/JsType.h>

      
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

class GameMotionGestureListener
            : public Object
        : public MotionGestureEventListener {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: BasicArrayList motionGestureCollection = BasicArrayListD();

    private: BasicArrayList touchGestureCollection = BasicArrayListD();

    private: CompleteMotionGestureListenerInterface signed;

public: GameMotionGestureListener(CompleteMotionGestureListenerInterface signed){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    
this->signed= signed;
    
}


    public: void onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil::log(this->commonStrings.NOT_IMPLEMENTED, this);
    
}


    public: void onUpMotionGestureEvent(MotionGestureEvent ev){
this->onMotionGestureEvent(ev);
    
}


    public: void onDownMotionGestureEvent(MotionGestureEvent ev){
this->onMotionGestureEvent(ev);
    
}


    public: void onLeftMotionGestureEvent(MotionGestureEvent ev){
this->onMotionGestureEvent(ev);
    
}


    public: void onRightMotionGestureEvent(MotionGestureEvent ev){
this->onMotionGestureEvent(ev);
    
}


    public: void onDiagonalDownRightMotionGestureEvent(MotionGestureEvent ev){
this->onMotionGestureEvent(ev);
    
}


    public: void onDiagonalDownLeftMotionGestureEvent(MotionGestureEvent ev){
this->onMotionGestureEvent(ev);
    
}


    public: void onDiagonalUpRightMotionGestureEvent(MotionGestureEvent ev){
this->onMotionGestureEvent(ev);
    
}


    public: void onDiagonalUpLeftMotionGestureEvent(MotionGestureEvent ev){
this->onMotionGestureEvent(ev);
    
}


    public: void onPressedMotionGestureEvent(MotionGestureEvent ev){
this->touchGestureCollection.add(ev.getMotionGesture());
    
}


    public: void released(MotionGestureEvent ev){

        try {
            this->touchGestureCollection.add(ev.getMotionGesture());
    
this->signed.onMotionGestureCompleted(this->touchGestureCollection);
    
this->touchGestureCollection.clear();
    

                //: 
} catch(e) 
            {

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->commonStrings.EXCEPTION_LABEL);
    
stringBuffer.append(StringUtil::getInstance().toString(ev.getMotionGesture()));
    
this->logUtil.put(stringBuffer.toString(), this, "release", e);
    
}

}


    public: void onScrolledMotionGestureEvent(MotionGestureEvent motionGestureEvent){
}


    public: void onMotionGestureEvent(MotionGestureEvent ev){

        try {
            
    MotionGestureInput motionGestureInput = ev.getMotionGesture();;
    

                        if(motionGestureInput == TouchMotionGestureFactory::getInstance().PRESSED)
                        
                                    {
                                    this->onPressedMotionGestureEvent(ev);
    

                                    }
                                
                             else 
                        if(motionGestureInput == TouchMotionGestureFactory::getInstance().RELEASED)
                        
                                    {
                                    this->released(ev);
    

                                    }
                                
                        else {
                            this->motionGestureCollection.add(motionGestureInput);
    
this->signed.onMotionGestureCompleted(this->motionGestureCollection);
    
this->motionGestureCollection.clear();
    
this->touchGestureCollection.clear();
    

                        }
                            

                //: 
} catch(e) 
            {

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->commonStrings.EXCEPTION_LABEL);
    
stringBuffer.append(StringUtil::getInstance().toString(ev.getMotionGesture()));
    
this->logUtil.put(stringBuffer.toString(), this, "onMotionGestureEvent", e);
    
}

}


};

            

