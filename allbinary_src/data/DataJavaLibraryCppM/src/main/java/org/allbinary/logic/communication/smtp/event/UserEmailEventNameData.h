
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
        

    private: static userNameEvenNameHashMap: HashMap<any, any> = new HashMap<any, any>();

    private: static nextId: int32_t = 0;

    public static const INSTALLER: UserEmailEventNameData = new UserEmailEventNameData("Installer");

    public static const EXCEPTION: UserEmailEventNameData = new UserEmailEventNameData("Exception");

    public static const LOGGEDEXCEPTION: UserEmailEventNameData = new UserEmailEventNameData("Logged Exception");

    public static const ERROR: UserEmailEventNameData = new UserEmailEventNameData("Error");

    public static const OUTOFMEMORY: UserEmailEventNameData = new UserEmailEventNameData("Out Of Memory Error");

    public static const ADMINGENERATINGSTATICPAGES: UserEmailEventNameData = new UserEmailEventNameData("Admin Generating Static Pages");

    public static const STOREERROROCCURRED: UserEmailEventNameData = new UserEmailEventNameData("Store Error Occurred");

    public static const STOREOUTOFMEMORY: UserEmailEventNameData = new UserEmailEventNameData("Store Out Of Memory Error");

    public static const STORECREATED: UserEmailEventNameData = new UserEmailEventNameData("Store Created");

    public static const STOREOPENED: UserEmailEventNameData = new UserEmailEventNameData("Store Opened");

    public static const STORECLOSED: UserEmailEventNameData = new UserEmailEventNameData("Store Closed");

    public static const STOREGENERATINGSTATICPAGES: UserEmailEventNameData = new UserEmailEventNameData("Store Generating Static Pages");

    public static const PRODUCTISOUT: UserEmailEventNameData = new UserEmailEventNameData("Product Is Out");

    public static const PRODUCTISAVAILABLE: UserEmailEventNameData = new UserEmailEventNameData("Product Is Available");

    public static const PRODUCTISOLD: UserEmailEventNameData = new UserEmailEventNameData("Product Is Old");

    public static const PRODUCTISONSALE: UserEmailEventNameData = new UserEmailEventNameData("Product Is On Sale");

    public static const PRODUCTSALEISOVER: UserEmailEventNameData = new UserEmailEventNameData("Product Sale Is Over");

    public static const ORDERPREPROCESSING: UserEmailEventNameData = new UserEmailEventNameData(OrderHistoryData.PREPROCESSING);

    public static const ORDERPROCESSING: UserEmailEventNameData = new UserEmailEventNameData(OrderHistoryData.PROCESSING);

    public static const ORDERCANCELLED: UserEmailEventNameData = new UserEmailEventNameData(OrderHistoryData.CANCELLED);

    public static const ORDERPARTIALLYSHIPPED: UserEmailEventNameData = new UserEmailEventNameData(OrderHistoryData.PARTIALLYSHIPPED);

    public static const ORDERSHIPPED: UserEmailEventNameData = new UserEmailEventNameData(OrderHistoryData.SHIPPED);

    public static const QUOTEREQUEST: UserEmailEventNameData = new UserEmailEventNameData("Quote Request");

    public static const NEWPASSWORD: UserEmailEventNameData = new UserEmailEventNameData("New Password");

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static UserEmailEventNameData getInstance(string userEmailEventNameString);

    private: eventNameId: int32_t= 0;

    private: eventHandlerName: string;

public constructor (string eventHandlerName);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    initNextId();

    public bool isEvent(string userEmailEventNameString);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_USEREMAILEVENTNAMEDATA_H
