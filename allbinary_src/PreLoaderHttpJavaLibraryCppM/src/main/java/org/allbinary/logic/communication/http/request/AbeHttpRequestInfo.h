
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFO_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFO_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/util/Enumeration.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeHttpRequestInfoData.h"

class AbeHttpRequestInfo
            : public Object
         {
        

    private: const NAME: string = "AbeHttpRequestInfo";

    private: const abeHttpRequestInfoData: AbeHttpRequestInfoData = AbeHttpRequestInfoData.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: httpUserAgent: string;

    private: remoteAddress: string;

    private: remoteHost: string;

    private: remoteHostByAddr: string;

    private: remotePort: string;

    private: requestedFilePath: string;

public constructor (HashMap<any, any> hashMap);

public constructor (HttpServletRequest httpServletRequest);

    public HashMap<any, any> toHashMap();

    public Vector toVector();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFO_H
