
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
        



        #ifndef ORG_ALLBINARY_ANDROID_VIEW_ALLBINARYRENDERER_CPP
        #define ORG_ALLBINARY_ANDROID_VIEW_ALLBINARYRENDERER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/view/AllBinaryRenderer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AllBinaryRenderer::AllBinaryRenderer() {
        }
        auto AllBinaryRenderer::instance_owner() -> AllBinaryRenderer* { static std::unique_ptr<AllBinaryRenderer> value(new AllBinaryRenderer()); return value.get(); }
AllBinaryRenderer* AllBinaryRenderer::instance = AllBinaryRenderer::instance_owner();

    auto AllBinaryRenderer::getInstance() -> AllBinaryRenderer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AllBinaryRenderer::instance;
    
}


    auto AllBinaryRenderer::setRunnable(Runnable* runnable) -> void{
}


    auto AllBinaryRenderer::clearRunnable() -> void{
}




        #endif //ORG_ALLBINARY_ANDROID_VIEW_ALLBINARYRENDERER_CPP
