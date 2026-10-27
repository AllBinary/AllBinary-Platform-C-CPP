
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_USEREMAILEVENTNAMEDATA_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_USEREMAILEVENTNAMEDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class OrderHistoryData;
class StdUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserEmailEventNameData
            : public virtual Object
         {

    private: static HashMap<Object*, Object*>* userNameEvenNameHashMap;

    private: static inline int32_t nextId = 0;

    private: static UserEmailEventNameData* INSTALLER_owner();
    public: static UserEmailEventNameData* INSTALLER;

    private: static UserEmailEventNameData* EXCEPTION_owner();
    public: static UserEmailEventNameData* EXCEPTION;

    private: static UserEmailEventNameData* LOGGEDEXCEPTION_owner();
    public: static UserEmailEventNameData* LOGGEDEXCEPTION;

    private: static UserEmailEventNameData* ERROR_owner();
    public: static UserEmailEventNameData* ERROR;

    private: static UserEmailEventNameData* OUTOFMEMORY_owner();
    public: static UserEmailEventNameData* OUTOFMEMORY;

    private: static UserEmailEventNameData* ADMINGENERATINGSTATICPAGES_owner();
    public: static UserEmailEventNameData* ADMINGENERATINGSTATICPAGES;

    private: static UserEmailEventNameData* STOREERROROCCURRED_owner();
    public: static UserEmailEventNameData* STOREERROROCCURRED;

    private: static UserEmailEventNameData* STOREOUTOFMEMORY_owner();
    public: static UserEmailEventNameData* STOREOUTOFMEMORY;

    private: static UserEmailEventNameData* STORECREATED_owner();
    public: static UserEmailEventNameData* STORECREATED;

    private: static UserEmailEventNameData* STOREOPENED_owner();
    public: static UserEmailEventNameData* STOREOPENED;

    private: static UserEmailEventNameData* STORECLOSED_owner();
    public: static UserEmailEventNameData* STORECLOSED;

    private: static UserEmailEventNameData* STOREGENERATINGSTATICPAGES_owner();
    public: static UserEmailEventNameData* STOREGENERATINGSTATICPAGES;

    private: static UserEmailEventNameData* PRODUCTISOUT_owner();
    public: static UserEmailEventNameData* PRODUCTISOUT;

    private: static UserEmailEventNameData* PRODUCTISAVAILABLE_owner();
    public: static UserEmailEventNameData* PRODUCTISAVAILABLE;

    private: static UserEmailEventNameData* PRODUCTISOLD_owner();
    public: static UserEmailEventNameData* PRODUCTISOLD;

    private: static UserEmailEventNameData* PRODUCTISONSALE_owner();
    public: static UserEmailEventNameData* PRODUCTISONSALE;

    private: static UserEmailEventNameData* PRODUCTSALEISOVER_owner();
    public: static UserEmailEventNameData* PRODUCTSALEISOVER;

    private: static UserEmailEventNameData* ORDERPREPROCESSING_owner();
    public: static UserEmailEventNameData* ORDERPREPROCESSING;

    private: static UserEmailEventNameData* ORDERPROCESSING_owner();
    public: static UserEmailEventNameData* ORDERPROCESSING;

    private: static UserEmailEventNameData* ORDERCANCELLED_owner();
    public: static UserEmailEventNameData* ORDERCANCELLED;

    private: static UserEmailEventNameData* ORDERPARTIALLYSHIPPED_owner();
    public: static UserEmailEventNameData* ORDERPARTIALLYSHIPPED;

    private: static UserEmailEventNameData* ORDERSHIPPED_owner();
    public: static UserEmailEventNameData* ORDERSHIPPED;

    private: static UserEmailEventNameData* QUOTEREQUEST_owner();
    public: static UserEmailEventNameData* QUOTEREQUEST;

    private: static UserEmailEventNameData* NEWPASSWORD_owner();
    public: static UserEmailEventNameData* NEWPASSWORD;

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static UserEmailEventNameData* getInstance(std::string userEmailEventNameString);

    private: int32_t eventNameId= 0;

    private: std::string eventHandlerName;

public: UserEmailEventNameData(std::string eventHandlerName);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void initNextId();

    public: bool isEvent(std::string userEmailEventNameString);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_USEREMAILEVENTNAMEDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_USEREMAILEVENTNAMEDATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_USEREMAILEVENTNAMEDATA_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>)
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif

        #endif
    
