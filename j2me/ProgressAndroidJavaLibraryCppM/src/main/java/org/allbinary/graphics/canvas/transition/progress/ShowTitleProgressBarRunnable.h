
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_SHOWTITLEPROGRESSBARRUNNABLE_H
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_SHOWTITLEPROGRESSBARRUNNABLE_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/animation/transition/TransistionTypes.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <android/app/Activity.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProgressRunnable.h"
#include "ProgressCanvas.h"

class ShowTitleProgressBarRunnable: public ProgressRunnable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (Activity midletActivity, ProgressCanvas progressCanvas);

    private: const FADE_IN_HALF: std::vector<int32_t> = [TransistionTypes.getInstance()!.FADE_IN_TO_HALF_ALPHA,TransistionTypes.getInstance()!.FADE_IN_FROM_HALF_ALPHA];

    public run();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_SHOWTITLEPROGRESSBARRUNNABLE_H
