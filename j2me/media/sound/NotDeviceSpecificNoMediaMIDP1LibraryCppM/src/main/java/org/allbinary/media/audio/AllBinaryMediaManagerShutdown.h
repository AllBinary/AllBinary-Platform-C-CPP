
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGERSHUTDOWN_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGERSHUTDOWN_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/AllBinaryMediaManager.h"
#include "org/allbinary/media/audio/SoundsFactoryInterface.h"

class AllBinaryMediaManagerShutdown
            : public Object
         {

    private: static AllBinaryMediaManagerShutdown* instance() { static std::unique_ptr<AllBinaryMediaManagerShutdown> value(new AllBinaryMediaManagerShutdown()); return value.get(); }

                //@Throws(Exception.constructor)
            
    public: static void shutdown(SoundsFactoryInterface* soundsFactoryInterface);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGERSHUTDOWN_H
