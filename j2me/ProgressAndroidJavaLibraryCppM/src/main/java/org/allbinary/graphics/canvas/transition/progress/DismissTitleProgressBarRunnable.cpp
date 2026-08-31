
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/animation/transition/TransistionTypes.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <android/app/Activity.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProgressRunnable.h"
#include "ProgressCanvas.h"

class DismissTitleProgressBarRunnable: public ProgressRunnable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (Activity midletActivity, ProgressCanvas progressCanvas){
            super(midletActivity, progressCanvas);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    private: const ZOOM_OUT_AND_IN: std::vector<int32_t> = [TransistionTypes.getInstance()!.ZOOM_OUT,TransistionTypes.getInstance()!.ZOOM_IN];

    public run(){

        try {
            this.midletActivity!.onDismissProgress(this.ZOOM_OUT_AND_IN);
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
}

}


};

            

