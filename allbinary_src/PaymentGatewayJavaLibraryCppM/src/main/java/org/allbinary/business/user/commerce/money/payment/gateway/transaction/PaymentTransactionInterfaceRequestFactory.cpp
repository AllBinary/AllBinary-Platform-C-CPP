
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
        

    private: static const instance: PaymentTransactionInterfaceRequestFactory = new PaymentTransactionInterfaceRequestFactory();

    public static PaymentTransactionInterfaceRequestFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PaymentTransactionInterfaceRequestFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

                //@Throws(Exception.constructor)
            
    public PaymentTransactionInterface getInstance(TransformInfoInterface transformInfoInterface){

        try {
            
    httpTransformInfoInterface: TransformInfoHttpInterface = transformInfoInterface as TransformInfoHttpInterface;;
    

    pageContext: PageContext = httpTransformInfoInterface!.getPageContext()!;;
    

    httpServletRequest: HttpServletRequest = pageContext!.getRequest() as HttpServletRequest;;
    

    command: string = httpServletRequest!.getParameter(org.allbinary.globals.GLOBALS2.ADMINCOMMAND)!;;
    

                        if(command != 
                                    null
                                 && command.compareTo(org.allbinary.globals.GLOBALS2.AUTHORIZEFORMEVALBODYONERROR) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.generateFromTestData(transformInfoInterface);;
    

                                    }
                                
                        else {
                            
    propertiesHashMap: HashMap<any, any> = httpTransformInfoInterface!.getPropertiesHashMap()!;;
    

    weblisketSession: WeblisketSession = new WeblisketSession(propertiesHashMap, pageContext);;
    

    storeFrontInterface: StoreFrontInterface = StoreFrontFactory.getInstance(weblisketSession!.getStoreName())!;;
    

    order: OrderInterface = weblisketSession!.getOrder()!;;
    

    orderId: string = order.getId()!;;
    

    orderHistoryEntityInterface: OrderHistoryEntityInterface = OrderHistoryEntityFactory.getInstance()!;;
    

    orderReview: OrderHistory = orderHistoryEntityInterface!.getOrder(orderId)!;;
    

    orderPaymentInfo: Payment = orderReview!.getPaymentInfo()!;;
    
orderPaymentInfo!.setTransactionType(TransactionTypeFactory.getInstance()!.SALE.toString());
    
orderPaymentInfo!.setTenderType(TenderTypeFactory.getInstance()!.CREDITCARD.toString());
    
orderReview!.setPaymentInfo(orderPaymentInfo);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PAYMENT))
                        
                                    {
                                    this.logUtil!.putF(orderReview!.getId(), this, "getPaymentTransactionInterface()");
    

                                    }
                                

    paymentTransactionInterface: PaymentTransactionInterface = PaymentTransactionInterfaceFactory.getInstance()!.getInstance(orderReview)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentTransactionInterface;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PAYMENTERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "getPaymentTransactionInterface()", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    PaymentTransactionInterface generateFromTestData(TransformInfoInterface transformInfoInterface){

        try {
            
    httpTransformInfoInterface: TransformInfoHttpInterface = transformInfoInterface as TransformInfoHttpInterface;;
    

    propertiesHashMap: HashMap<any, any> = httpTransformInfoInterface!.getPropertiesHashMap()!;;
    

    pageContext: PageContext = httpTransformInfoInterface!.getPageContext()!;;
    

    weblisketSession: WeblisketSession = new WeblisketSession(propertiesHashMap, pageContext);;
    

    storeFrontInterface: StoreFrontInterface = StoreFrontFactory.getInstance(weblisketSession!.getStoreName())!;;
    

    httpServletRequest: HttpServletRequest = pageContext!.getRequest() as HttpServletRequest;;
    

    gatewayName: string = weblisketSession!.getPaymentMethod() as string;;
    

                        if(StringValidationUtil.getInstance()!.isEmpty(gatewayName))
                        
                                    {
                                    gatewayName= httpServletRequest!.getParameter(PaymentGatewayData.NAME.toString());
    

                                    }
                                

    transactionType: string = httpServletRequest!.getParameter(PaymentData.TRANSACTIONTYPE)!;;
    

    tenderType: string = httpServletRequest!.getParameter(PaymentData.TENDERTYPE)!;;
    

    payment: Payment = new Payment();;
    
payment.setTransactionType(transactionType);
    
payment.setTenderType(tenderType);
    

    orderReview: OrderHistory = new OrderHistory(new Basket());;
    
orderReview!.setStoreName(storeFrontInterface!.getName());
    
orderReview!.setPaymentMethod(gatewayName);
    
orderReview!.setUserName("testing");
    

    orderId: string = httpServletRequest!.getParameter("orderNumber")!;;
    

                        if(orderId == 
                                    null
                                 || orderId!.compareTo(StringUtil.getInstance()!.EMPTY_STRING) == 0)
                        
                                    {
                                    orderId= new OrderIdGenerator().getNext();
    
orderReview!.setId(orderId);
    

    account: string = httpServletRequest!.getParameter("account")!;;
    

    expirationDate: string = httpServletRequest!.getParameter("expirationDate")!;;
    

    checkNumber: string = httpServletRequest!.getParameter("checkNumber")!;;
    

    driversLicense: string = httpServletRequest!.getParameter("driversLicense")!;;
    

    magneticInkCheckReader: string = httpServletRequest!.getParameter("magneticInkCheckReader")!;;
    

    aba: string = httpServletRequest!.getParameter("aba")!;;
    

    accountType: string = httpServletRequest!.getParameter("accountType")!;;
    

    name: string = httpServletRequest!.getParameter("name")!;;
    
payment.setName(name);
    
payment.setNumber(account);
    
payment.setExpiration(expirationDate);
    
payment.setCheckNumber(checkNumber);
    
payment.setDriversLicense(driversLicense);
    
payment.setMagneticInkCheckReader(magneticInkCheckReader);
    
payment.setAba(aba);
    
payment.setAccountType(accountType);
    

    street: string = httpServletRequest!.getParameter("street")!;;
    

    city: string = httpServletRequest!.getParameter("city")!;;
    

    state: string = httpServletRequest!.getParameter("state")!;;
    

    zip: string = httpServletRequest!.getParameter("zip")!;;
    

    streetAddress: StreetAddress = new StreetAddress();;
    
streetAddress!.setName(name);
    
streetAddress!.setStreet(street);
    
streetAddress!.setCity(city);
    
streetAddress!.setState(state);
    
streetAddress!.setCode(zip);
    

    email: string = httpServletRequest!.getParameter("email")!;;
    

    amount: string = httpServletRequest!.getParameter("amount")!;;
    
orderReview!.setTotal(new Money(amount));
    
orderReview!.setBillingAddress(streetAddress);
    

                                    }
                                
                        else {
                            orderReview!.setId(orderId);
    

                        }
                            
orderReview!.setPaymentInfo(payment);
    

    paymentTransactionInterface: PaymentTransactionInterface = PaymentTransactionInterfaceFactory.getInstance()!.getInstance(orderReview)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentTransactionInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PAYMENTERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "generatePaymentTransactionInterfaceFromTestData()", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

