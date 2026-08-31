
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
        



        #ifndef ORG_ALLBINARY_SERVLET_BLISKETSERVLETUTIL_H
        #define ORG_ALLBINARY_SERVLET_BLISKETSERVLETUTIL_H

            #include "../../../java/lang/Object.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/globals/AppUrlGlobals.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/system/loader/WebappClassLoaderInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BlisketServletUtil
            : public Object
         {
        

    private: static const instance: BlisketServletUtil = new BlisketServletUtil();

    public static BlisketServletUtil getInstance();

    public init(HttpServletRequest request);

};

            


        #endif //ORG_ALLBINARY_SERVLET_BLISKETSERVLETUTIL_H
