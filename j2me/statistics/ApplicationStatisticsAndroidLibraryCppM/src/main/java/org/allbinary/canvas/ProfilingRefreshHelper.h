
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
        



        #ifndef ORG_ALLBINARY_CANVAS_PROFILINGREFRESHHELPER_H
        #define ORG_ALLBINARY_CANVAS_PROFILINGREFRESHHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
class View;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/canvas/AndroidGameStatistics.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ProfilingRefreshHelper: public AndroidGameStatistics {

    private: static ProfilingRefreshHelper* instance_owner();
    private: static ProfilingRefreshHelper* instance;

    public: static AndroidGameStatistics* getInstance();

    private: bool firstTime = true;

    private: int32_t bestFrameProcessingTime= 0;

    private: int32_t worstFrameProcessingTime= 0;

    private: int64_t frameProcessingTimeElapsed= 0;

private: ProfilingRefreshHelper();

    public: void initView(View* view);

    public: void nextFrame();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_CANVAS_PROFILINGREFRESHHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CANVAS_PROFILINGREFRESHHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_CANVAS_PROFILINGREFRESHHELPER_H_COMPLETE
        #if __has_include(<android/view/View.h>)
#include <android/view/View.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/canvas/AndroidGameStatistics.h")
#include "org/allbinary/canvas/AndroidGameStatistics.h"
#endif

        #endif
    
