
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>

      
#include <org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h>

      
#include <org/allbinary/input/AllBinarySensor.h>

      
#include <org/allbinary/logic/math/Orientation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinaryOrientationSensor: public AllBinarySensor {

    public: static const AllBinaryOrientationSensor NULL_ALLBINARY_ORIENTATION_SENSOR = AllBinaryOrientationSensor();

    private: CompleteMotionGestureInputEventListenerInterface listener = NoCompleteMotionGestureInputEventListener::getInstance();

    public: void setListener(CompleteMotionGestureInputEventListenerInterface completeMotionGestureInputEventListenerInterface){
this->listener= completeMotionGestureInputEventListenerInterface;
    
}


public: AllBinaryOrientationSensor(){
}


                //@Throws(Exception.constructor)
            
    public: Orientation getOrientation(){



                            throw Exception(this->commonStrings.NOT_IMPLEMENTED);
                    
}


};

            

