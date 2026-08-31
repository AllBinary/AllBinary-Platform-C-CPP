
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESRESULTSFRAMECACHEABLE_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESRESULTSFRAMECACHEABLE_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Long.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectangles.h"

class MotionRectanglesResultsFrameCacheable
            : public Object
        : public CacheableInterface {
        

    private: motionRectangles: MotionRectangles;

    private: frame: Long;

public constructor (MotionRectangles motionRectangles, Long frame);

    public any getKey();

    public MotionRectangles getMotionRectangles();

    public setMotionRectangles(MotionRectangles motionRectangles);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESRESULTSFRAMECACHEABLE_H
