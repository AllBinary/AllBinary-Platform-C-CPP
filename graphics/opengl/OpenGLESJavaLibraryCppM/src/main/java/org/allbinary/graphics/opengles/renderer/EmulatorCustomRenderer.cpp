
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_EMULATORCUSTOMRENDERER_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_EMULATORCUSTOMRENDERER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/renderer/EmulatorCustomRenderer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <javax/microedition/khronos/egl/EGLConfig.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/emulator/InitEmulatorFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/renderer/RendererStrings.h"


EmulatorCustomRenderer::EmulatorCustomRenderer() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), renderStrings(RendererStrings::getInstance()) {
        }
        
    auto EmulatorCustomRenderer::onSurfaceCreated(GL10* gl, EGLConfig* eglConfig) -> void{
this->logUtil->putF(this->commonStrings->START, this, this->renderStrings->ON_SURFACE_CREATED);
    

    InitEmulatorFactory* initEmulatorFactory = InitEmulatorFactory::getInstance();;
    

                        if(!initEmulatorFactory->isInitEmulator())
                        
                                    {
                                    
        try {
            
    std::string WAIT_FOR_EMULATOR = "Waiting on Emulator Initialization";;
    

        while(!initEmulatorFactory->isInitEmulator())
        {
PreLogUtil::put(WAIT_FOR_EMULATOR, this, this->renderStrings->ON_SURFACE_CREATED);
    
Thread::sleep(180);
    
}


                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->renderStrings->ON_SURFACE_CREATED, &e);
    
}


                                    }
                                
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_EMULATORCUSTOMRENDERER_CPP
