
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

            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <android/view/View.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AndroidGameStatistics.h"

class ProfilingRefreshHelper: public AndroidGameStatistics {
        

    private: static const instance: ProfilingRefreshHelper = new ProfilingRefreshHelper();

    public static AndroidGameStatistics getInstance();

    private: firstTime: bool = true;

    private: bestFrameProcessingTime: int32_t= 0;

    private: worstFrameProcessingTime: int32_t= 0;

    private: frameProcessingTimeElapsed: int64_t= 0;

private constructor ();

    public initView(View view);

    public nextFrame();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_CANVAS_PROFILINGREFRESHHELPER_H
