
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UserEmailEventNameData
            : public Object
         {

    private: static HashMap<any, any> userNameEvenNameHashMap = HashMap<any, any>();

    private: static int32_t nextId = 0;

    public: static const UserEmailEventNameData INSTALLER = UserEmailEventNameData("Installer");

    public: static const UserEmailEventNameData EXCEPTION = UserEmailEventNameData("Exception");

    public: static const UserEmailEventNameData LOGGEDEXCEPTION = UserEmailEventNameData("Logged Exception");

    public: static const UserEmailEventNameData ERROR = UserEmailEventNameData("Error");

    public: static const UserEmailEventNameData OUTOFMEMORY = UserEmailEventNameData("Out Of Memory Error");

    public: static const UserEmailEventNameData ADMINGENERATINGSTATICPAGES = UserEmailEventNameData("Admin Generating Static Pages");

    public: static const UserEmailEventNameData STOREERROROCCURRED = UserEmailEventNameData("Store Error Occurred");

    public: static const UserEmailEventNameData STOREOUTOFMEMORY = UserEmailEventNameData("Store Out Of Memory Error");

    public: static const UserEmailEventNameData STORECREATED = UserEmailEventNameData("Store Created");

    public: static const UserEmailEventNameData STOREOPENED = UserEmailEventNameData("Store Opened");

    public: static const UserEmailEventNameData STORECLOSED = UserEmailEventNameData("Store Closed");

    public: static const UserEmailEventNameData STOREGENERATINGSTATICPAGES = UserEmailEventNameData("Store Generating Static Pages");

    public: static const UserEmailEventNameData PRODUCTISOUT = UserEmailEventNameData("Product Is Out");

    public: static const UserEmailEventNameData PRODUCTISAVAILABLE = UserEmailEventNameData("Product Is Available");

    public: static const UserEmailEventNameData PRODUCTISOLD = UserEmailEventNameData("Product Is Old");

    public: static const UserEmailEventNameData PRODUCTISONSALE = UserEmailEventNameData("Product Is On Sale");

    public: static const UserEmailEventNameData PRODUCTSALEISOVER = UserEmailEventNameData("Product Sale Is Over");

    public: static const UserEmailEventNameData ORDERPREPROCESSING = UserEmailEventNameData(OrderHistoryData::PREPROCESSING);

    public: static const UserEmailEventNameData ORDERPROCESSING = UserEmailEventNameData(OrderHistoryData::PROCESSING);

    public: static const UserEmailEventNameData ORDERCANCELLED = UserEmailEventNameData(OrderHistoryData::CANCELLED);

    public: static const UserEmailEventNameData ORDERPARTIALLYSHIPPED = UserEmailEventNameData(OrderHistoryData::PARTIALLYSHIPPED);

    public: static const UserEmailEventNameData ORDERSHIPPED = UserEmailEventNameData(OrderHistoryData::SHIPPED);

    public: static const UserEmailEventNameData QUOTEREQUEST = UserEmailEventNameData("Quote Request");

    public: static const UserEmailEventNameData NEWPASSWORD = UserEmailEventNameData("New Password");

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static UserEmailEventNameData getInstance(std::string userEmailEventNameString);

    private: int32_t eventNameId= 0;

    private: std::string eventHandlerName;

public: UserEmailEventNameData(std::string eventHandlerName);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void initNextId();

    public: bool isEvent(std::string userEmailEventNameString);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_USEREMAILEVENTNAMEDATA_H
