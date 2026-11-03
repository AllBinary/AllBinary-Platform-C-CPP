
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLE_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/motion/MotionRectangle.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Cloneable.h"
        
#include <java/awt/Rectangle.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MotionRectangle::MotionRectangle(Rectangle* rectangle){
this->setRectangle(rectangle);
    
this->setPixelDeltaVector(new BasicArrayListD());
    
}


    auto MotionRectangle::getRectangle() -> Rectangle*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rectangle;
    
}


    auto MotionRectangle::setRectangle(Rectangle* rectangle) -> void{
this->rectangle= rectangle;
    
}


    auto MotionRectangle::getPixelDeltaVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->pixelDeltaVector;
    
}


    auto MotionRectangle::setPixelDeltaVector(BasicArrayList* pixelDeltaVector) -> void{
this->pixelDeltaVector= pixelDeltaVector;
    
}


    auto MotionRectangle::clone() -> Object*{

    MotionRectangle* motionRectangle = new MotionRectangle(dynamic_cast<Rectangle*>(this->getRectangle()->clone()));;
    
motionRectangle->setPixelDeltaVector(dynamic_cast<BasicArrayList*>(this->getPixelDeltaVector()->clone()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(motionRectangle);
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLE_CPP
