
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
        



            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/installer/Portion.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/quoterequest/QuoteRequest.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
#include <org/allbinary/data/tables/user/quoterequest/QuoteRequestEntity.h>

      
#include <org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/UserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlTableUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicTable.h"

class QuoteHelper: public BasicTable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const abeClientInformation: AbeClientInformationInterface = ServiceClientInformationInterfaceFactory.getInstance()!;

    private: const weblisketSession: WeblisketSession;

    private: const storeFrontInterface: StoreFrontInterface;

    private: const portion: Portion;

public constructor (HashMap<any, any> hashMap, PageContext pageContext){

            super();
        
    storeName: string = hashMap!.get(StoreFrontData.getInstance()!.NAME) as string;;
    

                        if(storeName != 
                                    null
                                )
                        
                                    {
                                    this.storeFrontInterface= StoreFrontFactory.getInstance(storeName);
    

                                    }
                                
                        else {
                            this.storeFrontInterface= new StoreFront();
    

                        }
                            
this.weblisketSession= new WeblisketSession(hashMap, pageContext);
    
this.portion= new Portion(hashMap);
    
}


                //@Throws(Exception.constructor)
            
    emailUser(QuoteRequest quoteRequest){

    user: UserInterface = UserEntityFactory.getInstance()!.getUser(quoteRequest!.getUserName())!;;
    

    userEmailSubject: string = "Quote Request Receipt";;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("This is just a verification email. ");
    
stringBuffer!.append("We usually respond to quote request within 24 hours.");
    
stringBuffer!.append("\n\nThank You For Your Business.");
    

    userEmailTextBody: string = stringBuffer!.toString()!;;
    

    basicEmailInfo: BasicEmailInfo = new StoreEmailInfo(this.storeFrontInterface, userEmailSubject, userEmailTextBody) as BasicEmailInfo;;
    

    emailInfo: EmailInfo = new EmailInfo(basicEmailInfo);;
    

    userEmailEventHandler: UserEmailEventHandler = UserEmailEventHandlerSingletons.getInstance()!.getInstance(this.abeClientInformation, UserEmailEventNameData.QUOTEREQUEST, user)!;;
    
userEmailEventHandler!.receiveEmailInfo(UserEmailEventNameData.QUOTEREQUEST, emailInfo);
    
}


                //@Throws(Exception.constructor)
            
    emailAdmins(QuoteRequest quoteRequest){

    adminEmailSubject: string = "Quote Request";;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("\nUserName: ");
    
stringBuffer!.append(quoteRequest!.getUserName());
    
stringBuffer!.append("\nProject Info: \n");
    
stringBuffer!.append(quoteRequest!.getProjectInfo());
    
stringBuffer!.append("\nUser Comments: \n");
    
stringBuffer!.append(quoteRequest!.getUserComments());
    
stringBuffer!.append("\nBudget: \n");
    
stringBuffer!.append(quoteRequest!.getBudget());
    
stringBuffer!.append("\nTime Frame: \n");
    
stringBuffer!.append(quoteRequest!.getTimeFrame());
    
stringBuffer!.append("\nComments: \n");
    
stringBuffer!.append(quoteRequest!.getComments());
    

    adminEmailTextBody: string = stringBuffer!.toString()!;;
    

    basicEmailInfo: BasicEmailInfo = new StoreEmailInfo(this.storeFrontInterface, adminEmailSubject, adminEmailTextBody) as BasicEmailInfo;;
    

    emailInfo: EmailInfo = new EmailInfo(basicEmailInfo);;
    

    storeAdminUserEmailEventHandler: UserEmailEventHandler = AdminUserEmailEventHandlerSingletons.getInstance()!.getInstance(this.abeClientInformation, UserEmailEventNameData.QUOTEREQUEST)!;;
    

    adminUserEmailEventHandler: UserEmailEventHandler = StoreAdminUserEmailEventHandlerSingletons.getInstance()!.getInstance(UserEmailEventNameData.QUOTEREQUEST, this.abeClientInformation, this.storeFrontInterface)!;;
    
storeAdminUserEmailEventHandler!.receiveEmailInfo(UserEmailEventNameData.QUOTEREQUEST, emailInfo);
    
adminUserEmailEventHandler!.receiveEmailInfo(UserEmailEventNameData.QUOTEREQUEST, emailInfo);
    
}


                //@Throws(Exception.constructor)
            
    public string email(){

        try {
            
    quoteRequestEntity: QuoteRequestEntity = QuoteRequestEntityFactory.getInstance()!.getQuoteRequestEntityInstance()!;;
    

    userName: string = this.weblisketSession!.getUserName()!;;
    

    vector: Vector = quoteRequestEntity!.getIds(userName)!;;
    

    id: int32_t = 0;;
    

    size: int32_t = vector.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    nextId: int32_t = (get as Integer).intValue()!;;
    

                        if(id < nextId)
                        
                                    {
                                    id= nextId;
    

                                    }
                                
}


    quoteRequest: QuoteRequest = quoteRequestEntity!.get(userName, id)!;;
    

                        if(quoteRequest != 
                                    null
                                )
                        
                                    {
                                    this.emailUser(quoteRequest);
    
this.emailAdmins(quoteRequest);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Thank You For Your Business.<p/>";
    

                                    }
                                
                        else {
                            


                            throw new Exception("No Quote Request");
                    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "email", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Thank You For Your Business.<p>";
    
}

}


    public string drop(){

        try {
            
    success: string = QuoteRequestEntityFactory.getInstance()!.getQuoteRequestEntityInstance()!.dropTable()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF(success, this, this.commonStrings!.DROP);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to drop QuoteRequest table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.DROP, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public string create(){

        try {
            
    success: string = QuoteRequestEntityFactory.getInstance()!.getQuoteRequestEntityInstance()!.createTable()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF(success, this, "create()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to create new QuoteRequest table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "create()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public string restore(){

        try {
            
    success: string = "Restore Successful";;
    

    result: string = AbSqlTableUtil.getInstance()!.restoreTable(QuoteRequestEntityFactory.getInstance()!.getQuoteRequestEntityInstance(), portion)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF(success, this, "restore()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to restore backup";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "restore()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public string backup(){

        try {
            
    success: string = "Restore Successful";;
    

    result: string = AbSqlTableUtil.getInstance()!.backupTable(QuoteRequestEntityFactory.getInstance()!.getQuoteRequestEntityInstance())!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF(success, this, "backup()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to make backup";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "backup()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


};

            

