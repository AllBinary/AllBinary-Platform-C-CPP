
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class QuoteRequestData
            : public virtual Object
         {

    private: static QuoteRequestData* instance_owner();
    private: static QuoteRequestData* instance;

    public: static QuoteRequestData* getInstance();

private: QuoteRequestData();

    public: const std::string ID = "QUOTEREQUEST_ID";

    public: const std::string PROJECT_INFO = "QUOTEREQUEST_PROJECT_INFO";

    public: const std::string CUSTOMER_COMMENTS = "QUOTEREQUEST_CUSTOMER_COMMENTS";

    public: const std::string BUDGET = "QUOTEREQUEST_BUDGET";

    public: const std::string TIMEFRAME = "QUOTEREQUEST_TIMEFRAME";

    public: const std::string COMMENTS = "QUOTEREQUEST_COMMENTS";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_QUOTEREQUEST_QUOTEREQUESTDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_QUOTEREQUEST_QUOTEREQUESTDATA_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_QUOTEREQUEST_QUOTEREQUESTDATA_H_COMPLETE
        
        #endif
    
