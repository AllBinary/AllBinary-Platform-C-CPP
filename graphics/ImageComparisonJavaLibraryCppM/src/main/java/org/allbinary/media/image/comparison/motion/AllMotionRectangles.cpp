
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

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>

      
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectangles.h"
#include "MotionRectangle.h"
#include "Rectangle.h"

class AllMotionRectangles: public MotionRectangles {

    private: static const std::string NAME = "allMotionRectangles_";

public: AllMotionRectangles(ImageComparisonResult imageComparisonResult){
            super(NAME, imageComparisonResult);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->createMotionRectangles(imageComparisonResult);
    
}


                //@Throws(Exception.constructor)
            
    private: void createMotionRectangles(ImageComparisonResult imageComparisonInfo){

    BasicArrayList vector = imageComparisonInfo.getNonMatchingPixelVector();;
    

    int32_t size = vector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    PixelDelta pixelDelta = vector.get(index) as PixelDelta;;
    
this->addPixelDeltaToAMotionRectangle(pixelDelta);
    
}

}


                //@Throws(Exception.constructor)
            
    private: bool addPixelDeltaToExistingMotionRectangle(PixelDelta pixelDelta){

    BasicArrayList vector = this->getVector();;
    

    int32_t size = vector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    MotionRectangle motionRectangle = vector.get(index) as MotionRectangle;;
    

                        if(shouldPixelDeltaPartOfMotionRectangle(motionRectangle, pixelDelta))
                        
                                    {
                                    
    int32_t newWidth = pixelDelta.getPoint().getX() -motionRectangle.getRectangle().x;;
    

    int32_t newHeight = pixelDelta.getPoint().getY() -motionRectangle.getRectangle().y;;
    

                        if(newWidth < motionRectangle.getRectangle().width)
                        
                                    {
                                    newWidth= motionRectangle.getRectangle().width;
    

                                    }
                                

                        if(newHeight < motionRectangle.getRectangle().height)
                        
                                    {
                                    newHeight= motionRectangle.getRectangle().height;
    

                                    }
                                
motionRectangle.getRectangle().setSize(newWidth, newHeight);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    private: void addPixelDeltaToAMotionRectangle(PixelDelta pixelDelta){

                        if(!addPixelDeltaToExistingMotionRectangle(pixelDelta))
                        
                                    {
                                    
    Rectangle newRectangle = Rectangle(pixelDelta.getPoint().getX(), pixelDelta.getPoint().getY(), 1, 1);;
    

    MotionRectangle motionRectangle = MotionRectangle(newRectangle);;
    
motionRectangle.getPixelDeltaVector().add(pixelDelta);
    
this->getVector().add(motionRectangle);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: bool shouldPixelDeltaPartOfMotionRectangle(MotionRectangle motionRectangle, PixelDelta pixelDelta){

    bool isPixelLeftOfTheRectangle = false;;
    

                        if(motionRectangle.getRectangle().y > pixelDelta.getPoint().getY())
                        
                                    {
                                    


                            throw Exception("PixelAboveTheRectangle");
                    

                                    }
                                

                        if(motionRectangle.getRectangle().x > pixelDelta.getPoint().getX())
                        
                                    {
                                    isPixelLeftOfTheRectangle= true;
    

                                    }
                                

                        if(!isPixelLeftOfTheRectangle)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isPixelDeltaLikelyPartOfMotionRectangle(motionRectangle, pixelDelta);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    private: bool isPixelDeltaLikelyPartOfMotionRectangle(MotionRectangle motionRectangle, PixelDelta pixelDelta){

    int32_t maxX = motionRectangle.getRectangle().x +motionRectangle.getRectangle().width;;
    

    int32_t maxY = motionRectangle.getRectangle().y +motionRectangle.getRectangle().height;;
    

    int32_t horizontalDistance = pixelDelta.getPoint().getX() -maxX;;
    

    int32_t verticalDistance = pixelDelta.getPoint().getY() -maxY;;
    

                        if(horizontalDistance < this->MAX_PIXEL_DISTANCE_THRESHOLD && verticalDistance < this->MAX_PIXEL_DISTANCE_THRESHOLD)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

