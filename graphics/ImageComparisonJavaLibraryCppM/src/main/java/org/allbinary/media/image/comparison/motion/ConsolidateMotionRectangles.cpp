
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <java/awt.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectangles.h"
#include "MotionRectangle.h"
#include "Rectangle.h"

class ConsolidateMotionRectangles: public MotionRectangles {
        

    private: static const NAME: string = "consolidatedMotionRectangles_";

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (MotionRectangles motionRectangles){
            super(NAME, motionRectangles!.getImageComparisonResult());
                    

                            //For kotlin this is before the body of the constructor.
                    

    vector: Vector = motionRectangles!.getVector()!;;
    

    size: int32_t = vector.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    motionRectangle: MotionRectangle = vector.get(index) as MotionRectangle;;
    
vector.add(motionRectangle!.clone());
    
}

this.consolidateMotionRectangles();
    
}


    consolidateMotionRectangles(){

    vector: Vector = this.getVector()!;;
    
this.logUtil!.putF("Start - Size Before: " +vector.length, this, "consolidateMotionRectangleConstraints");
    

    removeVector: Vector = new Vector();;
    

    size: int32_t = vector.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    motionRectangle: MotionRectangle = vector.get(index) as MotionRectangle;;
    




                        for (
    i: int32_t = index +1;i < vector.length; i++)
        {

    motionRectangle2: MotionRectangle = vector.get(i) as MotionRectangle;;
    

    rectangle: Rectangle = motionRectangle!.getRectangle()!;;
    

    rectangle2: Rectangle = motionRectangle2!.getRectangle()!;;
    

    x2: int32_t = rectangle.x +rectangle.width;;
    

    y2: int32_t = rectangle.y +rectangle.height;;
    

    rightX: int32_t = rectangle2.x +rectangle2.width;;
    

    bottomY: int32_t = rectangle2.y +rectangle2.height;;
    

                        if(rectangle.x <= rectangle2.x && rectangle.y <= rectangle2.y && x2 >= rightX && y2 >= bottomY)
                        
                                    {
                                    removeVector!.add(motionRectangle2);
    

                                    }
                                
}

}

this.remove(removeVector);
    
}


    remove(Vector removeVector){

    vector: Vector = this.getVector()!;;
    

    size: int32_t = removeVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
vector.remove(removeVector!.get(index));
    
}

}


};

            

