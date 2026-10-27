
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_USEREMAILEVENTNAMEDATA_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_USEREMAILEVENTNAMEDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"
        

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
        
HashMap<Object*, Object*>* UserEmailEventNameData::userNameEvenNameHashMap = StdUtil::getInstance()->createHashMap();

UserEmailEventNameData::UserEmailEventNameData(std::string eventHandlerName){
this->eventHandlerName= eventHandlerName;
    
this->initNextId();
    
UserEmailEventNameData::userNameEvenNameHashMap->put(this->eventHandlerName, this);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto UserEmailEventNameData::initNextId() -> void{
this->eventNameId= UserEmailEventNameData::nextId;
    
UserEmailEventNameData::nextId++;
    
}

auto UserEmailEventNameData::INSTALLER_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Installer")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::INSTALLER = UserEmailEventNameData::INSTALLER_owner();
auto UserEmailEventNameData::EXCEPTION_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Exception")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::EXCEPTION = UserEmailEventNameData::EXCEPTION_owner();
auto UserEmailEventNameData::LOGGEDEXCEPTION_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Logged Exception")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::LOGGEDEXCEPTION = UserEmailEventNameData::LOGGEDEXCEPTION_owner();
auto UserEmailEventNameData::ERROR_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Error")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::ERROR = UserEmailEventNameData::ERROR_owner();
auto UserEmailEventNameData::OUTOFMEMORY_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Out Of Memory Error")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::OUTOFMEMORY = UserEmailEventNameData::OUTOFMEMORY_owner();
auto UserEmailEventNameData::ADMINGENERATINGSTATICPAGES_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Admin Generating Static Pages")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::ADMINGENERATINGSTATICPAGES = UserEmailEventNameData::ADMINGENERATINGSTATICPAGES_owner();
auto UserEmailEventNameData::STOREERROROCCURRED_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Store Error Occurred")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::STOREERROROCCURRED = UserEmailEventNameData::STOREERROROCCURRED_owner();
auto UserEmailEventNameData::STOREOUTOFMEMORY_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Store Out Of Memory Error")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::STOREOUTOFMEMORY = UserEmailEventNameData::STOREOUTOFMEMORY_owner();
auto UserEmailEventNameData::STORECREATED_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Store Created")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::STORECREATED = UserEmailEventNameData::STORECREATED_owner();
auto UserEmailEventNameData::STOREOPENED_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Store Opened")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::STOREOPENED = UserEmailEventNameData::STOREOPENED_owner();
auto UserEmailEventNameData::STORECLOSED_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Store Closed")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::STORECLOSED = UserEmailEventNameData::STORECLOSED_owner();
auto UserEmailEventNameData::STOREGENERATINGSTATICPAGES_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Store Generating Static Pages")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::STOREGENERATINGSTATICPAGES = UserEmailEventNameData::STOREGENERATINGSTATICPAGES_owner();
auto UserEmailEventNameData::PRODUCTISOUT_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Product Is Out")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::PRODUCTISOUT = UserEmailEventNameData::PRODUCTISOUT_owner();
auto UserEmailEventNameData::PRODUCTISAVAILABLE_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Product Is Available")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::PRODUCTISAVAILABLE = UserEmailEventNameData::PRODUCTISAVAILABLE_owner();
auto UserEmailEventNameData::PRODUCTISOLD_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Product Is Old")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::PRODUCTISOLD = UserEmailEventNameData::PRODUCTISOLD_owner();
auto UserEmailEventNameData::PRODUCTISONSALE_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Product Is On Sale")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::PRODUCTISONSALE = UserEmailEventNameData::PRODUCTISONSALE_owner();
auto UserEmailEventNameData::PRODUCTSALEISOVER_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Product Sale Is Over")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::PRODUCTSALEISOVER = UserEmailEventNameData::PRODUCTSALEISOVER_owner();
auto UserEmailEventNameData::ORDERPREPROCESSING_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData(OrderHistoryData::PREPROCESSING)); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::ORDERPREPROCESSING = UserEmailEventNameData::ORDERPREPROCESSING_owner();
auto UserEmailEventNameData::ORDERPROCESSING_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData(OrderHistoryData::PROCESSING)); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::ORDERPROCESSING = UserEmailEventNameData::ORDERPROCESSING_owner();
auto UserEmailEventNameData::ORDERCANCELLED_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData(OrderHistoryData::CANCELLED)); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::ORDERCANCELLED = UserEmailEventNameData::ORDERCANCELLED_owner();
auto UserEmailEventNameData::ORDERPARTIALLYSHIPPED_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData(OrderHistoryData::PARTIALLYSHIPPED)); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::ORDERPARTIALLYSHIPPED = UserEmailEventNameData::ORDERPARTIALLYSHIPPED_owner();
auto UserEmailEventNameData::ORDERSHIPPED_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData(OrderHistoryData::SHIPPED)); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::ORDERSHIPPED = UserEmailEventNameData::ORDERSHIPPED_owner();
auto UserEmailEventNameData::QUOTEREQUEST_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("Quote Request")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::QUOTEREQUEST = UserEmailEventNameData::QUOTEREQUEST_owner();
auto UserEmailEventNameData::NEWPASSWORD_owner() -> UserEmailEventNameData* { static std::unique_ptr<UserEmailEventNameData> value(new UserEmailEventNameData("New Password")); return value.get(); }
UserEmailEventNameData* UserEmailEventNameData::NEWPASSWORD = UserEmailEventNameData::NEWPASSWORD_owner();

    auto UserEmailEventNameData::isEvent(std::string userEmailEventNameString) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserEmailEventNameData::userNameEvenNameHashMap->containsKey(userEmailEventNameString);;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto UserEmailEventNameData::getInstance(std::string userEmailEventNameString) -> UserEmailEventNameData*{

    UserEmailEventNameData* userEmailEventNameData = dynamic_cast<UserEmailEventNameData*>(UserEmailEventNameData::userNameEvenNameHashMap->get(userEmailEventNameString));;
    

                        if(userEmailEventNameData == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception();
                    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return userEmailEventNameData;
    

                        }
                            
}


    auto UserEmailEventNameData::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->eventHandlerName;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_USEREMAILEVENTNAMEDATA_CPP
