
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_ALLMOTIONRECTANGLES_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_ALLMOTIONRECTANGLES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/motion/AllMotionRectangles.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/awt.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>

      
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangle.h"
#include "org/allbinary/media/image/comparison/motion/Rectangle.h"


AllMotionRectangles::AllMotionRectangles(ImageComparisonResult* imageComparisonResult) : MotionRectangles(NAME, imageComparisonResult){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->createMotionRectangles(imageComparisonResult);
    
}


                //@Throws(Exception.constructor)
            
    auto AllMotionRectangles::createMotionRectangles(ImageComparisonResult* imageComparisonInfo) -> void{

    BasicArrayList* vector = imageComparisonInfo->getNonMatchingPixelVector();;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    PixelDelta* pixelDelta = dynamic_cast<PixelDelta*>(vector->get(index));;
    
this->addPixelDeltaToAMotionRectangle(pixelDelta);
    
}

}


                //@Throws(Exception.constructor)
            
    auto AllMotionRectangles::addPixelDeltaToExistingMotionRectangle(PixelDelta* pixelDelta) -> bool{

    BasicArrayList* vector = this->getVector();;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    MotionRectangle* motionRectangle = dynamic_cast<MotionRectangle*>(vector->get(index));;
    

                        if(shouldPixelDeltaPartOfMotionRectangle(motionRectangle, pixelDelta))
                        
                                    {
                                    
    int32_t newWidth = pixelDelta->getPoint()->getX() -motionRectangle->getRectangle()->x;;
    

    int32_t newHeight = pixelDelta->getPoint()->getY() -motionRectangle->getRectangle()->y;;
    

                        if(newWidth < motionRectangle->getRectangle()->width)
                        
                                    {
                                    newWidth= motionRectangle->getRectangle()->width;
    

                                    }
                                

                        if(newHeight < motionRectangle->getRectangle()->height)
                        
                                    {
                                    newHeight= motionRectangle->getRectangle()->height;
    

                                    }
                                
motionRectangle->getRectangle()->setSize(newWidth, newHeight);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto AllMotionRectangles::addPixelDeltaToAMotionRectangle(PixelDelta* pixelDelta) -> void{

                        if(!addPixelDeltaToExistingMotionRectangle(pixelDelta))
                        
                                    {
                                    
    Rectangle* newRectangle = new Rectangle(pixelDelta->getPoint()->getX(), pixelDelta->getPoint()->getY(), 1, 1);;
    

    MotionRectangle* motionRectangle = new MotionRectangle(newRectangle);;
    
motionRectangle->getPixelDeltaVector()->add(pixelDelta);
    
this->getVector()->add(motionRectangle);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AllMotionRectangles::shouldPixelDeltaPartOfMotionRectangle(MotionRectangle* motionRectangle, PixelDelta* pixelDelta) -> bool{

    bool isPixelLeftOfTheRectangle = false;;
    

                        if(motionRectangle->getRectangle()->y > pixelDelta->getPoint()->getY())
                        
                                    {
                                    


                            throw Exception("PixelAboveTheRectangle");
                    

                                    }
                                

                        if(motionRectangle->getRectangle()->x > pixelDelta->getPoint()->getX())
                        
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
            
    auto AllMotionRectangles::isPixelDeltaLikelyPartOfMotionRectangle(MotionRectangle* motionRectangle, PixelDelta* pixelDelta) -> bool{

    int32_t maxX = motionRectangle->getRectangle()->x +motionRectangle->getRectangle()->width;;
    

    int32_t maxY = motionRectangle->getRectangle()->y +motionRectangle->getRectangle()->height;;
    

    int32_t horizontalDistance = pixelDelta->getPoint()->getX() -maxX;;
    

    int32_t verticalDistance = pixelDelta->getPoint()->getY() -maxY;;
    

                        if(horizontalDistance < this->MAX_PIXEL_DISTANCE_THRESHOLD && verticalDistance < this->MAX_PIXEL_DISTANCE_THRESHOLD)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_ALLMOTIONRECTANGLES_CPP
