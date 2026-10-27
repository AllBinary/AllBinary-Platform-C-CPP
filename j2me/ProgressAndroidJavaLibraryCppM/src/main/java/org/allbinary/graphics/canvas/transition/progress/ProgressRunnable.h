
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Activity;
class MidletActivityBase;
class SimpleProgressActivityInterface;
#include <org/allbinary/thread/ARunnable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ProgressCanvas;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ProgressRunnable: public ARunnable {

    /*protected*/ public: SimpleProgressActivityInterface* midletActivity;

    /*protected*/ public: ProgressCanvas* progressCanvas;

public: ProgressRunnable(Activity* midletActivity, ProgressCanvas* progressCanvas);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSRUNNABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSRUNNABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSRUNNABLE_H_COMPLETE
        #if __has_include(<android/app/Activity.h>)
#include <android/app/Activity.h>
#endif
#if __has_include(<org/allbinary/android/activity/MidletActivityBase.h>)
#include <org/allbinary/android/activity/MidletActivityBase.h>
#endif
#if __has_include(<org/allbinary/android/activity/SimpleProgressActivityInterface.h>)
#include <org/allbinary/android/activity/SimpleProgressActivityInterface.h>
#endif
#if __has_include(<org/allbinary/thread/ARunnable.h>)
#include <org/allbinary/thread/ARunnable.h>
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h")
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#endif

        #endif
    
