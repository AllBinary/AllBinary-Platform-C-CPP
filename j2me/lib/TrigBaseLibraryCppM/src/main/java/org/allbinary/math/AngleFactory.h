
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
        



        #ifndef ORG_ALLBINARY_MATH_ANGLEFACTORY_H
        #define ORG_ALLBINARY_MATH_ANGLEFACTORY_H

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

    public static AngleFactory getInstance();

    public static main(std::vector<string> args);

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

public constructor ();

    private: const frameUtil: FrameUtil = FrameUtil.getInstance()!;

    public Angle getAt(int32_t index);

    public Angle getClosestDirection(int32_t angle);

    public Angle getGeneralDirection();

};

            


        #endif //ORG_ALLBINARY_MATH_ANGLEFACTORY_H
