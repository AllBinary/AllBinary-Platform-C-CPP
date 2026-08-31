
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_QUOTEREQUEST_QUOTEREQUESTDATA_H
        #define ORG_ALLBINARY_BUSINESS_QUOTEREQUEST_QUOTEREQUESTDATA_H

            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class QuoteRequestData
            : public Object
         {
        

    private: static const instance: QuoteRequestData = new QuoteRequestData();

    public static QuoteRequestData getInstance();

private constructor ();

    public const ID: string = "QUOTEREQUEST_ID";

    public const PROJECT_INFO: string = "QUOTEREQUEST_PROJECT_INFO";

    public const CUSTOMER_COMMENTS: string = "QUOTEREQUEST_CUSTOMER_COMMENTS";

    public const BUDGET: string = "QUOTEREQUEST_BUDGET";

    public const TIMEFRAME: string = "QUOTEREQUEST_TIMEFRAME";

    public const COMMENTS: string = "QUOTEREQUEST_COMMENTS";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_QUOTEREQUEST_QUOTEREQUESTDATA_H
