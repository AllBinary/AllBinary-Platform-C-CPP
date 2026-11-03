
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLES_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MotionRectangles::MotionRectangles(std::string name, ImageComparisonResult* imageComparisonResult){
this->name= name;
    
this->setImageComparisonResult(imageComparisonResult);
    
this->setVector(new BasicArrayListD());
    
}


    auto MotionRectangles::getVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rectangleVector;
    
}


    auto MotionRectangles::setVector(BasicArrayList* rectangleVector) -> void{
this->rectangleVector= rectangleVector;
    
}


    auto MotionRectangles::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto MotionRectangles::getImageComparisonResult() -> ImageComparisonResult*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->imageComparisonResult;
    
}


    auto MotionRectangles::setImageComparisonResult(ImageComparisonResult* imageComparisonResult) -> void{
this->imageComparisonResult= imageComparisonResult;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLES_CPP
