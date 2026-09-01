
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESIMAGEINPUTOUTPUT_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESIMAGEINPUTOUTPUT_H

            #include <vector>
        
            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Long.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/input/automation/ImageOutputData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/number/LongUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/logic/util/cache/PoolInterface.h>

      
#include <org/allbinary/logic/visual/media/MediaDataFactory.h>

      
#include <org/allbinary/media/image/ImagePersistanceUtil.h>

      
#include <org/allbinary/media/image/cache/BufferedImageCacheable.h>

      
#include <org/allbinary/media/image/cache/BufferedImageInfo.h>

      
#include <org/allbinary/media/image/cache/BufferedImageInfoFactory.h>

      
#include <org/allbinary/media/image/cache/BufferedImagePoolSingleton.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>

      
#include <org/allbinary/media/image/io/ImageIOInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllMotionRectanglesResultsCacheSingleton.h"
#include "MotionRectanglesResultsFrameCacheable.h"
#include "MotionRectangles.h"
#include "ConsolidatedMotionRectanglesResultsCacheSingleton.h"
#include "ConstrainedMotionRectanglesResultsCacheSingleton.h"
#include "Graphics.h"
#include "MotionRectangle.h"
#include "Rectangle.h"
#include "Color.h"

class MotionRectanglesImageInputOutput
            : public Object
        : public ImageIOInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const int32_t NUMBER_OF_IMAGES = 1;

public: MotionRectanglesImageInputOutput();

                //@Throws(Exception.constructor)
            
    public: void save(Long frame);

                //@Throws(Exception.constructor)
            
    public: void save(MotionRectangles motionRectangles, Long frame);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESIMAGEINPUTOUTPUT_H
