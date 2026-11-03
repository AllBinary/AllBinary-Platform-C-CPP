
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANDROID_ACTIVITY_NULLKEYINPUTVIEWCOMPOSITE_H
        #define ORG_ALLBINARY_ANDROID_ACTIVITY_NULLKEYINPUTVIEWCOMPOSITE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Runnable.h"
        
class View;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/activity/KeyInputViewCompositeInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullKeyInputViewComposite
            : public virtual Object
        , public virtual KeyInputViewCompositeInterface {

    private: static NullKeyInputViewComposite* NULL_KEY_INPUT_VIEW_COMPOSITE_owner();
    public: static NullKeyInputViewComposite* NULL_KEY_INPUT_VIEW_COMPOSITE;


            
    public: NullKeyInputViewComposite();
        
    public: void setKeyInputView(View* keyInputView);

    public: View* getRootView();

    public: View* getView();

    public: void runOnUiThread(Runnable* action);

};

            


        #endif //ORG_ALLBINARY_ANDROID_ACTIVITY_NULLKEYINPUTVIEWCOMPOSITE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_ACTIVITY_NULLKEYINPUTVIEWCOMPOSITE_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_ACTIVITY_NULLKEYINPUTVIEWCOMPOSITE_H_COMPLETE
        #if __has_include(<android/view/View.h>)
#include <android/view/View.h>
#endif
#if __has_include("org/allbinary/android/activity/KeyInputViewCompositeInterface.h")
#include "org/allbinary/android/activity/KeyInputViewCompositeInterface.h"
#endif

        #endif
    
