
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class TransistionTypes;
class CommonStrings;
class LogUtil;
class Activity;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/canvas/transition/progress/ProgressRunnable.h"
class ProgressCanvas;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DismissTitleProgressBarRunnable: public ProgressRunnable {

    /*protected*/ public: LogUtil* logUtil;

public: DismissTitleProgressBarRunnable(Activity* midletActivity, ProgressCanvas* progressCanvas);

    private: std::vector<int32_t> ZOOM_OUT_AND_IN;

    public: void run();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_DISMISSTITLEPROGRESSBARRUNNABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_DISMISSTITLEPROGRESSBARRUNNABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_DISMISSTITLEPROGRESSBARRUNNABLE_H_COMPLETE
        #if __has_include(<org/allbinary/animation/transition/TransistionTypes.h>)
#include <org/allbinary/animation/transition/TransistionTypes.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<android/app/Activity.h>)
#include <android/app/Activity.h>
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ProgressRunnable.h")
#include "org/allbinary/graphics/canvas/transition/progress/ProgressRunnable.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h")
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#endif

        #endif
    
