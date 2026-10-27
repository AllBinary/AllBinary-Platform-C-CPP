
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
        



        #ifndef ORG_ALLBINARY_CANVAS_PROFILINGREFRESHHELPER_CPP
        #define ORG_ALLBINARY_CANVAS_PROFILINGREFRESHHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/canvas/ProfilingRefreshHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
#include <android/view/View.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/canvas/AndroidGameStatistics.h"

auto ProfilingRefreshHelper::instance_owner() -> ProfilingRefreshHelper* { static std::unique_ptr<ProfilingRefreshHelper> value(new ProfilingRefreshHelper()); return value.get(); }
ProfilingRefreshHelper* ProfilingRefreshHelper::instance = ProfilingRefreshHelper::instance_owner();

    auto ProfilingRefreshHelper::getInstance() -> AndroidGameStatistics*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ProfilingRefreshHelper::instance;
    
}


ProfilingRefreshHelper::ProfilingRefreshHelper(){
}


    auto ProfilingRefreshHelper::initView(View* view) -> void{
AndroidGameStatistics::initView(view);
    
this->frameProcessingTimeElapsed= this->getTimeDelayHelper()->getStartTime();
    
this->bestFrameProcessingTime= Integer.MAX_VALUE;
    
this->worstFrameProcessingTime= 0;
    
}


    auto ProfilingRefreshHelper::nextFrame() -> void{
this->frameProcessingTimeElapsed= System.currentTimeMillis() -this->frameProcessingTimeElapsed;
    

                        if(this->firstTime != true)
                        
                                    {
                                    
                        if(this->frameProcessingTimeElapsed > this->worstFrameProcessingTime)
                        this->worstFrameProcessingTime= static_cast<int32_t>(this->frameProcessingTimeElapsed);
                                

                        if(this->frameProcessingTimeElapsed < this->bestFrameProcessingTime)
                        this->bestFrameProcessingTime= static_cast<int32_t>(this->frameProcessingTimeElapsed);
                                

                                    }
                                
                        else {
                            this->firstTime= false;
    

                        }
                            
AndroidGameStatistics::nextFrame();
    
}


    auto ProfilingRefreshHelper::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append(AndroidGameStatistics::toString())->append(" Worst: ")->appendint(this->worstFrameProcessingTime)->append(" Best: ")->appendint(this->bestFrameProcessingTime)->toString();;
    
}




        #endif //ORG_ALLBINARY_CANVAS_PROFILINGREFRESHHELPER_CPP
