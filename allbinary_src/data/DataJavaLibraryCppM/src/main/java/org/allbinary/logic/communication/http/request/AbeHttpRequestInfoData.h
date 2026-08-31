
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFODATA_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFODATA_H

            #include "../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbeHttpRequestInfoData
            : public Object
         {
        

    private: static const instance: AbeHttpRequestInfoData = new AbeHttpRequestInfoData();

    public static AbeHttpRequestInfoData getInstance();

private constructor ();

    public const HTTP_USER_AGENT: string = "HTTP_USER_AGENT";

    public const REMOTE_ADDRESS: string = "REMOTE_ADDRESS";

    public const REMOTE_HOST: string = "REMOTE_HOST";

    public const REMOTE_HOST_BY_ADDRESS: string = "REMOTE_HOST_BY_ADDRESS";

    public const REMOTE_PORT: string = "REMOTE_PORT";

    public const REQUEST_FILE_PATH: string = "REQUEST_FILE_PATH";

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_ABEHTTPREQUESTINFODATA_H
