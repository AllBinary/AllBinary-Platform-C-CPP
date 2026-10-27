
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_TITLEPROGRESSBARSETPROGRESSRUNNABLE_H
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_TITLEPROGRESSBARSETPROGRESSRUNNABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CommonStrings;
class LogUtil;
class Activity;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/canvas/transition/progress/ProgressRunnable.h"
class ProgressCanvas;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TitleProgressBarSetProgressRunnable: public ProgressRunnable {

    /*protected*/ public: LogUtil* logUtil;

public: TitleProgressBarSetProgressRunnable(Activity* midletActivity, ProgressCanvas* progressCanvas);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_TITLEPROGRESSBARSETPROGRESSRUNNABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_TITLEPROGRESSBARSETPROGRESSRUNNABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_TITLEPROGRESSBARSETPROGRESSRUNNABLE_H_COMPLETE
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
    
