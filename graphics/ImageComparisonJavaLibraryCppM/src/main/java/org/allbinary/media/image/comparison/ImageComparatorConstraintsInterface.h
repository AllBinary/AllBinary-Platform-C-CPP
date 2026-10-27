
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/Rectangle.h"
#include "org/allbinary/media/image/comparison/Color.h"

class ImageComparatorConstraintsInterface {

    public: virtual int32_t getMaxNonMatchingPixelDeltas() = 0;

    public: virtual bool isCollisionWithAvoidRectangles(Rectangle* rectangle) = 0;

    public: virtual bool isCollisionWithAvoidRectangles(GPoint* point) = 0;

    public: virtual bool isColorAllowed(int32_t frame, GPoint* point, Color* color) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual bool isImageValid(BufferedImage* bufferedImage) = 0;

    public: virtual bool isFrameAllowed(int32_t frame) = 0;

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARATORCONSTRAINTSINTERFACE_H
