
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>

      
#include <org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h>

      
#include <org/allbinary/input/AllBinarySensor.h>

      
#include <org/allbinary/logic/math/Orientation.h>

      
#include <org/allbinary/logic/math/PrimitiveFloatUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinaryOrientationSensor: public AllBinarySensor {
        

    sensorDataFloatArray: std::vector<float> = PrimitiveFloatUtil.getArrayInstance()!;

    listener: CompleteMotionGestureInputEventListenerInterface = NoCompleteMotionGestureInputEventListener.getInstance()!;

    public setCompleteMotionGestureInputEventListener(CompleteMotionGestureInputEventListenerInterface completeMotionGestureInputEventListenerInterface){
this.listener= completeMotionGestureInputEventListenerInterface;
    
}


protected constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public Orientation getOrientation(){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


};

            

