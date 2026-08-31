
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

    public static DirectionUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DirectionUtil.instance;
    
}


    private: directionArray: std::vector<Angle> = new Array(10);

    private: directionArray2: std::vector<Angle> = new Array(10);

private constructor (){

            super();
        
    angleFactory: AngleFactory = AngleFactory.getInstance()!;;
    

    directionFactory: DirectionFactory = DirectionFactory.getInstance()!;;
    
this.directionArray[directionFactory!.LEFT.getValue()]= angleFactory!.LEFT;
    
this.directionArray[directionFactory!.RIGHT.getValue()]= angleFactory!.RIGHT;
    
this.directionArray[directionFactory!.UP.getValue()]= angleFactory!.UP;
    
this.directionArray[directionFactory!.DOWN.getValue()]= angleFactory!.DOWN;
    
this.directionArray2[directionFactory!.LEFT.getValue()]= angleFactory!.LEFT;
    
this.directionArray2[directionFactory!.RIGHT.getValue()]= angleFactory!.RIGHT;
    
this.directionArray2[directionFactory!.UP.getValue()]= angleFactory!.UP;
    
this.directionArray2[directionFactory!.DOWN.getValue()]= angleFactory!.DOWN;
    
}


    public Angle getAngle(Direction direction){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.directionArray2[direction.getValue()]!;
    
}


    public Angle getFrameAngle(Direction direction){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.directionArray[direction.getValue()]!;
    
}


};

            

