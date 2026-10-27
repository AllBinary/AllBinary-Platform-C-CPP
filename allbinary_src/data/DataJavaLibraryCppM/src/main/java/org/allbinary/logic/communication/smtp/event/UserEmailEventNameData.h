
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UserEmailEventNameData
            : public Object
         {

    private: static inline HashMap<Object*, Object*>* userNameEvenNameHashMap = StdUtil::getInstance()->createHashMap();

    private: static inline int32_t nextId = 0;

    public: static UserEmailEventNameData* INSTALLER() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Installer")); return value.get(); }

    public: static UserEmailEventNameData* EXCEPTION() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Exception")); return value.get(); }

    public: static UserEmailEventNameData* LOGGEDEXCEPTION() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Logged Exception")); return value.get(); }

    public: static UserEmailEventNameData* ERROR() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Error")); return value.get(); }

    public: static UserEmailEventNameData* OUTOFMEMORY() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Out Of Memory Error")); return value.get(); }

    public: static UserEmailEventNameData* ADMINGENERATINGSTATICPAGES() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Admin Generating Static Pages")); return value.get(); }

    public: static UserEmailEventNameData* STOREERROROCCURRED() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Store Error Occurred")); return value.get(); }

    public: static UserEmailEventNameData* STOREOUTOFMEMORY() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Store Out Of Memory Error")); return value.get(); }

    public: static UserEmailEventNameData* STORECREATED() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Store Created")); return value.get(); }

    public: static UserEmailEventNameData* STOREOPENED() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Store Opened")); return value.get(); }

    public: static UserEmailEventNameData* STORECLOSED() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Store Closed")); return value.get(); }

    public: static UserEmailEventNameData* STOREGENERATINGSTATICPAGES() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Store Generating Static Pages")); return value.get(); }

    public: static UserEmailEventNameData* PRODUCTISOUT() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Product Is Out")); return value.get(); }

    public: static UserEmailEventNameData* PRODUCTISAVAILABLE() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Product Is Available")); return value.get(); }

    public: static UserEmailEventNameData* PRODUCTISOLD() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Product Is Old")); return value.get(); }

    public: static UserEmailEventNameData* PRODUCTISONSALE() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Product Is On Sale")); return value.get(); }

    public: static UserEmailEventNameData* PRODUCTSALEISOVER() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Product Sale Is Over")); return value.get(); }

    public: static UserEmailEventNameData* ORDERPREPROCESSING() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData(OrderHistoryData::PREPROCESSING)); return value.get(); }

    public: static UserEmailEventNameData* ORDERPROCESSING() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData(OrderHistoryData::PROCESSING)); return value.get(); }

    public: static UserEmailEventNameData* ORDERCANCELLED() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData(OrderHistoryData::CANCELLED)); return value.get(); }

    public: static UserEmailEventNameData* ORDERPARTIALLYSHIPPED() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData(OrderHistoryData::PARTIALLYSHIPPED)); return value.get(); }

    public: static UserEmailEventNameData* ORDERSHIPPED() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData(OrderHistoryData::SHIPPED)); return value.get(); }

    public: static UserEmailEventNameData* QUOTEREQUEST() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Quote Request")); return value.get(); }

    public: static UserEmailEventNameData* NEWPASSWORD() { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("New Password")); return value.get(); }

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
