
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSRUNNABLE_H
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSRUNNABLE_H

#include <android/app/Activity.h>

      
#include <org/allbinary/android/activity/MidletActivityBase.h>

      
#include <org/allbinary/android/activity/SimpleProgressActivityInterface.h>

      
#include <org/allbinary/thread/ARunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProgressCanvas.h"

class ProgressRunnable: public ARunnable {
        

    const midletActivity: SimpleProgressActivityInterface;

    const progressCanvas: ProgressCanvas;

public constructor (Activity midletActivity, ProgressCanvas progressCanvas);

    public run();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSRUNNABLE_H
