
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
        



        #ifndef ORG_ALLBINARY_ANDROID_VIEW_BASEVIEWWRAPPER_CPP
        #define ORG_ALLBINARY_ANDROID_VIEW_BASEVIEWWRAPPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/view/BaseViewWrapper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BaseViewWrapper::BaseViewWrapper() {
        }
        auto BaseViewWrapper::NULL_VIEW_WRAPPER_owner() -> BaseViewWrapper* { static std::unique_ptr<BaseViewWrapper> value(new BaseViewWrapper()); return value.get(); }
BaseViewWrapper* BaseViewWrapper::NULL_VIEW_WRAPPER = BaseViewWrapper::NULL_VIEW_WRAPPER_owner();

    auto BaseViewWrapper::invalidate() -> void{
}


    auto BaseViewWrapper::postInvalidate() -> void{
}




        #endif //ORG_ALLBINARY_ANDROID_VIEW_BASEVIEWWRAPPER_CPP
