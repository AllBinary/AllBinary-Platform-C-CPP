
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
        



            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <android/view/View.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AndroidGameStatistics.h"

class ProfilingRefreshHelper: public AndroidGameStatistics {
        

    private: static const instance: ProfilingRefreshHelper = new ProfilingRefreshHelper();

    public static AndroidGameStatistics getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ProfilingRefreshHelper.instance;
    
}


    private: firstTime: bool = true;

    private: bestFrameProcessingTime: int32_t= 0;

    private: worstFrameProcessingTime: int32_t= 0;

    private: frameProcessingTimeElapsed: int64_t= 0;

private constructor (){

            super();
        }


    public initView(View view){
super.initView(view);
    
this.frameProcessingTimeElapsed= this.getTimeDelayHelper()!.getStartTime();
    
this.bestFrameProcessingTime= Integer.MAX_VALUE;
    
this.worstFrameProcessingTime= 0;
    
}


    public nextFrame(){
this.frameProcessingTimeElapsed= Date.now() -this.frameProcessingTimeElapsed;
    

                        if(this.firstTime != true)
                        
                                    {
                                    
                        if(this.frameProcessingTimeElapsed > this.worstFrameProcessingTime)
                        this.worstFrameProcessingTime= static_cast<int32_t>(this.frameProcessingTimeElapsed)

                        if(this.frameProcessingTimeElapsed < this.bestFrameProcessingTime)
                        this.bestFrameProcessingTime= static_cast<int32_t>(this.frameProcessingTimeElapsed)

                                    }
                                
                        else {
                            this.firstTime= false;
    

                        }
                            
super.nextFrame();
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StringMaker().append(super.toString())!.append(" Worst: ")!.appendint(this.worstFrameProcessingTime)!.append(" Best: ")!.appendint(this.bestFrameProcessingTime)!.toString();;
    
}


};

            

