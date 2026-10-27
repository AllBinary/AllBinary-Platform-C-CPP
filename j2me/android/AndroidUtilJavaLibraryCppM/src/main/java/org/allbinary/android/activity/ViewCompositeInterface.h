
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
        



        #ifndef ORG_ALLBINARY_ANDROID_ACTIVITY_VIEWCOMPOSITEINTERFACE_H
        #define ORG_ALLBINARY_ANDROID_ACTIVITY_VIEWCOMPOSITEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Runnable.h"
        
class View;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ViewCompositeInterface
            : public virtual Object
         {

    public: virtual View* getRootView() = 0;

    public: virtual View* getView() = 0;

    public: virtual void runOnUiThread(Runnable* action) = 0;

};

            


        #endif //ORG_ALLBINARY_ANDROID_ACTIVITY_VIEWCOMPOSITEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_ACTIVITY_VIEWCOMPOSITEINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_ACTIVITY_VIEWCOMPOSITEINTERFACE_H_COMPLETE
        #if __has_include(<android/view/View.h>)
#include <android/view/View.h>
#endif

        #endif
    
