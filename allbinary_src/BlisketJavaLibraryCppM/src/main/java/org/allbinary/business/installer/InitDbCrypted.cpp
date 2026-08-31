
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
        



            #include "../../../../java/lang/Exception.h"
        
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
class InitDbCrypted: public AbDatabaseManagement {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: userDbInitInfo: UserDbInitInfo;

    private: inventoryDbInitInfo: InventoryDbInitInfo;

    private: historyDbInitInfo: HistoryDbInitInfo;

    private: staticpagesDbInitInfo: StaticPagesDbInitInfo;

    private: logDbInitInfo: LogDbInitInfo;

    private: const SQL_FILE: string = "initWeblisket.sql";

public constructor (DatabaseConnectionInfoInterface databaseConnectionInfoInterface){
            super(databaseConnectionInfoInterface as DbConnectionInfo);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public Boolean addUsers(){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, this.METHOD_ADD_USERS);
    
this.userDbInitInfo= new UserDbInitInfo();
    
this.inventoryDbInitInfo= new InventoryDbInitInfo();
    
this.historyDbInitInfo= new HistoryDbInitInfo();
    
this.staticpagesDbInitInfo= new StaticPagesDbInitInfo();
    
this.logDbInitInfo= new LogDbInitInfo();
    

    CUSTOMERDB: string = this.userDbInitInfo!.getName()!;;
    

    CUSTOMERDBUSER: string = this.userDbInitInfo!.getUserName()!;;
    

    CUSTOMERDBPASSWORD: string = this.userDbInitInfo!.getPassword()!;;
    

                        if(!this.addDbUser(CUSTOMERDB, CUSTOMERDBUSER, CUSTOMERDBPASSWORD))
                        
                                    {
                                    this.logUtil!.putF(this.UNABLE_TO_CREATE_USER +CUSTOMERDBUSER, this, this.METHOD_ADD_USERS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

    INVENTORYDB: string = this.inventoryDbInitInfo!.getName()!;;
    

    INVENTORYDBUSER: string = this.inventoryDbInitInfo!.getUserName()!;;
    

    INVENTORYDBPASSWORD: string = this.inventoryDbInitInfo!.getPassword()!;;
    

                        if(!this.addDbUser(INVENTORYDB, INVENTORYDBUSER, INVENTORYDBPASSWORD))
                        
                                    {
                                    this.logUtil!.putF(this.UNABLE_TO_CREATE_USER +INVENTORYDBUSER, this, this.METHOD_ADD_USERS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

    HISTORYDB: string = this.historyDbInitInfo!.getName()!;;
    

    HISTORYDBUSER: string = this.historyDbInitInfo!.getUserName()!;;
    

    HISTORYDBPASSWORD: string = this.historyDbInitInfo!.getPassword()!;;
    

                        if(!this.addDbUser(HISTORYDB, HISTORYDBUSER, HISTORYDBPASSWORD))
                        
                                    {
                                    this.logUtil!.putF(this.UNABLE_TO_CREATE_USER +HISTORYDBUSER, this, this.METHOD_ADD_USERS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

    STATICPAGESDB: string = this.staticpagesDbInitInfo!.getName()!;;
    

    STATICPAGESDBUSER: string = this.staticpagesDbInitInfo!.getUserName()!;;
    

    STATICPAGESDBPASSWORD: string = this.staticpagesDbInitInfo!.getPassword()!;;
    

                        if(!this.addDbUser(STATICPAGESDB, STATICPAGESDBUSER, STATICPAGESDBPASSWORD))
                        
                                    {
                                    this.logUtil!.putF(this.UNABLE_TO_CREATE_USER +STATICPAGESDBUSER, this, this.METHOD_ADD_USERS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

    LOGDB: string = this.logDbInitInfo!.getName()!;;
    

    LOGDBUSER: string = this.logDbInitInfo!.getUserName()!;;
    

    LOGDBPASSWORD: string = this.logDbInitInfo!.getPassword()!;;
    

                        if(!this.addDbUser(LOGDB, LOGDBUSER, LOGDBPASSWORD))
                        
                                    {
                                    this.logUtil!.putF(this.UNABLE_TO_CREATE_USER +LOGDBUSER, this, this.METHOD_ADD_USERS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                
this.logUtil!.putF(this.commonStrings!.END, this, this.METHOD_ADD_USERS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.METHOD_ADD_USERS, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    
}

}


    public Boolean addDatabases(){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, this.METHOD_ADD_DATABASES);
    
this.userDbInitInfo= new UserDbInitInfo();
    
this.inventoryDbInitInfo= new InventoryDbInitInfo();
    
this.historyDbInitInfo= new HistoryDbInitInfo();
    
this.staticpagesDbInitInfo= new StaticPagesDbInitInfo();
    
this.logDbInitInfo= new LogDbInitInfo();
    

    CUSTOMERDB: string = this.userDbInitInfo!.getName()!;;
    

                        if(!this.addDb(CUSTOMERDB))
                        
                                    {
                                    this.logUtil!.putF(this.UNABLE_TO_CREATE_DATABASE +CUSTOMERDB, this, this.METHOD_ADD_DATABASES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

    INVENTORYDB: string = this.inventoryDbInitInfo!.getName()!;;
    

                        if(!this.addDb(INVENTORYDB))
                        
                                    {
                                    this.logUtil!.putF(this.UNABLE_TO_CREATE_DATABASE +INVENTORYDB, this, this.METHOD_ADD_DATABASES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

    HISTORYDB: string = this.historyDbInitInfo!.getName()!;;
    

                        if(!this.addDb(HISTORYDB))
                        
                                    {
                                    this.logUtil!.putF(this.UNABLE_TO_CREATE_DATABASE +HISTORYDB, this, this.METHOD_ADD_DATABASES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

    STATICPAGESDB: string = this.staticpagesDbInitInfo!.getName()!;;
    

                        if(!this.addDb(STATICPAGESDB))
                        
                                    {
                                    this.logUtil!.putF(this.UNABLE_TO_CREATE_DATABASE +STATICPAGESDB, this, this.METHOD_ADD_DATABASES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

    LOGDB: string = this.logDbInitInfo!.getName()!;;
    

                        if(!this.addDb(LOGDB))
                        
                                    {
                                    this.logUtil!.putF(this.UNABLE_TO_CREATE_DATABASE +LOGDB, this, this.METHOD_ADD_DATABASES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

    file: AbFile = FileFactory.getInstance()!.getInstance(this.SQL_FILE)!;;
    
file.createNewFile();
    

    idOutData: AbDataOutputStream = DataOutputStreamFactory.getInstance()!.getInstanceForAbFile(file)!;;
    
idOutData!.writeBytes(this.sqlCommandLog!.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.METHOD_ADD_DATABASES, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    
}

}


    public Boolean addTables(){

        try {
            
    stringBuffer: StringMaker = new StringMaker();;
    
this.logUtil!.putF(this.commonStrings!.START, this, this.METHOD_ADD_TABLES);
    
stringBuffer!.append(UserEntityFactory.getInstance()!.createTable());
    
stringBuffer!.append(StoreFrontsEntityFactory.getInstance()!.getStoreFrontsEntityInstance()!.createTable());
    
stringBuffer!.append(BillingAddressesEntityFactory.getInstance()!.getInstance(this.stringUtil!.EMPTY_STRING)!.createTable());
    
stringBuffer!.append(ShippingAddressesEntityFactory.getInstance()!.getInstance(this.stringUtil!.EMPTY_STRING)!.createTable());
    
stringBuffer!.append(PaymentEntityFactory.getInstance()!.getPaymentEntityInstance()!.createTable());
    
stringBuffer!.append(QuoteRequestEntityFactory.getInstance()!.getQuoteRequestEntityInstance()!.createTable());
    
stringBuffer!.append(OrderHistoryEntityFactory.getInstance()!.createTable());
    
stringBuffer!.append(OrderItemsEntityFactory.getInstance()!.createTable());
    
stringBuffer!.append(TransactionEntityFactory.getInstance()!.getTransactionEntityInstance()!.createTable());
    
stringBuffer!.append(TransactionResultEntityFactory.getInstance()!.getTransactionResultEntityInstance()!.createTable());
    
stringBuffer!.append(PaymentGatewayEntityFactory.getInstance()!.createTable());
    
stringBuffer!.append(InventoryEntityFactory.getInstance()!.getInventoryEntityInstance()!.createTable());
    
stringBuffer!.append(new InitInfoEntity().createTable());
    
stringBuffer!.append(LogTableEntityFactory.getInstance()!.getLogTableEntityInstance()!.createTable());
    
stringBuffer!.append(StaticPagesEntityFactory.getInstance()!.getStaticPagesEntityInstance()!.createTable());
    
stringBuffer!.append(TransformInfoEntityBuilder.getInstance()!.createTable());
    
this.logUtil!.putF(ADD_TABLES_RESULTS_LABEL +stringBuffer!.toString(), this, this.METHOD_ADD_TABLES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.METHOD_ADD_TABLES, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}

}


};

            

