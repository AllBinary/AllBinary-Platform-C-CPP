
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

      
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>

      
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectangles.h"
#include "MotionRectangle.h"
#include "Rectangle.h"

class AllMotionRectangles: public MotionRectangles {
        

    private: static const NAME: string = "allMotionRectangles_";

public constructor (ImageComparisonResult imageComparisonResult){
            super(NAME, imageComparisonResult);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.createMotionRectangles(imageComparisonResult);
    
}


                //@Throws(Exception.constructor)
            
    createMotionRectangles(ImageComparisonResult imageComparisonInfo){

    vector: Vector = imageComparisonInfo!.getNonMatchingPixelVector()!;;
    

    size: int32_t = vector.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    pixelDelta: PixelDelta = vector.get(index) as PixelDelta;;
    
this.addPixelDeltaToAMotionRectangle(pixelDelta);
    
}

}


                //@Throws(Exception.constructor)
            
    bool addPixelDeltaToExistingMotionRectangle(PixelDelta pixelDelta){

    vector: Vector = this.getVector()!;;
    

    size: int32_t = vector.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    motionRectangle: MotionRectangle = vector.get(index) as MotionRectangle;;
    

                        if(shouldPixelDeltaPartOfMotionRectangle(motionRectangle, pixelDelta))
                        
                                    {
                                    
    newWidth: int32_t = pixelDelta!.getPoint()!.getX() -motionRectangle!.getRectangle()!.x;;
    

    newHeight: int32_t = pixelDelta!.getPoint()!.getY() -motionRectangle!.getRectangle()!.y;;
    

                        if(newWidth < motionRectangle!.getRectangle()!.width)
                        
                                    {
                                    newWidth= motionRectangle!.getRectangle()!.width;
    

                                    }
                                

                        if(newHeight < motionRectangle!.getRectangle()!.height)
                        
                                    {
                                    newHeight= motionRectangle!.getRectangle()!.height;
    

                                    }
                                
motionRectangle!.getRectangle()!.setSize(newWidth, newHeight);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    addPixelDeltaToAMotionRectangle(PixelDelta pixelDelta){

                        if(!addPixelDeltaToExistingMotionRectangle(pixelDelta))
                        
                                    {
                                    
    newRectangle: Rectangle = new Rectangle(pixelDelta!.getPoint()!.getX(), pixelDelta!.getPoint()!.getY(), 1, 1);;
    

    motionRectangle: MotionRectangle = new MotionRectangle(newRectangle);;
    
motionRectangle!.getPixelDeltaVector()!.add(pixelDelta);
    
this.getVector()!.add(motionRectangle);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    bool shouldPixelDeltaPartOfMotionRectangle(MotionRectangle motionRectangle, PixelDelta pixelDelta){

    isPixelLeftOfTheRectangle: bool = false;;
    

                        if(motionRectangle!.getRectangle()!.y > pixelDelta!.getPoint()!.getY())
                        
                                    {
                                    


                            throw new Exception("PixelAboveTheRectangle");
                    

                                    }
                                

                        if(motionRectangle!.getRectangle()!.x > pixelDelta!.getPoint()!.getX())
                        
                                    {
                                    isPixelLeftOfTheRectangle= true;
    

                                    }
                                

                        if(!isPixelLeftOfTheRectangle)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isPixelDeltaLikelyPartOfMotionRectangle(motionRectangle, pixelDelta);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    bool isPixelDeltaLikelyPartOfMotionRectangle(MotionRectangle motionRectangle, PixelDelta pixelDelta){

    maxX: int32_t = motionRectangle!.getRectangle()!.x +motionRectangle!.getRectangle()!.width;;
    

    maxY: int32_t = motionRectangle!.getRectangle()!.y +motionRectangle!.getRectangle()!.height;;
    

    horizontalDistance: int32_t = pixelDelta!.getPoint()!.getX() -maxX;;
    

    verticalDistance: int32_t = pixelDelta!.getPoint()!.getY() -maxY;;
    

                        if(horizontalDistance < this.MAX_PIXEL_DISTANCE_THRESHOLD && verticalDistance < this.MAX_PIXEL_DISTANCE_THRESHOLD)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

