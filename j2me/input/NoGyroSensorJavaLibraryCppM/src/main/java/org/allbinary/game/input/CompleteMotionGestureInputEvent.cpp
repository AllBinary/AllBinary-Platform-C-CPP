
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CompleteMotionGestureInputInterface.h"

class CompleteMotionGestureInputEvent: public AllBinaryEventObject, public CompleteMotionGestureInputInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string name = StringUtil::getInstance().EMPTY_STRING;

    private: MotionGestureInput motionGestureInput = TouchMotionGestureFactory::getInstance().NO_MOTION;

public: CompleteMotionGestureInputEvent(std::string name, MotionGestureInput motionGestureInput) : AllBinaryEventObject(motionGestureInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setName(name);
    

        try {
            this->setMotionGestureInput(motionGestureInput);
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "InputToGameKeyEventAction", e);
    
}

}


    protected: void setName(std::string name){
this->name= name;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: void setMotionGestureInput(MotionGestureInput motionGestureInput){
this->motionGestureInput= motionGestureInput;
    
}


    public: MotionGestureInput getMotionGestureInput(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionGestureInput;
    
}


};

            

