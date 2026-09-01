
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

    private: static QuoteRequestData instance() { return QuoteRequestData(); }

    public: static QuoteRequestData getInstance();

private: QuoteRequestData();

    public: const std::string ID = "QUOTEREQUEST_ID";

    public: const std::string PROJECT_INFO = "QUOTEREQUEST_PROJECT_INFO";

    public: const std::string CUSTOMER_COMMENTS = "QUOTEREQUEST_CUSTOMER_COMMENTS";

    public: const std::string BUDGET = "QUOTEREQUEST_BUDGET";

    public: const std::string TIMEFRAME = "QUOTEREQUEST_TIMEFRAME";

    public: const std::string COMMENTS = "QUOTEREQUEST_COMMENTS";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_QUOTEREQUEST_QUOTEREQUESTDATA_H
