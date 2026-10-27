
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
        



        #ifndef ORG_ALLBINARY_ANDROID_ACTIVITY_NULLKEYINPUTVIEWCOMPOSITE_CPP
        #define ORG_ALLBINARY_ANDROID_ACTIVITY_NULLKEYINPUTVIEWCOMPOSITE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/activity/NullKeyInputViewComposite.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Runnable.h"
        
#include <android/view/View.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/activity/KeyInputViewCompositeInterface.h"


NullKeyInputViewComposite::NullKeyInputViewComposite() {
        }
        auto NullKeyInputViewComposite::NULL_KEY_INPUT_VIEW_COMPOSITE_owner() -> NullKeyInputViewComposite* { static std::unique_ptr<NullKeyInputViewComposite> value(new NullKeyInputViewComposite()); return value.get(); }
NullKeyInputViewComposite* NullKeyInputViewComposite::NULL_KEY_INPUT_VIEW_COMPOSITE = NullKeyInputViewComposite::NULL_KEY_INPUT_VIEW_COMPOSITE_owner();

    auto NullKeyInputViewComposite::setKeyInputView(View* keyInputView) -> void{
}


    auto NullKeyInputViewComposite::getRootView() -> View*{



                            throw RuntimeException();
                    
}


    auto NullKeyInputViewComposite::getView() -> View*{



                            throw RuntimeException();
                    
}


    auto NullKeyInputViewComposite::runOnUiThread(Runnable* action) -> void{
}




        #endif //ORG_ALLBINARY_ANDROID_ACTIVITY_NULLKEYINPUTVIEWCOMPOSITE_CPP
