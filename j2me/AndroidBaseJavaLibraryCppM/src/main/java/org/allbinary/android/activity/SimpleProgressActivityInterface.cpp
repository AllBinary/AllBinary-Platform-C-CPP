
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
        
            #include "java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SimpleProgressActivityInterface {

    public: virtual void runOnUiThread(Runnable* action) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void onSetProgress(int32_t value, std::string text) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void onDismissProgress(std::vector<int32_t> animationSequence) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void onShowProgress(bool indeterminate, std::vector<int32_t> animationSequence) = 0;

};

            

