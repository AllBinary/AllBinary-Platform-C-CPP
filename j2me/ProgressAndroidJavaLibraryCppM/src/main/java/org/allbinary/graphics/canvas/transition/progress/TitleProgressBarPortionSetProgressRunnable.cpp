
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <android/app/Activity.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/canvas/transition/progress/ProgressRunnable.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/AndroidBasicTitleProgressBar.h"

class TitleProgressBarPortionSetProgressRunnable: public ProgressRunnable {

    protected: LogUtil* logUtil = LogUtil::getInstance();

public: TitleProgressBarPortionSetProgressRunnable(Activity* midletActivity, ProgressCanvas* progressCanvas) : ProgressRunnable(midletActivity, progressCanvas){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void run(){

        try {
            
    AndroidBasicTitleProgressBar* progressCanvas = dynamic_cast<AndroidBasicTitleProgressBar*>(this->progressCanvas);;
    
this->midletActivity.onSetProgress(static_cast<int32_t>((this->progressCanvas->getValue() +this->progressCanvas->getMaxValue() /progressCanvas->getPortion())), this->progressCanvas->getText());
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}


};

            

