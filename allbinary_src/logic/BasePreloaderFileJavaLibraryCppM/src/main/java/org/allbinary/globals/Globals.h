
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

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/ClassLoader.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/loader/WebappClassLoaderInfo.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AppUrlGlobals.h"
#include "URLGLOBALS.h"

class Globals
            : public Object
         {
        

    private: static const instance: Globals = new Globals();

    public static Globals getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor ();

    public init(ClassLoader classLoader, string pathString);

};

            


        #endif //ORG_ALLBINARY_GLOBALS_GLOBALS_H
