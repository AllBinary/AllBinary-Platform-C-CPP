
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

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AngleIncrementInfo.h"
#include "AngleIncrementInfoFactory.h"
#include "FrameUtil.h"

class AngleInfo
            : public Object
         {
        

    public static AngleInfo getInstance(int16_t angleIncrement){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AngleInfo(AngleIncrementInfoFactory.getInstance()!.getAt(angleIncrement));
    
}


    private: static const ANGLE: string = "Angle: ";

    private: const angleIncrementInfo: AngleIncrementInfo;

    private: angle: int16_t = 0;

private constructor (AngleIncrementInfo angleIncrementInfo){

            super();
        this.angleIncrementInfo= angleIncrementInfo;
    
}


    private: const frameUtil: FrameUtil = FrameUtil.getInstance()!;

    public adjustAngle(int32_t frame){

    newAngle: int32_t = this.angleIncrementInfo!.getAngleIncrement() *frame -90;;
    
this.setAngle(this.frameUtil!.adjustAngleToFrameAngle(newAngle));
    
}


    public int16_t getAngle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.angle;
    
}


    public setAngle(int16_t angle){
this.angle= angle;
    
}


    public AngleIncrementInfo getAngleIncrementInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.angleIncrementInfo;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(AngleInfo.ANGLE);
    
stringBuffer!.appendshort(this.angle);
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
stringBuffer!.append(StringUtil.getInstance()!.toString(this.getAngleIncrementInfo()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

