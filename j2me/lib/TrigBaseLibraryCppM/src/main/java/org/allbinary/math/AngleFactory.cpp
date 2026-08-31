
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
        
            #include "../../../java/lang/RuntimeException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Angle.h"
#include "NamedAngle.h"
#include "FrameUtil.h"

class AngleFactory
            : public Object
         {
        

    private: static const instance: AngleFactory = new AngleFactory();

    public static AngleFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AngleFactory.instance;
    
}


    public static main(std::vector<string> args){

    stringMaker: StringMaker = new StringMaker();;
    

    angleFactory: AngleFactory = AngleFactory.getInstance()!;;
    




                        for (
    index: int32_t = 0;index < 360; index++)
        {
stringMaker!.appendint(index)!.append(CommonSeps.getInstance()!.FORWARD_SLASH)!.appendshort(angleFactory!.getClosestDirection(index)!.getValue())!.append(CommonSeps.getInstance()!.NEW_LINE);
    
}

LogUtil.getInstance()!.putF(stringMaker!.toString(), "main", "main");
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const TOTAL_ANGLE: int16_t = 360;

    public const QUARTER_TOTAL_ANGLE: int16_t = 90;

    private: const angleArray: std::vector<Angle> = new Array(static_cast<int32_t>(this.TOTAL_ANGLE));

    private: const NEGATIVE_ONE: int16_t =  -1;

    public const NOT_ANGLE: NamedAngle = new NamedAngle(this.NEGATIVE_ONE, CommonStrings.getInstance()!.EMPTY);

    public const DOWN: NamedAngle;

    public const UP: NamedAngle;

    public const LEFT: NamedAngle;

    public const RIGHT: NamedAngle;

public constructor (){

            super();
        
    commonPhoneStrings: CommonPhoneStrings = CommonPhoneStrings.getInstance()!;;
    

    total: int16_t = this.angleArray!.length;;
    
this.UP= new NamedAngle(0, commonPhoneStrings!.UP);
    
this.angleArray[0]= this.UP;
    




                        for (
    index: int32_t = 1;index < 90; index++)
        {
this.angleArray[index]= new Angle(index);
    
}

this.RIGHT= new NamedAngle(90, commonPhoneStrings!.RIGHT);
    
this.angleArray[90]= this.RIGHT;
    




                        for (
    index: int32_t = 91;index < 180; index++)
        {
this.angleArray[index]= new Angle(index);
    
}

this.DOWN= new NamedAngle(180, commonPhoneStrings!.DOWN);
    
this.angleArray[180]= this.DOWN;
    




                        for (
    index: int32_t = 181;index < 270; index++)
        {
this.angleArray[index]= new Angle(index);
    
}

this.LEFT= new NamedAngle(270, commonPhoneStrings!.LEFT);
    
this.angleArray[270]= this.LEFT;
    




                        for (
    index: int32_t = 271;index < total; index++)
        {
this.angleArray[index]= new Angle(index);
    
}

}


    private: const frameUtil: FrameUtil = FrameUtil.getInstance()!;

    public Angle getAt(int32_t index){

    adjustedIndex: int32_t = static_cast<int32_t>(this.frameUtil!.adjustAngleToFrameAngle(index));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.angleArray[adjustedIndex]!;
    
}


    public Angle getClosestDirection(int32_t angle){

                        if((angle >= 315 && angle < 360) || (angle >= 0 && angle < 45))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.UP;
    

                                    }
                                
                             else 
                        if(angle >= 45 && angle < 135)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.RIGHT;
    

                                    }
                                
                             else 
                        if(angle >= 135 && angle < 225)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.DOWN;
    

                                    }
                                
                             else 
                        if(angle >= 225 && angle < 315)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.LEFT;
    

                                    }
                                



                            throw new RuntimeException();
                    
}


    public Angle getGeneralDirection(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.NOT_ANGLE;
    
}


};

            

