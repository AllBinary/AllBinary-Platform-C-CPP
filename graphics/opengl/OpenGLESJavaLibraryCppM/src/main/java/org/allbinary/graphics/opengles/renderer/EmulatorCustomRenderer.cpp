
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Thread.h"
        
#include <javax/microedition/khronos/egl/EGLConfig.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/emulator/InitEmulatorFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RendererStrings.h"

class EmulatorCustomRenderer
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const RendererStrings renderStrings = RendererStrings::getInstance();

    public: void onSurfaceCreated(GL10 gl, EGLConfig eglConfig){
this->logUtil.putF(this->commonStrings.START, this, this->renderStrings.ON_SURFACE_CREATED);
    

    InitEmulatorFactory initEmulatorFactory = InitEmulatorFactory::getInstance();;
    

                        if(!initEmulatorFactory.isInitEmulator())
                        
                                    {
                                    
        try {
            
    std::string WAIT_FOR_EMULATOR = "Waiting on Emulator Initialization";;
    

        while(!initEmulatorFactory.isInitEmulator())
        {
PreLogUtil::put(WAIT_FOR_EMULATOR, this, this->renderStrings.ON_SURFACE_CREATED);
    
Thread::sleep(180);
    
}


                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->renderStrings.ON_SURFACE_CREATED, e);
    
}


                                    }
                                
}


};

            

