
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

            #include <vector>
        
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

    private: static DirectionUtil instance() { return DirectionUtil(); }

    public: static DirectionUtil getInstance();

    private: std::vector<Angle> directionArray = new Array(10);

    private: std::vector<Angle> directionArray2 = new Array(10);

private: DirectionUtil();

    public: Angle getAngle(Direction direction);

    public: Angle getFrameAngle(Direction direction);

};

            


        #endif //ORG_ALLBINARY_DIRECTION_DIRECTIONUTIL_H
