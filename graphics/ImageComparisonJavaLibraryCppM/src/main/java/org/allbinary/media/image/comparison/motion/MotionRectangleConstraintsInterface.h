
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLECONSTRAINTSINTERFACE_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLECONSTRAINTSINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt.h>
#include <java/awt/image/BufferedImage.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Dimension;
class Rectangle;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MotionRectangleConstraintsInterface
            : public virtual Object
         {

    public: virtual int32_t getMaxMotionRectangles() = 0;

    public: virtual Dimension* getMinDimension() = 0;

    public: virtual int32_t getMinArea() = 0;

    public: virtual Dimension* getMaxDimension() = 0;

    public: virtual bool isTooSmall(Rectangle* rectangle) = 0;

    public: virtual bool isAreaTooSmall(Rectangle* rectangle) = 0;

    public: virtual bool isTooBig(Rectangle* rectangle) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual bool isValid(int64_t frame, BufferedImage* bufferedImage, Rectangle* rectangle) = 0;

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLECONSTRAINTSINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLECONSTRAINTSINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLECONSTRAINTSINTERFACE_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/Dimension.h")
#include "org/allbinary/media/image/comparison/motion/Dimension.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/Rectangle.h")
#include "org/allbinary/media/image/comparison/motion/Rectangle.h"
#endif

        #endif
    
