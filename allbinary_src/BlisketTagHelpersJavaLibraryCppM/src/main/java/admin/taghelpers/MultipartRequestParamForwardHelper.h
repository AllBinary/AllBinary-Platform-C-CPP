
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
        



        #ifndef ADMIN_TAGHELPERS_MULTIPARTREQUESTPARAMFORWARDHELPER_H
        #define ADMIN_TAGHELPERS_MULTIPARTREQUESTPARAMFORWARDHELPER_H

            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/logic/communication/http/request/RequestMapInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <tags/HelperTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InventoryItemViewParentTagHelper.h"

class MultipartRequestParamForwardHelper
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const pageContext: PageContext;

    private: const requestMapInterface: RequestMapInterface;

    private: const page: string;

    private: const command: string;

    private: const paramVector: Vector;

public constructor (HelperTag parentHelperTag, string page, string command, Vector paramVector, PageContext pageContext);

                //@Throws(Exception.constructor)
            
    public forward();

    string getParams();

    bool shouldForward();

};

            


        #endif //ADMIN_TAGHELPERS_MULTIPARTREQUESTPARAMFORWARDHELPER_H
