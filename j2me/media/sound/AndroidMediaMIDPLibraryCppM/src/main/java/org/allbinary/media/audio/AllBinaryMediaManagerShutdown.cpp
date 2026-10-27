
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGERSHUTDOWN_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGERSHUTDOWN_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/AllBinaryMediaManagerShutdown.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/SoundsFactoryInterface.h"


AllBinaryMediaManagerShutdown::AllBinaryMediaManagerShutdown() {
        }
        auto AllBinaryMediaManagerShutdown::instance_owner() -> AllBinaryMediaManagerShutdown* { static std::unique_ptr<AllBinaryMediaManagerShutdown> value(new AllBinaryMediaManagerShutdown()); return value.get(); }
AllBinaryMediaManagerShutdown* AllBinaryMediaManagerShutdown::instance = AllBinaryMediaManagerShutdown::instance_owner();

                //@Throws(Exception.constructor)
            
    auto AllBinaryMediaManagerShutdown::shutdown(SoundsFactoryInterface* soundsFactoryInterface) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->putF("No Media Shutdown for Android Process", AllBinaryMediaManagerShutdown::instance, "shutdown");
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGERSHUTDOWN_CPP
