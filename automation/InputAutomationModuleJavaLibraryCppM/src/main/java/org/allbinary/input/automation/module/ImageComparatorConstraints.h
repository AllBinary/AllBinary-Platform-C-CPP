
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
        
class ImageComparatorConstraints
            : public Object
        : public ImageComparatorConstraintsInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: BasicArrayList avoidVector;

    private: int32_t maxNonMatchingPixelDeltas= 0;

    private: int32_t doImageComparisonEveryNthFrame;

public: ImageComparatorConstraints(int32_t doImageComparisonEveryNthFrame);

    public: BasicArrayList getAvoidVector();

    public: bool isColorAllowed(int32_t frame, GPoint point, Color color);

    public: bool isCollisionWithAvoidRectangles(Rectangle rectangle);

    public: bool isCollisionWithAvoidRectangles(GPoint point);

    public: void setAvoidVector(BasicArrayList avoidVector);

    public: int32_t getMaxNonMatchingPixelDeltas();

    public: void setMaxNonMatchingPixelDeltas(int32_t maxNonMatchingPixelDeltas);

    public: bool isFrameAllowed(int32_t frame);

                //@Throws(Exception.constructor)
            
    public: bool isImageValid(BufferedImage bufferedImage);

    public: void log();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_IMAGECOMPARATORCONSTRAINTS_H
