
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INSTALLER_INITDBCRYPTED_CPP
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_INITDBCRYPTED_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/installer/InitDbCrypted.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <org/allbinary/business/init/InitInfoEntity.h>

      
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/business/init/db/HistoryDbInitInfo.h>

      
#include <org/allbinary/business/init/db/InventoryDbInitInfo.h>

      
#include <org/allbinary/business/init/db/LogDbInitInfo.h>

      
#include <org/allbinary/business/init/db/StaticPagesDbInitInfo.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>

      
#include <org/allbinary/data/tables/log/LogTableEntityFactory.h>

      
#include <org/allbinary/data/tables/staticpages/StaticPagesEntityFactory.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
#include <org/allbinary/data/tables/user/address/billing/BillingAddressesEntityFactory.h>

      
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/PaymentEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionResultEntityFactory.h>

      
#include <org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbDatabaseManagement.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Warning you must have sql root access

InitDbCrypted::InitDbCrypted(DatabaseConnectionInfoInterface* databaseConnectionInfoInterface) : AbDatabaseManagement(dynamic_cast<DbConnectionInfo*>(databaseConnectionInfoInterface)), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto InitDbCrypted::addUsers() -> bool{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->METHOD_ADD_USERS);
    
this->userDbInitInfo= new UserDbInitInfo();
    
this->inventoryDbInitInfo= new InventoryDbInitInfo();
    
this->historyDbInitInfo= new HistoryDbInitInfo();
    
this->staticpagesDbInitInfo= new StaticPagesDbInitInfo();
    
this->logDbInitInfo= new LogDbInitInfo();
    

    std::string CUSTOMERDB = this->userDbInitInfo->getName();;
    

    std::string CUSTOMERDBUSER = this->userDbInitInfo->getUserName();;
    

    std::string CUSTOMERDBPASSWORD = this->userDbInitInfo->getPassword();;
    

                        if(!this->addDbUser(CUSTOMERDB, CUSTOMERDBUSER, CUSTOMERDBPASSWORD))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->UNABLE_TO_CREATE_USER) +JavaString::valueOf(CUSTOMERDBUSER), this, this->METHOD_ADD_USERS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    std::string INVENTORYDB = this->inventoryDbInitInfo->getName();;
    

    std::string INVENTORYDBUSER = this->inventoryDbInitInfo->getUserName();;
    

    std::string INVENTORYDBPASSWORD = this->inventoryDbInitInfo->getPassword();;
    

                        if(!this->addDbUser(INVENTORYDB, INVENTORYDBUSER, INVENTORYDBPASSWORD))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->UNABLE_TO_CREATE_USER) +JavaString::valueOf(INVENTORYDBUSER), this, this->METHOD_ADD_USERS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    std::string HISTORYDB = this->historyDbInitInfo->getName();;
    

    std::string HISTORYDBUSER = this->historyDbInitInfo->getUserName();;
    

    std::string HISTORYDBPASSWORD = this->historyDbInitInfo->getPassword();;
    

                        if(!this->addDbUser(HISTORYDB, HISTORYDBUSER, HISTORYDBPASSWORD))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->UNABLE_TO_CREATE_USER) +JavaString::valueOf(HISTORYDBUSER), this, this->METHOD_ADD_USERS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    std::string STATICPAGESDB = this->staticpagesDbInitInfo->getName();;
    

    std::string STATICPAGESDBUSER = this->staticpagesDbInitInfo->getUserName();;
    

    std::string STATICPAGESDBPASSWORD = this->staticpagesDbInitInfo->getPassword();;
    

                        if(!this->addDbUser(STATICPAGESDB, STATICPAGESDBUSER, STATICPAGESDBPASSWORD))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->UNABLE_TO_CREATE_USER) +JavaString::valueOf(STATICPAGESDBUSER), this, this->METHOD_ADD_USERS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    std::string LOGDB = this->logDbInitInfo->getName();;
    

    std::string LOGDBUSER = this->logDbInitInfo->getUserName();;
    

    std::string LOGDBPASSWORD = this->logDbInitInfo->getPassword();;
    

                        if(!this->addDbUser(LOGDB, LOGDBUSER, LOGDBPASSWORD))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->UNABLE_TO_CREATE_USER) +JavaString::valueOf(LOGDBUSER), this, this->METHOD_ADD_USERS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                
this->logUtil->putF(this->commonStrings->END, this, this->METHOD_ADD_USERS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->METHOD_ADD_USERS, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    
}

}


    auto InitDbCrypted::addDatabases() -> bool{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->METHOD_ADD_DATABASES);
    
