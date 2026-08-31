
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
        
            #include "../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AngleFactory.h"
#include "FrameUtil.h"

class AngleIncrementInfo
            : public Object
         {
        

    private: static const INCREMENT: string = "Inc: ";

    private: const angleIncrement: int16_t;

    public const DOWN_FRAME: Integer;

    public const UP_FRAME: Integer;

    public const LEFT_FRAME: Integer;

    public const RIGHT_FRAME: Integer;

public constructor (int16_t angleIncrement){

            super();
        this.angleIncrement= angleIncrement;
    

    angleFactory: AngleFactory = AngleFactory.getInstance()!;;
    

    smallIntegerSingletonFactory: SmallIntegerSingletonFactory = SmallIntegerSingletonFactory.getInstance()!;;
    
this.DOWN_FRAME= smallIntegerSingletonFactory!.getAt(angleFactory!.DOWN.getValue() /this.angleIncrement);
    
this.UP_FRAME= smallIntegerSingletonFactory!.getAt(static_cast<int32_t>(angleFactory!.UP.getValue()));
    
this.LEFT_FRAME= smallIntegerSingletonFactory!.getAt(angleFactory!.LEFT.getValue() /this.angleIncrement);
    
this.RIGHT_FRAME= smallIntegerSingletonFactory!.getAt(angleFactory!.RIGHT.getValue() /this.angleIncrement);
    
}


    private: const frameUtil: FrameUtil = FrameUtil.getInstance()!;

    public int32_t getFrameAngle(int32_t frame){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.frameUtil!.getFrameAngle(frame, static_cast<int32_t>(this.angleIncrement));;
    
}


    public int16_t getAngleIncrement(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.angleIncrement;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StringMaker().append(AngleIncrementInfo.INCREMENT)!.appendshort(this.angleIncrement)!.toString();;
    
}


    public int32_t getClosestGeneralDirection(int16_t angle){

    closestDirection: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(360)!;;
    

                        if(this.UP_FRAME.intValue() -angle < closestDirection!.intValue() -angle)
                        
                                    {
                                    closestDirection= this.UP_FRAME;
    

                                    }
                                

                        if(this.DOWN_FRAME.intValue() -angle < closestDirection!.intValue() -angle)
                        
                                    {
                                    closestDirection= this.DOWN_FRAME;
    

                                    }
                                

                        if(this.LEFT_FRAME.intValue() -angle < closestDirection!.intValue() -angle)
                        
                                    {
                                    closestDirection= this.LEFT_FRAME;
    

                                    }
                                

                        if(this.RIGHT_FRAME.intValue() -angle < closestDirection!.intValue() -angle)
                        
                                    {
                                    closestDirection= this.RIGHT_FRAME;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return closestDirection!.intValue();;
    
}


};

            

