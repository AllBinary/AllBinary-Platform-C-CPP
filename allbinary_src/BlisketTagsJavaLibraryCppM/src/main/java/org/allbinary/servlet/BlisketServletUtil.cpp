
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
        



        #ifndef ORG_ALLBINARY_SERVLET_BLISKETSERVLETUTIL_CPP
        #define ORG_ALLBINARY_SERVLET_BLISKETSERVLETUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/servlet/BlisketServletUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/globals/AppUrlGlobals.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/system/loader/WebappClassLoaderInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BlisketServletUtil::BlisketServletUtil() {
        }
        auto BlisketServletUtil::instance_owner() -> BlisketServletUtil* { static std::unique_ptr<BlisketServletUtil> value(new BlisketServletUtil()); return value.get(); }
BlisketServletUtil* BlisketServletUtil::instance = BlisketServletUtil::instance_owner();

    auto BlisketServletUtil::getInstance() -> BlisketServletUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BlisketServletUtil::instance;
    
}


    auto BlisketServletUtil::init(HttpServletRequest* request) -> void{

    AppUrlGlobals* urlGlobals = new AppUrlGlobals();;
    
urlGlobals->setWebappPath(request->getServletContext()->getRealPath(AbPathData::getInstance()->SEPARATOR));
    
URLGLOBALS::init(urlGlobals);
    
WebappClassLoaderInfo::setLoader(getClass()getClassLoader());
    
}




        #endif //ORG_ALLBINARY_SERVLET_BLISKETSERVLETUTIL_CPP
