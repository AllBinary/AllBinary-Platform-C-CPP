
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_ABCONTEXT_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_ABCONTEXT_H

            #include "../../../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbContext
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: HashMap<any, any> propertiesHashMap;

    private: PageContext pageContext;

public: AbContext(HashMap<any, any> propertiesHashMap, PageContext pageContext);

    public: WeblisketSessionInterface getWeblisketSession();

    public: PageContext getPageContext();

    public: HashMap<any, any> getPropertiesHashMap();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_ABCONTEXT_H
