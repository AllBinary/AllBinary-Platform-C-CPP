
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
        



        #ifndef ADMIN_TAGHELPERS_PAYMENTGATEWAYHELPER_CPP
        #define ADMIN_TAGHELPERS_PAYMENTGATEWAYHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/PaymentGatewayHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/installer/Portion.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactory.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlTableUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/BasicTable.h"


PaymentGatewayHelper::PaymentGatewayHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()){

        try {
            this->weblisketSession= new WeblisketSession(hashMap, pageContext);
    
this->httpServletRequest= dynamic_cast<HttpServletRequest*>(pageContext->getRequest());
    
this->portion= new Portion(hashMap);
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PAYMENTERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, &e);
    

                                    }
                                



                            throw e;
                    
}

}


    auto PaymentGatewayHelper::insert() -> std::string{

        try {
            
    PaymentGatewayInterface* paymentGatewayInterface = (new PaymentGatewayInterfaceFactory())->getInstance(this->httpServletRequest);;
    
paymentGatewayInterface->setStoreName(this->weblisketSession->getStoreName());
    
PaymentGatewayEntityFactory::getInstance()->add(paymentGatewayInterface);
    

    std::string success = "Successfully Added New Payment Gateway";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "insert()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(success) +JavaString::valueOf("<br/>");
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to add";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "add()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(error) +JavaString::valueOf("<br>")) +JavaString::valueOf("Exception: ")) +JavaString::valueOf(e)) +JavaString::valueOf("<br>");
    
}

}


    auto PaymentGatewayHelper::update() -> std::string{

        try {
            
    PaymentGatewayInterface* paymentGatewayInterface = (new PaymentGatewayInterfaceFactory())->getInstance(this->httpServletRequest);;
    
paymentGatewayInterface->setStoreName(this->weblisketSession->getStoreName());
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Gateway Name: ");
    
stringBuffer->append(paymentGatewayInterface->getName());
    
stringBuffer->append(" HashMap=");
    
stringBuffer->append(paymentGatewayInterface->toHashMap(true)->toString());
    
this->logUtil->putF(stringBuffer->toString(), this, "update()");
    

                                    }
                                
PaymentGatewayEntityFactory::getInstance()->update(paymentGatewayInterface);
    

    std::string success = "Successfully Updated Payment Gateway information";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "update()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(success) +JavaString::valueOf("<br/>");
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to update payment gateway information";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "update()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(error) +JavaString::valueOf("<br/>")) +JavaString::valueOf("Exception: ")) +JavaString::valueOf(e)) +JavaString::valueOf("<br/>");
    
}

}


    auto PaymentGatewayHelper::delete_() -> std::string{

        try {
            
    PaymentGatewayInterface* paymentGatewayInterface = (new PaymentGatewayInterfaceFactory())->getInstance(this->httpServletRequest);;
    
paymentGatewayInterface->setStoreName(this->weblisketSession->getStoreName());
    

    std::string storeName = paymentGatewayInterface->getStoreName();;
    

    std::string gatewayName = paymentGatewayInterface->getName();;
    
PaymentGatewayEntityFactory::getInstance()->remove(storeName, BasicPaymentTypeUtil::getInstance()->get(gatewayName));
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Successfully Removed payment gateway where store name=");
    
stringBuffer->append(storeName);
    
stringBuffer->append(" and gateway name=");
    
stringBuffer->append(gatewayName);
    

    std::string success = stringBuffer->toString();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "delete()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(success) +JavaString::valueOf("<br/>");
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to remove payment gateway from table";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "remove()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(error) +JavaString::valueOf("<br/>")) +JavaString::valueOf("Exception: ")) +JavaString::valueOf(e)) +JavaString::valueOf("<br>");
    
}

}


    auto PaymentGatewayHelper::drop() -> std::string{

        try {
            
    std::string success = PaymentGatewayEntityFactory::getInstance()->dropTable();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, this->commonStrings->DROP);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to drop payment transaction result table";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->DROP, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


    auto PaymentGatewayHelper::create() -> std::string{

        try {
            
    std::string success = PaymentGatewayEntityFactory::getInstance()->createTable();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "create()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return success;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to create payment transaction result table";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "create()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


    auto PaymentGatewayHelper::restore() -> std::string{

        try {
            
    std::string success = "Restore Successful";;
    

    std::string result = AbSqlTableUtil::getInstance()->restoreTable(PaymentGatewayEntityFactory::getInstance(), this->portion);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "restore()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to restore backup";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "restore()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


    auto PaymentGatewayHelper::backup() -> std::string{

        try {
            
    std::string success = "Restore Successful";;
    

    std::string result = AbSqlTableUtil::getInstance()->backupTable(PaymentGatewayEntityFactory::getInstance());;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(success, this, "backup()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to make backup";;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "backup()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}




        #endif //ADMIN_TAGHELPERS_PAYMENTGATEWAYHELPER_CPP
