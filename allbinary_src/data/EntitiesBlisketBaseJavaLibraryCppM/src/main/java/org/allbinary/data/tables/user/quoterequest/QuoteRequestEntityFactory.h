
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/quoterequest/QuoteRequestEntity.h"

class QuoteRequestEntityFactory
            : public Object
         {

    private: static QuoteRequestEntityFactory* instance() { static std::unique_ptr<QuoteRequestEntityFactory> value(new QuoteRequestEntityFactory()); return value.get(); }

    public: static QuoteRequestEntityFactory* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

private: QuoteRequestEntityFactory();

    public: QuoteRequestEntity* getQuoteRequestEntityInstance();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_QUOTEREQUEST_QUOTEREQUESTENTITYFACTORY_H
