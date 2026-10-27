
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
        



        #ifndef ORG_ALLBINARY_ANDROID_VIEW_VIEWWRAPPER_CPP
        #define ORG_ALLBINARY_ANDROID_VIEW_VIEWWRAPPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/view/ViewWrapper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <android/view/View.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/view/BaseViewWrapper.h"


ViewWrapper::ViewWrapper(View* view){
this->view= view;
    
}


    auto ViewWrapper::invalidate() -> void{
this->view->invalidate();
    
}


    auto ViewWrapper::postInvalidate() -> void{
this->view->postInvalidate();
    
}




        #endif //ORG_ALLBINARY_ANDROID_VIEW_VIEWWRAPPER_CPP