this->userDbInitInfo= new UserDbInitInfo();
    
this->inventoryDbInitInfo= new InventoryDbInitInfo();
    
this->historyDbInitInfo= new HistoryDbInitInfo();
    
this->staticpagesDbInitInfo= new StaticPagesDbInitInfo();
    
this->logDbInitInfo= new LogDbInitInfo();
    

    std::string CUSTOMERDB = this->userDbInitInfo->getName();;
    

                        if(!this->addDb(CUSTOMERDB))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->UNABLE_TO_CREATE_DATABASE) +JavaString::valueOf(CUSTOMERDB), this, this->METHOD_ADD_DATABASES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    std::string INVENTORYDB = this->inventoryDbInitInfo->getName();;
    

                        if(!this->addDb(INVENTORYDB))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->UNABLE_TO_CREATE_DATABASE) +JavaString::valueOf(INVENTORYDB), this, this->METHOD_ADD_DATABASES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    std::string HISTORYDB = this->historyDbInitInfo->getName();;
    

                        if(!this->addDb(HISTORYDB))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->UNABLE_TO_CREATE_DATABASE) +JavaString::valueOf(HISTORYDB), this, this->METHOD_ADD_DATABASES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    std::string STATICPAGESDB = this->staticpagesDbInitInfo->getName();;
    

                        if(!this->addDb(STATICPAGESDB))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->UNABLE_TO_CREATE_DATABASE) +JavaString::valueOf(STATICPAGESDB), this, this->METHOD_ADD_DATABASES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    std::string LOGDB = this->logDbInitInfo->getName();;
    

                        if(!this->addDb(LOGDB))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->UNABLE_TO_CREATE_DATABASE) +JavaString::valueOf(LOGDB), this, this->METHOD_ADD_DATABASES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    AbFile* file = FileFactory::getInstance()->getInstance(this->SQL_FILE);;
    
file->createNewFile();
    

    AbDataOutputStream* idOutData = DataOutputStreamFactory::getInstance()->getInstanceForAbFile(file);;
    
idOutData->writeBytes(this->sqlCommandLog->toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->METHOD_ADD_DATABASES, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    
}

}


    auto InitDbCrypted::addTables() -> bool{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    
this->logUtil->putF(this->commonStrings->START, this, this->METHOD_ADD_TABLES);
    
stringBuffer->append(UserEntityFactory::getInstance()->createTable());
    
stringBuffer->append(StoreFrontsEntityFactory::getInstance()->getStoreFrontsEntityInstance()->createTable());
    
stringBuffer->append(BillingAddressesEntityFactory::getInstance()->getInstance(this->stringUtil->EMPTY_STRING)->createTable());
    
stringBuffer->append(ShippingAddressesEntityFactory::getInstance()->getInstance(this->stringUtil->EMPTY_STRING)->createTable());
    
stringBuffer->append(PaymentEntityFactory::getInstance()->getPaymentEntityInstance()->createTable());
    
stringBuffer->append(QuoteRequestEntityFactory::getInstance()->getQuoteRequestEntityInstance()->createTable());
    
stringBuffer->append(OrderHistoryEntityFactory::getInstance()->createTable());
    
stringBuffer->append(OrderItemsEntityFactory::getInstance()->createTable());
    
stringBuffer->append(TransactionEntityFactory::getInstance()->getTransactionEntityInstance()->createTable());
    
stringBuffer->append(TransactionResultEntityFactory::getInstance()->getTransactionResultEntityInstance()->createTable());
    
stringBuffer->append(PaymentGatewayEntityFactory::getInstance()->createTable());
    
stringBuffer->append(InventoryEntityFactory::getInstance()->getInventoryEntityInstance()->createTable());
    
stringBuffer->append((new InitInfoEntity())->createTable());
    
stringBuffer->append(LogTableEntityFactory::getInstance()->getLogTableEntityInstance()->createTable());
    
stringBuffer->append(StaticPagesEntityFactory::getInstance()->getStaticPagesEntityInstance()->createTable());
    
stringBuffer->append(TransformInfoEntityBuilder::getInstance()->createTable());
    
this->logUtil->putF(ADD_TABLES_RESULTS_LABEL +stringBuffer->toString(), this, this->METHOD_ADD_TABLES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->METHOD_ADD_TABLES, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}




        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_INITDBCRYPTED_CPP
