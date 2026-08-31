
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
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/installer/Portion.h>

      
#include <org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModifyTable.h"

class StoreFrontsRequestHelper: public ModifyTable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const abeClientInformation: AbeClientInformationInterface = ServiceClientInformationInterfaceFactory.getInstance()!;

    private: const pageContext: PageContext;

    private: const request: HttpServletRequest;

    private: const weblisketSession: WeblisketSession;

    private: storeName: string;

    private: modifyingStoreFrontInterface: StoreFrontInterface;

    private: const portion: Portion;

public constructor (HashMap<any, any> hashMap, PageContext pageContext){

            super();
        this.pageContext= pageContext;
    
this.request= pageContext!.getRequest() as HttpServletRequest;
    
this.weblisketSession= new WeblisketSession(hashMap, pageContext);
    
this.portion= new Portion(hashMap);
    
this.getFormData();
    
}


                //@Throws(Exception.constructor)
            
    getFormData(){
this.storeName= this.weblisketSession!.getStoreName();
    
this.modifyingStoreFrontInterface= new StoreFront(this.request) as StoreFrontInterface;
    
}


    public string update(){

        try {
            
    success: string = "Updated Successfully";;
    

    hashMapData: HashMap<any, any> = this.modifyingStoreFrontInterface!.toHashMap()!;;
    
StoreFrontsEntityFactory.getInstance()!.getStoreFrontsEntityInstance()!.update(hashMapData);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF(success, this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to update storefronts table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "update()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(Exception.constructor)
            
    public sendStoreCreatedEmails(){

    storeManagerEmailSubject: string = "Store Manager Nofification For Store: " +this.modifyingStoreFrontInterface!.getName();;
    

    adminEmailSubject: string = "Admin Notification For Store: " +this.modifyingStoreFrontInterface!.getName();;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Store Created: ");
    
stringBuffer!.append(this.modifyingStoreFrontInterface!.getName());
    
stringBuffer!.append("\n\n");
    
stringBuffer!.append("Click here for the Admin Interface:\n");
    
stringBuffer!.append(this.modifyingStoreFrontInterface!.getCurrentHomeHostName());
    
stringBuffer!.append("/admin/login.jsp\n\n");
    
stringBuffer!.append("Goto Your Store:\n");
    
stringBuffer!.append(this.modifyingStoreFrontInterface!.getCurrentHomeHostName());
    
stringBuffer!.append(this.modifyingStoreFrontInterface!.getName());
    
stringBuffer!.append("/index.jsp");
    
stringBuffer!.append("\n\n");
    
stringBuffer!.append("UserName: ");
    
stringBuffer!.append(this.weblisketSession!.getUserName());
    

    adminEmailTextBody: string = stringBuffer!.toString()!;;
    

    adminBasicEmailInfo: BasicEmailInfo = new AdminEmailInfo(adminEmailSubject, adminEmailTextBody) as BasicEmailInfo;;
    

    storeAdminBasicEmailInfo: BasicEmailInfo = new StoreEmailInfo(this.modifyingStoreFrontInterface, storeManagerEmailSubject, adminEmailTextBody) as BasicEmailInfo;;
    

    storeAdminEmailInfo: EmailInfo = new EmailInfo(storeAdminBasicEmailInfo);;
    

    adminEmailInfo: EmailInfo = new EmailInfo(adminBasicEmailInfo);;
    

    adminUserEmailEventHandler: UserEmailEventHandler = AdminUserEmailEventHandlerSingletons.getInstance()!.getInstance(this.abeClientInformation, UserEmailEventNameData.STORECREATED)!;;
    

    storeAdminUserEmailEventHandler: UserEmailEventHandler = StoreAdminUserEmailEventHandlerSingletons.getInstance()!.getInstance(UserEmailEventNameData.STORECREATED, this.abeClientInformation, this.modifyingStoreFrontInterface)!;;
    
storeAdminUserEmailEventHandler!.receiveEmailInfo(UserEmailEventNameData.STORECREATED, storeAdminEmailInfo);
    
adminUserEmailEventHandler!.receiveEmailInfo(UserEmailEventNameData.STORECREATED, adminEmailInfo);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string install(){

        try {
            
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Intall StoreFront Successfully: ");
    
stringBuffer!.appendint(this.portion.getCurrent()!.intValue());
    
stringBuffer!.append(" of ");
    
stringBuffer!.appendint(this.portion.getTotal()!.intValue());
    

    success: string = stringBuffer!.toString()!;;
    
this.modifyingStoreFrontInterface!.install(this.portion.getCurrent()!.intValue(), this.portion.getTotal()!.intValue());
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF(success, this, "install()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to Install storefront";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "install()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string insert(){

        try {
            
    success: string = "Added Successfully";;
    

    values: Vector = this.modifyingStoreFrontInterface!.toVector()!;;
    
StoreFrontsEntityFactory.getInstance()!.getStoreFrontsEntityInstance()!.insert(values);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF(success, this, "insert()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to add storefront";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "insert()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public string delete(){

        try {
            
    success: string = "Delete Successfully";;
    
StoreFrontsEntityFactory.getInstance()!.getStoreFrontsEntityInstance()!.delete(this.storeName);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGS))
                        
                                    {
                                    this.logUtil!.putF(success, this, "delete()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    error: string = "Failed to delete storefronts table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "delete()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


};

            

