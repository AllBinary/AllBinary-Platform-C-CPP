
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
        



            #include "java/lang/Object.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/globals/AppUrlGlobals.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/system/loader/WebappClassLoaderInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BlisketServletUtil
            : public Object
         {

    private: static BlisketServletUtil instance() { return BlisketServletUtil(); }

    public: static BlisketServletUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BlisketServletUtil::instance();
    
}


    public: void init(HttpServletRequest request){

    AppUrlGlobals urlGlobals = AppUrlGlobals();;
    
urlGlobals.setWebappPath(request.getServletContext().getRealPath(AbPathData::getInstance().SEPARATOR));
    
URLGLOBALS::init(urlGlobals);
    
WebappClassLoaderInfo::setLoader(constructor.namegetClassLoader());
    
}


};

            

