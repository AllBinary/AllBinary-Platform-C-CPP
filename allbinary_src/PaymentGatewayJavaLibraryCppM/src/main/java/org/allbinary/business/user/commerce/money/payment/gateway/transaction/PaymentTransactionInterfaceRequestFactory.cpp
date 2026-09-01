
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
        



            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/commerce/inventory/basket/Basket.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderHistory.h>

      
#include <org/allbinary/business/user/commerce/inventory/order/OrderInterface.h>

      
#include <org/allbinary/business/user/commerce/money/Money.h>

      
#include <org/allbinary/business/user/commerce/money/payment/Payment.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/TenderTypeFactory.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/TransactionTypeFactory.h>

      
#include <org/allbinary/data/generator/OrderIdGenerator.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>

      
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentTransactionInterfaceFactory.h"
#include "PaymentTransactionInterface.h"

class PaymentTransactionInterfaceRequestFactory
            : public Object
         {

    private: static PaymentTransactionInterfaceRequestFactory instance() { return PaymentTransactionInterfaceRequestFactory(); }

    public: static PaymentTransactionInterfaceRequestFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PaymentTransactionInterfaceRequestFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: PaymentTransactionInterfaceRequestFactory(){
}


    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

                //@Throws(Exception.constructor)
            
    public: PaymentTransactionInterface getInstance(TransformInfoInterface transformInfoInterface){

        try {
            
    TransformInfoHttpInterface httpTransformInfoInterface = transformInfoInterface as TransformInfoHttpInterface;;
    

    PageContext pageContext = httpTransformInfoInterface.getPageContext();;
    

    HttpServletRequest httpServletRequest = pageContext.getRequest() as HttpServletRequest;;
    

    std::string command = httpServletRequest.getParameter(org.allbinary.globals.GLOBALS2.ADMINCOMMAND);;
    

                        if(true && command.compareTo(org.allbinary.globals.GLOBALS2.AUTHORIZEFORMEVALBODYONERROR) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->generateFromTestData(transformInfoInterface);;
    

                                    }
                                
                        else {
                            
    HashMap<any, any> propertiesHashMap = httpTransformInfoInterface.getPropertiesHashMap();;
    

    WeblisketSession weblisketSession = WeblisketSession(propertiesHashMap, pageContext);;
    

    StoreFrontInterface storeFrontInterface = StoreFrontFactory::getInstance(weblisketSession.getStoreName());;
    

    OrderInterface order = weblisketSession.getOrder();;
    

    std::string orderId = order.getId();;
    

    OrderHistoryEntityInterface orderHistoryEntityInterface = OrderHistoryEntityFactory::getInstance();;
    

    OrderHistory orderReview = orderHistoryEntityInterface.getOrder(orderId);;
    

    Payment orderPaymentInfo = orderReview.getPaymentInfo();;
    
orderPaymentInfo.setTransactionType(TransactionTypeFactory::getInstance().SALE.toString());
    
orderPaymentInfo.setTenderType(TenderTypeFactory::getInstance().CREDITCARD.toString());
    
orderReview.setPaymentInfo(orderPaymentInfo);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PAYMENT))
                        
                                    {
                                    this->logUtil.putF(orderReview.getId(), this, "getPaymentTransactionInterface()");
    

                                    }
                                

    PaymentTransactionInterface paymentTransactionInterface = PaymentTransactionInterfaceFactory::getInstance().getInstance(orderReview);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentTransactionInterface;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PAYMENTERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getPaymentTransactionInterface()", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    private: PaymentTransactionInterface generateFromTestData(TransformInfoInterface transformInfoInterface){

        try {
            
    TransformInfoHttpInterface httpTransformInfoInterface = transformInfoInterface as TransformInfoHttpInterface;;
    

    HashMap<any, any> propertiesHashMap = httpTransformInfoInterface.getPropertiesHashMap();;
    

    PageContext pageContext = httpTransformInfoInterface.getPageContext();;
    

    WeblisketSession weblisketSession = WeblisketSession(propertiesHashMap, pageContext);;
    

    StoreFrontInterface storeFrontInterface = StoreFrontFactory::getInstance(weblisketSession.getStoreName());;
    

    HttpServletRequest httpServletRequest = pageContext.getRequest() as HttpServletRequest;;
    

    std::string gatewayName = weblisketSession.getPaymentMethod() as string;;
    

                        if(StringValidationUtil::getInstance().isEmpty(gatewayName))
                        
                                    {
                                    gatewayName= httpServletRequest.getParameter(PaymentGatewayData::NAME.toString());
    

                                    }
                                

    std::string transactionType = httpServletRequest.getParameter(PaymentData::TRANSACTIONTYPE);;
    

    std::string tenderType = httpServletRequest.getParameter(PaymentData::TENDERTYPE);;
    

    Payment payment = Payment();;
    
payment.setTransactionType(transactionType);
    
payment.setTenderType(tenderType);
    

    OrderHistory orderReview = OrderHistory(Basket());;
    
orderReview.setStoreName(storeFrontInterface.getName());
    
orderReview.setPaymentMethod(gatewayName);
    
orderReview.setUserName("testing");
    

    std::string orderId = httpServletRequest.getParameter("orderNumber");;
    

                        if(false || orderId.compareTo(StringUtil::getInstance().EMPTY_STRING) == 0)
                        
                                    {
                                    orderId= OrderIdGenerator().getNext();
    
orderReview.setId(orderId);
    

    std::string account = httpServletRequest.getParameter("account");;
    

    std::string expirationDate = httpServletRequest.getParameter("expirationDate");;
    

    std::string checkNumber = httpServletRequest.getParameter("checkNumber");;
    

    std::string driversLicense = httpServletRequest.getParameter("driversLicense");;
    

    std::string magneticInkCheckReader = httpServletRequest.getParameter("magneticInkCheckReader");;
    

    std::string aba = httpServletRequest.getParameter("aba");;
    

    std::string accountType = httpServletRequest.getParameter("accountType");;
    

    std::string name = httpServletRequest.getParameter("name");;
    
payment.setName(name);
    
payment.setNumber(account);
    
payment.setExpiration(expirationDate);
    
payment.setCheckNumber(checkNumber);
    
payment.setDriversLicense(driversLicense);
    
payment.setMagneticInkCheckReader(magneticInkCheckReader);
    
payment.setAba(aba);
    
payment.setAccountType(accountType);
    

    std::string street = httpServletRequest.getParameter("street");;
    

    std::string city = httpServletRequest.getParameter("city");;
    

    std::string state = httpServletRequest.getParameter("state");;
    

    std::string zip = httpServletRequest.getParameter("zip");;
    

    StreetAddress streetAddress = StreetAddress();;
    
streetAddress.setName(name);
    
streetAddress.setStreet(street);
    
streetAddress.setCity(city);
    
streetAddress.setState(state);
    
streetAddress.setCode(zip);
    

    std::string email = httpServletRequest.getParameter("email");;
    

    std::string amount = httpServletRequest.getParameter("amount");;
    
orderReview.setTotal(Money(amount));
    
orderReview.setBillingAddress(streetAddress);
    

                                    }
                                
                        else {
                            orderReview.setId(orderId);
    

                        }
                            
orderReview.setPaymentInfo(payment);
    

    PaymentTransactionInterface paymentTransactionInterface = PaymentTransactionInterfaceFactory::getInstance().getInstance(orderReview);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentTransactionInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PAYMENTERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "generatePaymentTransactionInterfaceFromTestData()", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

