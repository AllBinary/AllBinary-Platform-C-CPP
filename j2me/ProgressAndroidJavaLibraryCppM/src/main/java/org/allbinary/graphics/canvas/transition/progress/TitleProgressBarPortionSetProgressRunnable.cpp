
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

public: TitleProgressBarPortionSetProgressRunnable(Activity midletActivity, ProgressCanvas progressCanvas) : ProgressRunnable(midletActivity, progressCanvas){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void run(){

        try {
            
    AndroidBasicTitleProgressBar progressCanvas = this->progressCanvas;;
    
this->midletActivity.onSetProgress(static_cast<int32_t>((this->progressCanvas.getValue() +this->progressCanvas.getMaxValue() /progressCanvas.getPortion())), this->progressCanvas.getText());
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
}

}


};

            

