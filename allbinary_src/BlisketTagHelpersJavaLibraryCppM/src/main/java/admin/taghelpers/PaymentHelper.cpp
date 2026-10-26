
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
        



            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/installer/Portion.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentFactory.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentInterface.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/PaymentEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/PaymentEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlTableUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Table.h"

class PaymentHelper: public Table {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: WeblisketSession weblisketSession;

    private: HttpServletRequest request;

    private: std::string value;

    private: Portion portion;

public: PaymentHelper(HashMap<Object*, Object*> hashMap, PageContext pageContext){
this->request= pageContext.getRequest();
    
this->weblisketSession= WeblisketSession(hashMap, pageContext);
    
this->portion= Portion(hashMap);
    
this->getFormData();
    
}


    private: void getFormData(){
this->value= this->request.getParameter("VALUE");
    
}


    public: std::string insert(){

        try {
            
    std::string success = "Successfully Added Payment";;
    

    PaymentEntity paymentEntity = PaymentEntityFactory::getInstance().getPaymentEntityInstance();;
    

    PaymentInterface paymentInterface = PaymentFactory::getInstance(this->request);;
    
paymentEntity.add(this->weblisketSession.getUserName(), paymentInterface);
    
paymentEntity.setDefault(this->weblisketSession.getUserName(), Integer(paymentEntity.getLastId(this->weblisketSession.getUserName())));
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "addPayment()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to add Payment";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "addPayment()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string select(){

        try {
            
    std::string success = "Successfully Selected Payment";;
    

    PaymentEntity paymentEntity = PaymentEntityFactory::getInstance().getPaymentEntityInstance();;
    
paymentEntity.setDefault(this->weblisketSession.getUserName(), Integer(this->value));
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "selectPayment()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to select Payment";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "selectPayment()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string delete_(){

        try {
            
    std::string success = "Successfully Removed Payment";;
    

    PaymentEntity paymentEntity = PaymentEntityFactory::getInstance().getPaymentEntityInstance();;
    
paymentEntity.remove(this->weblisketSession.getUserName(), Integer(this->value));
    

    PaymentInterface paymentInterface = paymentEntity.getDefault(this->weblisketSession.getUserName());;
    

                        if(paymentInterface == 
                                    nullptr
                                )
                        
                                    {
                                    paymentEntity.setDefault(this->weblisketSession.getUserName(), Integer(paymentEntity.getLastId(this->weblisketSession.getUserName())));
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "removePayment()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to remove Payment";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "removePayment()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string drop(){

        try {
            
    PaymentEntity paymentEntity = PaymentEntityFactory::getInstance().getPaymentEntityInstance();;
    

    std::string success = paymentEntity.dropTable();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, this->commonStrings.DROP);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to drop Admin table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.DROP, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string create(){

        try {
            
    PaymentEntity paymentEntity = PaymentEntityFactory::getInstance().getPaymentEntityInstance();;
    

    std::string success = paymentEntity.createTable();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "create()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return success;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to create user table";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "create()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string restore(){

        try {
            
    std::string success = "Restore Successful";;
    

    std::string result = AbSqlTableUtil::getInstance().restoreTable(PaymentEntityFactory::getInstance().getPaymentEntityInstance(), portion);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "restore()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to restore backup";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "restore()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


    public: std::string backup(){

        try {
            
    std::string success = "Backup Successful";;
    

    std::string result = AbSqlTableUtil::getInstance().backupTable(PaymentEntityFactory::getInstance().getPaymentEntityInstance());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGS))
                        
                                    {
                                    this->logUtil.putF(success, this, "backup()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed to make backup";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "backup()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    public: std::string update(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return commonStrings.NOT_IMPLEMENTED;
    
}


};

            

