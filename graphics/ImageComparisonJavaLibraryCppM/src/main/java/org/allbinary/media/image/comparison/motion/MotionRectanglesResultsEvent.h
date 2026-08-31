
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESRESULTSEVENT_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESRESULTSEVENT_H

            #include "../../../../../../java/lang/Long.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectangles.h"

class MotionRectanglesResultsEvent: public AllBinaryEventObject {
        

    private: const frame: Long;

    private: motionRectangles: MotionRectangles;

public constructor (any = {} anyType, Long frame, MotionRectangles motionRectangles);

    public MotionRectangles getMotionRectangles();

    public setMotionRectangles(MotionRectangles motionRectangles);

    public Long getFrame();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_MOTIONRECTANGLESRESULTSEVENT_H
