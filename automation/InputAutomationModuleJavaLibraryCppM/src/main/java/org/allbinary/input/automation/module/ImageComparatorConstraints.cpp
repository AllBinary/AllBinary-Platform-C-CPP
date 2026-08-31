
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/collision/RectangleCollisionUtil.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Color.h"
#include "Rectangle.h"

class ImageComparatorConstraints
            : public Object
        : public ImageComparatorConstraintsInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: avoidVector: Vector;

    private: maxNonMatchingPixelDeltas: int32_t= 0;

    private: doImageComparisonEveryNthFrame: int32_t;

public constructor (int32_t doImageComparisonEveryNthFrame){

            super();
        this.doImageComparisonEveryNthFrame= doImageComparisonEveryNthFrame;
    
this.setAvoidVector(new Vector());
    
}


    public Vector getAvoidVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.avoidVector;
    
}


    public bool isColorAllowed(int32_t frame, GPoint point, Color color){



                            throw new RuntimeException();
                    
}


    public bool isCollisionWithAvoidRectangles(Rectangle rectangle){

    isCollsionWithAvoidRectangles: bool = false;;
    

    avoidVector: Vector = this.getAvoidVector()!;;
    

    size: int32_t = avoidVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    avoidRectangle: Rectangle = avoidVector!.get(index) as Rectangle;;
    

                        if(RectangleCollisionUtil.isCollision(avoidRectangle, rectangle))
                        
                                    {
                                    isCollsionWithAvoidRectangles= true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isCollsionWithAvoidRectangles;
    
}


    public bool isCollisionWithAvoidRectangles(GPoint point){

    isCollsionWithAvoidRectangles: bool = false;;
    

    avoidVector: Vector = this.getAvoidVector()!;;
    

    size: int32_t = avoidVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    avoidRectangle: Rectangle = avoidVector!.get(index) as Rectangle;;
    

                        if(RectangleCollisionUtil.isCollision(avoidRectangle, point))
                        
                                    {
                                    isCollsionWithAvoidRectangles= true;
    
break;

                    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isCollsionWithAvoidRectangles;
    
}


    public setAvoidVector(Vector avoidVector){
this.avoidVector= avoidVector;
    
}


    public int32_t getMaxNonMatchingPixelDeltas(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxNonMatchingPixelDeltas;
    
}


    public setMaxNonMatchingPixelDeltas(int32_t maxNonMatchingPixelDeltas){
this.maxNonMatchingPixelDeltas= maxNonMatchingPixelDeltas;
    
}


    public bool isFrameAllowed(int32_t frame){

    remainder: int32_t = ((frame +1) % this.doImageComparisonEveryNthFrame);;
    
this.logUtil!.putF(" Frame: " +frame +" remainder: " +remainder +" this.doImageComparisonEveryNthFrame: " +this.doImageComparisonEveryNthFrame, this, "isCollisionWithAvoidRectangles");
    

                        if(remainder == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public bool isImageValid(BufferedImage bufferedImage){



                            throw new RuntimeException();
                    
}


    public log(){

    avoidVector: Vector = this.getAvoidVector()!;;
    

    size: int32_t = avoidVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    avoidRectangle: Rectangle = avoidVector!.get(index) as Rectangle;;
    
this.logUtil!.putF("Avoid Rectangle: " +avoidRectangle, this, "log");
    
}

}


};

            

