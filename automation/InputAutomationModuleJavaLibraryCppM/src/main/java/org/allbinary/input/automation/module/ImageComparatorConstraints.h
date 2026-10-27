
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_IMAGECOMPARATORCONSTRAINTS_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_IMAGECOMPARATORCONSTRAINTS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class BasicArrayList;
class BasicArrayListD;
class RectangleCollisionUtil;
class GPoint;
class LogUtil;
#include <org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageComparatorConstraints
            : public virtual Object
        , public ImageComparatorConstraintsInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: BasicArrayList* avoidVector;

    private: int32_t maxNonMatchingPixelDeltas= 0;

    private: int32_t doImageComparisonEveryNthFrame;

public: ImageComparatorConstraints(int32_t doImageComparisonEveryNthFrame);

    public: BasicArrayList* getAvoidVector();

    public: bool isColorAllowed(int32_t frame, GPoint* point, Color* color);

    public: bool isCollisionWithAvoidRectangles(Rectangle* rectangle);

    public: bool isCollisionWithAvoidRectangles(GPoint* point);

    public: void setAvoidVector(BasicArrayList* avoidVector);

    public: int32_t getMaxNonMatchingPixelDeltas();

    public: void setMaxNonMatchingPixelDeltas(int32_t maxNonMatchingPixelDeltas);

    public: bool isFrameAllowed(int32_t frame);

                //@Throws(Exception.constructor)
            
    public: bool isImageValid(BufferedImage* bufferedImage);

    public: void log();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_IMAGECOMPARATORCONSTRAINTS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_IMAGECOMPARATORCONSTRAINTS_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_IMAGECOMPARATORCONSTRAINTS_H_COMPLETE
        #if __has_include(<java/awt/Color.h>)
#include <java/awt/Color.h>
#endif
#if __has_include(<java/awt/Rectangle.h>)
#include <java/awt/Rectangle.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/collision/RectangleCollisionUtil.h>)
#include <org/allbinary/collision/RectangleCollisionUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>)
#include <org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>
#endif

        #endif
    
