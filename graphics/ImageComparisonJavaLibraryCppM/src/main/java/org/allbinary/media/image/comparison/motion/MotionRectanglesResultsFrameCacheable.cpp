
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESRESULTSFRAMECACHEABLE_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESRESULTSFRAMECACHEABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsFrameCacheable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"


MotionRectanglesResultsFrameCacheable::MotionRectanglesResultsFrameCacheable(MotionRectangles* motionRectangles, int64_t frame){
this->frame= frame;
    
this->setMotionRectangles(motionRectangles);
    
}


    auto MotionRectanglesResultsFrameCacheable::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(this->frame);
    
}


    auto MotionRectanglesResultsFrameCacheable::getMotionRectangles() -> MotionRectangles*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->motionRectangles;
    
}


    auto MotionRectanglesResultsFrameCacheable::setMotionRectangles(MotionRectangles* motionRectangles) -> void{
this->motionRectangles= motionRectangles;
    
}


    auto MotionRectanglesResultsFrameCacheable::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getClass()->getName());
    
stringBuffer->append(" Frame: ");
    
stringBuffer->append(this->getKey()->toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESRESULTSFRAMECACHEABLE_CPP
