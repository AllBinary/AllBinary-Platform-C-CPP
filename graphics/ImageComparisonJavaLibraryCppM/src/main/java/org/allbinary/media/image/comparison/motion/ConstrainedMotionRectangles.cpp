
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

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectangles.h"
#include "MotionRectangleConstraintsInterface.h"
#include "MotionRectangle.h"
#include "Rectangle.h"

class ConstrainedMotionRectangles: public MotionRectangles {
        

    private: static const NAME: string = "constrainedMotionRectangles_";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: motionRectangleConstraintsInterface: MotionRectangleConstraintsInterface;

public constructor (MotionRectangleConstraintsInterface motionRectangleConstraintsInterface, MotionRectangles motionRectangles){
            super(NAME, motionRectangles!.getImageComparisonResult());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setMotionRectangleConstraintsInterface(motionRectangleConstraintsInterface);
    
}


                //@Throws(Exception.constructor)
            
    public applyMotionRectangleConstraints(MotionRectangles motionRectangles){
this.logUtil!.putF("Start - Size Before: " +motionRectangles!.getVector()!.size(), this, "applyMotionRectangleConstraints");
    

    bufferedImageArray: std::vector<BufferedImage> = motionRectangles!.getImageComparisonResult()!.getBufferedImages()!;;
    

    bufferedImage: BufferedImage = bufferedImageArray[1]!;;
    

    vector: Vector = new Vector();;
    

    vector2: Vector = motionRectangles!.getVector()!;;
    

    size: int32_t = vector2.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    motionRectangle: MotionRectangle = vector2.get(index) as MotionRectangle;;
    

    rectangle: Rectangle = motionRectangle!.getRectangle()!;;
    

    isTooSmall: bool = this.getMotionRectangleConstraintsInterface()!.isTooSmall(rectangle)!;;
    

                        if(isTooSmall)
                        
                                    {
                                    

                        continue
                    

                                    }
                                

    isAreaTooSmall: bool = this.getMotionRectangleConstraintsInterface()!.isAreaTooSmall(rectangle)!;;
    

                        if(isAreaTooSmall)
                        
                                    {
                                    

                        continue
                    

                                    }
                                

    isTooBig: bool = this.getMotionRectangleConstraintsInterface()!.isTooBig(rectangle)!;;
    

                        if(isTooBig)
                        
                                    {
                                    

                        continue
                    

                                    }
                                

    isValid: bool = this.getMotionRectangleConstraintsInterface()!.isValid(this.getImageComparisonResult()!.getFrameTwo(), bufferedImage, motionRectangle!.getRectangle())!;;
    

                        if(!isValid)
                        
                                    {
                                    

                        continue
                    

                                    }
                                

                        if(!isTooSmall && !isAreaTooSmall && !isTooBig && isValid)
                        vector.add(motionRectangle)
}

this.setVector(vector);
    
}


    public MotionRectangleConstraintsInterface getMotionRectangleConstraintsInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.motionRectangleConstraintsInterface;
    
}


    public setMotionRectangleConstraintsInterface(MotionRectangleConstraintsInterface motionRectangleConstraintsInterface){
this.motionRectangleConstraintsInterface= motionRectangleConstraintsInterface;
    
}


};

            

