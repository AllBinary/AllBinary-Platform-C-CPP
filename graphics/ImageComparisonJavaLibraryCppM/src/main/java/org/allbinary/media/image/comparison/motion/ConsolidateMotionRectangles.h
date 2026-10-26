
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSOLIDATEMOTIONRECTANGLES_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSOLIDATEMOTIONRECTANGLES_H

            #include "java/lang/Exception.h"
        
#include <java/awt.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectangles.h"
#include "MotionRectangle.h"
#include "Rectangle.h"

class ConsolidateMotionRectangles: public MotionRectangles {

    private: static const std::string NAME = "consolidatedMotionRectangles_";

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: ConsolidateMotionRectangles(MotionRectangles motionRectangles);

    private: void consolidateMotionRectangles();

    private: void remove(BasicArrayList removeVector);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSOLIDATEMOTIONRECTANGLES_H
