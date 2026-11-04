
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
        



        #ifndef ADMIN_TAGHELPERS_ORDERHELPER_CPP
        #define ADMIN_TAGHELPERS_ORDERHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/OrderHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/Order.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderProcessorUtil.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntity.h>

      
#include <org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelper.h"


OrderHelper::OrderHelper(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()){
this->propertiesHashMap= propertiesHashMap;
    
this->pageContext= pageContext;
    
this->request= dynamic_cast<HttpServletRequest*>(pageContext->getRequest());
    

    std::string storeName = JavaBoxes::unbox<std::string>(propertiesHashMap->get(StoreFrontData::getInstance()->NAME));;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(storeName))
                        
                                    {
                                    this->storeFrontInterface= StoreFrontFactory::getInstance(storeName);
    

                                    }
                                
this->weblisketSession= new WeblisketSession(this->propertiesHashMap, this->pageContext);
    
}


    auto OrderHelper::setPaymentGateway() -> bool{

        try {
            
    bool paymentGatewayBoolean = Boolean::FALSE;;
    

    OrderInterface* orderInterface = this->weblisketSession->getOrder();;
    

    std::string requestPaymentGateway = JavaBoxes::unbox<std::string>(this->request->getParameter(PaymentGatewayData::NAME->toString()));;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(requestPaymentGateway))
                        
                                    {
                                    this->weblisketSession->setPaymentMethod(requestPaymentGateway);
    
orderInterface->setPaymentMethod(requestPaymentGateway);
    
paymentGatewayBoolean= Boolean::TRUE;
    

                                    }
                                

    PaymentGatewayEntity* paymentGatewayEntityInterface = dynamic_cast<PaymentGatewayEntity*>(PaymentGatewayEntityFactory::getInstance());;
    

    BasicArrayList* paymentTypeVector = paymentGatewayEntityInterface->findPaymentTypeVectorByStore(this->weblisketSession->getStoreName());;
    

                        if(paymentTypeVector->size() == 1)
                        
                                    {
                                    
    BasicPaymentType* paymentType = dynamic_cast<BasicPaymentType*>(paymentTypeVector->get(0));;
    

    PaymentGatewayInterface* paymentGatewayInterface = dynamic_cast<PaymentGatewayInterface*>(paymentGatewayEntityInterface->getPaymentGatewayInterface(this->weblisketSession->getStoreName(), paymentType));;
    

    std::string paymentGateway = paymentGatewayInterface->getName();;
    
this->weblisketSession->setPaymentMethod(paymentGateway);
    
orderInterface->setPaymentMethod(paymentGateway);
    
paymentGatewayBoolean= Boolean::TRUE;
    

                                    }
                                

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Successfully set PaymentGateway Order: ");
    
stringBuffer->append(orderInterface->getId());
    
stringBuffer->append(" to: ");
    
stringBuffer->append(orderInterface->getPaymentMethod());
    
this->logUtil->putF(stringBuffer->toString(), this, "setPaymentGateway()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return paymentGatewayBoolean;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Failed to set PaymentGateway for Order: ");
    

        try {
            
    OrderInterface* orderInterface = this->weblisketSession->getOrder();;
    

                        if(orderInterface != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(orderInterface->getId());
    
stringBuffer->append(" to: ");
    
stringBuffer->append(orderInterface->getPaymentMethod());
    

                                    }
                                

                //: 
} catch(Exception& ex) 
            {
stringBuffer->append(" Exception Getting");
    
}

this->logUtil->put(stringBuffer->toString(), this, "setPaymentGateway()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto OrderHelper::process() -> std::string{

        try {
            
    OrderInterface* order = this->weblisketSession->getOrder();;
    
order->setStoreName(this->storeFrontInterface->getName());
    

    std::string result = OrderProcessorUtil::getInstance()->process(this->weblisketSession->getUserName(), dynamic_cast<Order*>(order));;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGS))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Successfully Processed Order: ") +JavaString::valueOf(result), this, "processOrder()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Failed to Process Order: ");
    

        try {
            stringBuffer->append(this->weblisketSession->getOrder()->getId());
    

                //: 
} catch(Exception& ex) 
            {
stringBuffer->append(" Exception Getting Id");
    
}


    std::string error = stringBuffer->toString();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}




        #endif //ADMIN_TAGHELPERS_ORDERHELPER_CPP
