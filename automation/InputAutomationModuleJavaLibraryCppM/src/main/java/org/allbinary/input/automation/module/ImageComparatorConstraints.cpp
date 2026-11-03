
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_IMAGECOMPARATORCONSTRAINTS_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_IMAGECOMPARATORCONSTRAINTS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/ImageComparatorConstraints.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/awt/Color.h>

      
#include <java/awt/Rectangle.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/collision/RectangleCollisionUtil.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImageComparatorConstraints::ImageComparatorConstraints(int32_t doImageComparisonEveryNthFrame) : logUtil(LogUtil::getInstance()){
this->doImageComparisonEveryNthFrame= doImageComparisonEveryNthFrame;
    
this->setAvoidVector(new BasicArrayListD());
    
}


    auto ImageComparatorConstraints::getAvoidVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->avoidVector;
    
}


    auto ImageComparatorConstraints::isColorAllowed(int32_t frame, GPoint* point, Color* color) -> bool{



                            throw RuntimeException();
                    
}


    auto ImageComparatorConstraints::isCollisionWithAvoidRectangles(Rectangle* rectangle) -> bool{

    bool isCollsionWithAvoidRectangles = false;;
    

    BasicArrayList* avoidVector = this->getAvoidVector();;
    

    int32_t size = avoidVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Rectangle* avoidRectangle = dynamic_cast<Rectangle*>(avoidVector->get(index));;
    

                        if(RectangleCollisionUtil::isCollision(avoidRectangle, rectangle))
                        
                                    {
                                    isCollsionWithAvoidRectangles= true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return isCollsionWithAvoidRectangles;
    
}


    auto ImageComparatorConstraints::isCollisionWithAvoidRectangles(GPoint* point) -> bool{

    bool isCollsionWithAvoidRectangles = false;;
    

    BasicArrayList* avoidVector = this->getAvoidVector();;
    

    int32_t size = avoidVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Rectangle* avoidRectangle = dynamic_cast<Rectangle*>(avoidVector->get(index));;
    

                        if(RectangleCollisionUtil::isCollision(avoidRectangle, point))
                        
                                    {
                                    isCollsionWithAvoidRectangles= true;
    
break;

                    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return isCollsionWithAvoidRectangles;
    
}


    auto ImageComparatorConstraints::setAvoidVector(BasicArrayList* avoidVector) -> void{
this->avoidVector= avoidVector;
    
}


    auto ImageComparatorConstraints::getMaxNonMatchingPixelDeltas() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxNonMatchingPixelDeltas;
    
}


    auto ImageComparatorConstraints::setMaxNonMatchingPixelDeltas(int32_t maxNonMatchingPixelDeltas) -> void{
this->maxNonMatchingPixelDeltas= maxNonMatchingPixelDeltas;
    
}


    auto ImageComparatorConstraints::isFrameAllowed(int32_t frame) -> bool{

    int32_t remainder = ((frame +1) % this->doImageComparisonEveryNthFrame);;
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(" Frame: ") +JavaString::valueOf(frame)) +JavaString::valueOf(" remainder: ")) +JavaString::valueOf(remainder)) +JavaString::valueOf(" this.doImageComparisonEveryNthFrame: ")) +JavaString::valueOf(this->doImageComparisonEveryNthFrame), this, "isCollisionWithAvoidRectangles");
    

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
            
    auto ImageComparatorConstraints::isImageValid(BufferedImage* bufferedImage) -> bool{



                            throw RuntimeException();
                    
}


    auto ImageComparatorConstraints::log() -> void{

    BasicArrayList* avoidVector = this->getAvoidVector();;
    

    int32_t size = avoidVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Rectangle* avoidRectangle = dynamic_cast<Rectangle*>(avoidVector->get(index));;
    
this->logUtil->putF(JavaString::valueOf("Avoid Rectangle: ") +JavaString::valueOf(avoidRectangle), this, "log");
    
}

}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_IMAGECOMPARATORCONSTRAINTS_CPP
