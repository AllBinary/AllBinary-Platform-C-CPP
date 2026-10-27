
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
        



        #ifndef ORG_ALLBINARY_ANDROID_ACTIVITY_PROGRESSACTIVITYINTERFACE_H
        #define ORG_ALLBINARY_ANDROID_ACTIVITY_PROGRESSACTIVITYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ProgressActivityInterface
            : public virtual Object
         {

    public: virtual void runOnUiThread(Runnable* action) = 0;

    public: virtual void onDismissTitleProgressBar() = 0;

    public: virtual void onShowTitleProgressBar(int32_t value, bool indeterminate) = 0;

    public: virtual void onTitleProgressBarSetProgress(int32_t value) = 0;

};

            


        #endif //ORG_ALLBINARY_ANDROID_ACTIVITY_PROGRESSACTIVITYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_ACTIVITY_PROGRESSACTIVITYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_ACTIVITY_PROGRESSACTIVITYINTERFACE_H_COMPLETE
        
        #endif
    
