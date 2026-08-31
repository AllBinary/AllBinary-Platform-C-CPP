
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
        



        #ifndef ORG_ALLBINARY_ANDROID_ACTIVITY_SIMPLEPROGRESSACTIVITYINTERFACE_H
        #define ORG_ALLBINARY_ANDROID_ACTIVITY_SIMPLEPROGRESSACTIVITYINTERFACE_H

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SimpleProgressActivityInterface {
        

    runOnUiThread(Runnable action);

                //@Throws(Exception.constructor)
            
    onSetProgress(int32_t value, string text);

                //@Throws(Exception.constructor)
            
    onDismissProgress(std::vector<int32_t> animationSequence);

                //@Throws(Exception.constructor)
            
    onShowProgress(bool indeterminate, std::vector<int32_t> animationSequence);

};

            


        #endif //ORG_ALLBINARY_ANDROID_ACTIVITY_SIMPLEPROGRESSACTIVITYINTERFACE_H
