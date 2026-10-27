
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARATORCONSTRAINTSINTERFACE_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARATORCONSTRAINTSINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/awt.h>
#include <java/awt/image/BufferedImage.h>
class GPoint;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Rectangle;
class Color;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageComparatorConstraintsInterface
            : public virtual Object
         {

    public: virtual int32_t getMaxNonMatchingPixelDeltas() = 0;

    public: virtual bool isCollisionWithAvoidRectangles(Rectangle* rectangle) = 0;

    public: virtual bool isCollisionWithAvoidRectangles(GPoint* point) = 0;

    public: virtual bool isColorAllowed(int32_t frame, GPoint* point, Color* color) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual bool isImageValid(BufferedImage* bufferedImage) = 0;

    public: virtual bool isFrameAllowed(int32_t frame) = 0;

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARATORCONSTRAINTSINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARATORCONSTRAINTSINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARATORCONSTRAINTSINTERFACE_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include("org/allbinary/media/image/comparison/Rectangle.h")
#include "org/allbinary/media/image/comparison/Rectangle.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/Color.h")
#include "org/allbinary/media/image/comparison/Color.h"
#endif

        #endif
    
