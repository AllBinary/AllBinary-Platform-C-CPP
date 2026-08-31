
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
        



            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AngleFactory.h"

class FrameUtil
            : public Object
         {
        

    private: static const instance: FrameUtil = new FrameUtil();

    public static FrameUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FrameUtil.instance;
    
}


private constructor (){

            super();
        }


    public int32_t getFrameForAngle(int16_t angle, int32_t angleIncrement){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.adjustAngleToFrameAngle(static_cast<int32_t>(angle)) /angleIncrement;
    
}


    public int32_t getFrameAngle(int32_t frame, int32_t angleIncrement){

    frameAngle: int32_t = angleIncrement *frame -90;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.adjustAngleToFrameAngle(frameAngle);;
    
}


    public int32_t adjustAngleToFrameAngle(int32_t currentAngle){

    angleFactory: AngleFactory = AngleFactory.getInstance()!;;
    

                        if(currentAngle > 359)
                        
                                    {
                                    currentAngle= (currentAngle -angleFactory!.TOTAL_ANGLE);
    

        while(currentAngle > 359)
        {
currentAngle= (currentAngle -angleFactory!.TOTAL_ANGLE);
    
}


                                    }
                                

                        if(currentAngle < 0)
                        
                                    {
                                    currentAngle= (currentAngle +angleFactory!.TOTAL_ANGLE);
    

        while(currentAngle < 0)
        {
currentAngle= (currentAngle +angleFactory!.TOTAL_ANGLE);
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return currentAngle;
    
}


};

            

