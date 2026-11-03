
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_PAYMENTTYPEUTIL_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_PAYMENTTYPEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/types/PaymentTypeUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewaysData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/types/PaymentType.h"

auto PaymentTypeUtil::instance_owner() -> PaymentTypeUtil* { static std::unique_ptr<PaymentTypeUtil> value(new PaymentTypeUtil()); return value.get(); }
PaymentTypeUtil* PaymentTypeUtil::instance = PaymentTypeUtil::instance_owner();
int32_t PaymentTypeUtil::initResult = PaymentTypeUtil::init();
        auto PaymentTypeUtil::init() -> int32_t {
                    


                    return 0;
        }
                
    auto PaymentTypeUtil::getInstance() -> PaymentTypeUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PaymentTypeUtil::instance;
    
}


PaymentTypeUtil::PaymentTypeUtil() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), paymentTypeVector(new BasicArrayListD()){

    StringMaker* stringBuffer = new StringMaker();;
    

    std::string sep = AbPathData::getInstance()->SEPARATOR;;
    
stringBuffer->append(sep);
    
stringBuffer->append("generic");
    
stringBuffer->append(sep);
    
stringBuffer->append("user");
    
stringBuffer->append(sep);
    
stringBuffer->append("commerce");
    
stringBuffer->append(sep);
    
stringBuffer->append("money");
    
stringBuffer->append(sep);
    
stringBuffer->append("payment");
    
stringBuffer->append(sep);
    
stringBuffer->append("gateway");
    
stringBuffer->append(sep);
    
this->PAYMENTGATEWAYFILEPATHSTRING= stringBuffer->toString();
    
}


    auto PaymentTypeUtil::add(PaymentType* paymentType) -> void{
this->paymentTypeVector->add(paymentType);
    
}


                //@Throws(Exception.constructor)
            
    auto PaymentTypeUtil::get(std::string paymentTypeString) -> PaymentType*{

    int32_t size = this->paymentTypeVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    PaymentType* paymentType = dynamic_cast<PaymentType*>(this->paymentTypeVector->get(i));;
    

                        if(paymentType->getBasicPaymentType()->getName().compare(paymentTypeString) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return paymentType;
    

                                    }
                                
}




                            throw Exception(JavaString::valueOf("Unknown PaymentType: ") +JavaString::valueOf(paymentTypeString));
                    
}


                //@Throws(Exception.constructor)
            
    auto PaymentTypeUtil::initDefault(std::string storeName) -> void{

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->PAYMENT))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("initDefault Payment: ") +JavaString::valueOf(this->defaultName), this, "initDefault");
    

                                    }
                                

                        if(StringValidationUtil::getInstance()->isEmpty(this->defaultName))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getMainPath());
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH);
    
stringBuffer->append(storeName);
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
stringBuffer->append(this->PAYMENTGATEWAYFILEPATHSTRING);
    

    AbPath* abPath = dynamic_cast<AbPath*>(new AbPath(stringBuffer->toString(), this->SHIPPINGMETHODSFILENAME));;
    

    std::string data = (new CryptFileReader(TransformInfoObjectConfigData::getInstance()->UNCRYPTED_EXTENSION, TransformInfoObjectConfigData::getInstance()->ENCRYPTED_EXTENSION))->get(abPath);;
    

    Document* document = DomDocumentHelper::create(data);;
    

    NodeList* nodeList = document->getElementsByTagName(PaymentGatewaysData::NAME);;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* node = nodeList->item(index);;
    

    Node* defaultPaymentGatewayNode = DomSearchHelper::getNode(EntryData::getInstance()->DEFAULT, node->getChildNodes());;
    

    std::string defaultPaymentGatewayNodeValue = DomNodeHelper::getTextNodeValue(defaultPaymentGatewayNode);;
    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->PAYMENT))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("DefaultPaymentGatewayNodeValue: ") +JavaString::valueOf(defaultPaymentGatewayNodeValue), this, "initDefault");
    

                                    }
                                

                        if(!StringValidationUtil::getInstance()->isEmpty(defaultPaymentGatewayNodeValue))
                        
                                    {
                                    this->defaultName= defaultPaymentGatewayNodeValue;
    

                                    }
                                
}


                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto PaymentTypeUtil::getDefault(std::string storeName) -> PaymentType*{

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->PAYMENT))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "getDefault");
    

                                    }
                                
this->initDefault(storeName);
    

                        if(!StringValidationUtil::getInstance()->isEmpty(this->defaultName))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->get(this->defaultName);;
    

                                    }
                                



                            throw Exception(JavaString::valueOf("No Default: ") +JavaString::valueOf(this->defaultName));
                    
}


    auto PaymentTypeUtil::isContain(PaymentType* paymentType) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->paymentTypeVector->contains(paymentType);;
    
}


    auto PaymentTypeUtil::difference(BasicArrayList* a_PaymentTypeVector) -> BasicArrayList*{

    BasicArrayList* diff = new BasicArrayListD();;
    

    int32_t size = this->paymentTypeVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    PaymentType* paymentType = dynamic_cast<PaymentType*>(this->paymentTypeVector->get(i));;
    

                        if(!a_PaymentTypeVector->contains(paymentType))
                        diff->add(paymentType);
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return diff;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_PAYMENTTYPEUTIL_CPP
