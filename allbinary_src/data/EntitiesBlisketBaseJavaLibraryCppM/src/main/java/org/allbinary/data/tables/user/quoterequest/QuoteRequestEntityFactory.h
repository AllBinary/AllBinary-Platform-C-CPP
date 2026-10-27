
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_QUOTEREQUEST_QUOTEREQUESTENTITYFACTORY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_QUOTEREQUEST_QUOTEREQUESTENTITYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class QuoteRequestEntity;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class QuoteRequestEntityFactory
            : public virtual Object
         {

    private: static QuoteRequestEntityFactory* instance_owner();
    private: static QuoteRequestEntityFactory* instance;

    public: static QuoteRequestEntityFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: QuoteRequestEntityFactory();

    public: QuoteRequestEntity* getQuoteRequestEntityInstance();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_QUOTEREQUEST_QUOTEREQUESTENTITYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_USER_QUOTEREQUEST_QUOTEREQUESTENTITYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_USER_QUOTEREQUEST_QUOTEREQUESTENTITYFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/data/tables/user/quoterequest/QuoteRequestEntity.h")
#include "org/allbinary/data/tables/user/quoterequest/QuoteRequestEntity.h"
#endif

        #endif
    
