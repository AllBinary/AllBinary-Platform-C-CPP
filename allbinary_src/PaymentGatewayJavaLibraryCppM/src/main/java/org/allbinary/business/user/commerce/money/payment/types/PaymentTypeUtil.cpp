
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

class PaymentTypeUtil
            : public Object
         {

    private: static PaymentTypeUtil* instance() { static std::unique_ptr<PaymentTypeUtil> value(new PaymentTypeUtil()); return value.get(); }

                    static int32_t initResult = PaymentTypeUtil::init();
                static int32_t init() { 
                    


                    return 0;
                }
            
    public: static PaymentTypeUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PaymentTypeUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: std::string PAYMENTGATEWAYFILEPATHSTRING;

    private: const std::string SHIPPINGMETHODSFILENAME = "paymentGatewayTypes.xml";

    private: std::string defaultName = 
                null
            ;

    private: BasicArrayList* paymentTypeVector = new BasicArrayListD();

private: PaymentTypeUtil(){

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


    public: void add(PaymentType* paymentType){
this->paymentTypeVector->add(paymentType);
    
}


                //@Throws(Exception.constructor)
            
    public: PaymentType* get(std::string paymentTypeString){

    int32_t size = this->paymentTypeVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    PaymentType* paymentType = dynamic_cast<PaymentType*>(this->paymentTypeVector->get(i));;
    

                        if(paymentType->getBasicPaymentType()->getName().compareTo(paymentTypeString) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentType;
    

                                    }
                                
}




                            throw new Exception("Unknown PaymentType: " +paymentTypeString);
                    
}


                //@Throws(Exception.constructor)
            
    public: void initDefault(std::string storeName){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->PAYMENT))
                        
                                    {
                                    this->logUtil->putF("initDefault Payment: " +this->defaultName, this, "initDefault");
    

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
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->PAYMENT))
                        
                                    {
                                    this->logUtil->putF("DefaultPaymentGatewayNodeValue: " +defaultPaymentGatewayNodeValue, this, "initDefault");
    

                                    }
                                

                        if(!StringValidationUtil::getInstance()->isEmpty(defaultPaymentGatewayNodeValue))
                        
                                    {
                                    this->defaultName= defaultPaymentGatewayNodeValue;
    

                                    }
                                
}


                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: PaymentType* getDefault(std::string storeName){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->PAYMENT))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "getDefault");
    

                                    }
                                
this->initDefault(storeName);
    

                        if(!StringValidationUtil::getInstance()->isEmpty(this->defaultName))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->get(this->defaultName);;
    

                                    }
                                



                            throw new Exception("No Default: " +this->defaultName);
                    
}


    public: bool isContain(PaymentType* paymentType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentTypeVector->contains(paymentType);;
    
}


    public: BasicArrayList* difference(BasicArrayList* a_PaymentTypeVector){

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


};

            

