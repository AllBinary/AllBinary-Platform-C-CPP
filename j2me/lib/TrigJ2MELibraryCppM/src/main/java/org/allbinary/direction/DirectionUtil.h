
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
        



        #ifndef ORG_ALLBINARY_DIRECTION_DIRECTIONUTIL_H
        #define ORG_ALLBINARY_DIRECTION_DIRECTIONUTIL_H

            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DirectionFactory.h"
#include "Direction.h"

class DirectionUtil
            : public Object
         {
        

    private: static const instance: DirectionUtil = new DirectionUtil();

    public static DirectionUtil getInstance();

    private: directionArray: std::vector<Angle> = new Array(10);

    private: directionArray2: std::vector<Angle> = new Array(10);

private constructor ();

    public Angle getAngle(Direction direction);

    public Angle getFrameAngle(Direction direction);

};

            


        #endif //ORG_ALLBINARY_DIRECTION_DIRECTIONUTIL_H
