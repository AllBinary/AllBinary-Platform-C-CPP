
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

public: DismissTitleProgressBarRunnable(Activity* midletActivity, ProgressCanvas* progressCanvas) : ProgressRunnable(midletActivity, progressCanvas){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    private: const std::vector<int32_t> ZOOM_OUT_AND_IN = {TransistionTypes::getInstance()->ZOOM_OUT,TransistionTypes::getInstance()->ZOOM_IN};

    public: void run(){

        try {
            this->midletActivity.onDismissProgress(this->ZOOM_OUT_AND_IN);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}


};

            

