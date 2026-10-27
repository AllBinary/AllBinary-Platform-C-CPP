
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
        



        #ifndef ORG_ALLBINARY_CANVAS_SPECIALMESSAGEUTIL_H
        #define ORG_ALLBINARY_CANVAS_SPECIALMESSAGEUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/system/Memory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/canvas/GameStatisticsFactory.h"

class SpecialMessageUtil
            : public Object
         {

    private: static SpecialMessageUtil* SINGLETON() { static std::unique_ptr<SpecialMessageUtil> value(new SpecialMessageUtil()); return value.get(); }

    public: static SpecialMessageUtil* getInstance();

    public: std::string get();

};

            


        #endif //ORG_ALLBINARY_CANVAS_SPECIALMESSAGEUTIL_H
