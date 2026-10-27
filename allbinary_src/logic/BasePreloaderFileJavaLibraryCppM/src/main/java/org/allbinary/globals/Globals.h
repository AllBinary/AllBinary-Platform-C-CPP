
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
        



        #ifndef ORG_ALLBINARY_GLOBALS_GLOBALS_H
        #define ORG_ALLBINARY_GLOBALS_GLOBALS_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/ClassLoader.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/loader/WebappClassLoaderInfo.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/globals/AppUrlGlobals.h"
#include "org/allbinary/globals/URLGLOBALS.h"

class Globals
            : public Object
         {

    private: static Globals* instance() { static std::unique_ptr<Globals> value(new Globals()); return value.get(); }

    public: static Globals* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

private: Globals();

    public: void init(ClassLoader* classLoader, std::string pathString);

};

            


        #endif //ORG_ALLBINARY_GLOBALS_GLOBALS_H
