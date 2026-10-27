
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_DISMISSTITLEPROGRESSBARRUNNABLE_H
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_DISMISSTITLEPROGRESSBARRUNNABLE_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/transition/TransistionTypes.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <android/app/Activity.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/canvas/transition/progress/ProgressRunnable.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"

class DismissTitleProgressBarRunnable: public ProgressRunnable {

    protected: LogUtil* logUtil = LogUtil::getInstance();

public: DismissTitleProgressBarRunnable(Activity* midletActivity, ProgressCanvas* progressCanvas);

    private: const std::vector<int32_t> ZOOM_OUT_AND_IN = {TransistionTypes::getInstance()->ZOOM_OUT,TransistionTypes::getInstance()->ZOOM_IN};

    public: void run();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_DISMISSTITLEPROGRESSBARRUNNABLE_H
