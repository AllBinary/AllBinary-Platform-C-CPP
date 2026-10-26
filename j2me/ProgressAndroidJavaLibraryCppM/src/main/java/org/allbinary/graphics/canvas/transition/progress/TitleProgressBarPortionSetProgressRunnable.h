
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_TITLEPROGRESSBARPORTIONSETPROGRESSRUNNABLE_H
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_TITLEPROGRESSBARPORTIONSETPROGRESSRUNNABLE_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <android/app/Activity.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProgressRunnable.h"
#include "ProgressCanvas.h"
#include "AndroidBasicTitleProgressBar.h"

class TitleProgressBarPortionSetProgressRunnable: public ProgressRunnable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: TitleProgressBarPortionSetProgressRunnable(Activity midletActivity, ProgressCanvas progressCanvas);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_TITLEPROGRESSBARPORTIONSETPROGRESSRUNNABLE_H
