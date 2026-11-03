
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_PAYMENT_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_PAYMENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/Payment.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/ServletRequest.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/business/user/commerce/money/payment/types/CreditCardType.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/PaymentInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentData.h"
#include "org/allbinary/business/user/commerce/money/payment/CreditCardType.h"


Payment::Payment(HashMap<Object*, Object*>* payment){
this->name= JavaBoxes::unbox<std::string>(payment->get(PaymentData::NAME));
    
this->type= JavaBoxes::unbox<std::string>(payment->get(PaymentData::TYPE));
    
this->expiration= JavaBoxes::unbox<std::string>(payment->get(PaymentData::EXPIRATION));
    
this->encryption= JavaBoxes::unbox<std::string>(payment->get(EntryData::getInstance()->ENCRYPTION));
    
this->number= JavaBoxes::unbox<std::string>((new SuperCrypt((int32_t(this->encryption))))->decrypt(JavaBoxes::unbox<std::string>(payment->get(PaymentData::NUMBER))));
    
this->id= JavaBoxes::unbox<std::string>(payment->get(PaymentData::ID));
    

    std::string def = JavaBoxes::unbox<std::string>(payment->get(EntryData::getInstance()->DEFAULT));;
    

                        if(true && def.compare(EntryData::getInstance()->DEFAULT) == 0)
                        
                                    {
                                    this->isDefault_= true;
    

                                    }
                                
                        else {
                            this->isDefault_= false;
    

                        }
                            
this->tenderType= JavaBoxes::unbox<std::string>(payment->get(PaymentData::TENDERTYPE));
    
this->transactionType= JavaBoxes::unbox<std::string>(payment->get(PaymentData::TRANSACTIONTYPE));
    
this->aba= JavaBoxes::unbox<std::string>(payment->get(PaymentData::ABA));
    
this->account= JavaBoxes::unbox<std::string>(payment->get(PaymentData::ACCOUNT));
    
this->accountType= JavaBoxes::unbox<std::string>(payment->get(PaymentData::ACCOUNTTYPE));
    
this->authorizationCode= JavaBoxes::unbox<std::string>(payment->get(PaymentData::AUTHORIZATIONCODE));
    
this->checkNumber= JavaBoxes::unbox<std::string>(payment->get(PaymentData::CHECKNUMBER));
    
this->checkType= JavaBoxes::unbox<std::string>(payment->get(PaymentData::CHECKTYPE));
    
this->driversLicense= JavaBoxes::unbox<std::string>(payment->get(PaymentData::DRIVERSLICENSE));
    
this->magneticInkCheckReader= JavaBoxes::unbox<std::string>(payment->get(PaymentData::MAGNETICINKCHECKREADER));
    
}


Payment::Payment(ServletRequest* request){
this->name= request->getParameter(PaymentData::NAME);
    
this->type= request->getParameter(PaymentData::TYPE);
    
this->expiration= request->getParameter(PaymentData::EXPIRATION);
    
this->number= request->getParameter(PaymentData::NUMBER);
    
this->tenderType= request->getParameter(PaymentData::TENDERTYPE);
    
this->transactionType= request->getParameter(PaymentData::TRANSACTIONTYPE);
    
this->aba= request->getParameter(PaymentData::ABA);
    
this->account= request->getParameter(PaymentData::ACCOUNT);
    
this->accountType= request->getParameter(PaymentData::ACCOUNTTYPE);
    
this->authorizationCode= request->getParameter(PaymentData::AUTHORIZATIONCODE);
    
this->checkNumber= request->getParameter(PaymentData::CHECKNUMBER);
    
this->checkType= request->getParameter(PaymentData::CHECKTYPE);
    
this->driversLicense= request->getParameter(PaymentData::DRIVERSLICENSE);
    
this->magneticInkCheckReader= request->getParameter(PaymentData::MAGNETICINKCHECKREADER);
    
}


Payment::Payment(){
}


    auto Payment::isValid() -> bool{

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    bool aFalse = Boolean::FALSE;;
    

                        if(false || this->name.compare(stringUtil->EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return aFalse;
    

                                    }
                                

                        if(false || this->type.compare(stringUtil->EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return aFalse;
    

                                    }
                                

                        if(false || this->expiration.compare(stringUtil->EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return aFalse;
    

                                    }
                                

                        if(false || this->number.compare(stringUtil->EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return aFalse;
    

                                    }
                                

                        if(this->number.size() > CreditCardType::MAXLEN)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return aFalse;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    
}


    auto Payment::setTenderType(std::string value) -> void{
this->tenderType= value;
    
}


    auto Payment::setTransactionType(std::string value) -> void{
this->transactionType= value;
    
}


    auto Payment::setAuthorizationCode(std::string value) -> void{
this->authorizationCode= value;
    
}


    auto Payment::setCheckType(std::string value) -> void{
this->checkType= value;
    
}


    auto Payment::setCheckNumber(std::string value) -> void{
this->checkNumber= value;
    
}


    auto Payment::setDriversLicense(std::string value) -> void{
this->driversLicense= value;
    
}


    auto Payment::setMagneticInkCheckReader(std::string value) -> void{
this->magneticInkCheckReader= value;
    
}


    auto Payment::setAba(std::string value) -> void{
this->aba= value;
    
}


    auto Payment::setAccountType(std::string value) -> void{
this->accountType= value;
    
}


    auto Payment::setName(std::string value) -> void{
this->name= value;
    
}


    auto Payment::setType(std::string value) -> void{
this->type= value;
    
}


    auto Payment::setExpiration(std::string value) -> void{
this->expiration= value;
    
}


    auto Payment::setNumber(std::string value) -> void{
this->number= value;
    
}


    auto Payment::getId() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->id;
    
}


    auto Payment::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto Payment::getType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->type;
    
}


    auto Payment::getExpiration() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->expiration;
    
}


    auto Payment::getEncryption() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->encryption;
    
}


    auto Payment::getNumber() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->number;
    
}


    auto Payment::getTenderType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tenderType;
    
}


    auto Payment::getTransactionType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->transactionType;
    
}


    auto Payment::getAba() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->aba;
    
}


    auto Payment::getAccount() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->account;
    
}


    auto Payment::getAccountType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->accountType;
    
}


    auto Payment::getAuthorizationCode() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->authorizationCode;
    
}


    auto Payment::getCheckNumber() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->checkNumber;
    
}


    auto Payment::getCheckType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->checkType;
    
}


    auto Payment::getDriversLicense() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->driversLicense;
    
}


    auto Payment::getMagneticInkCheckReader() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->magneticInkCheckReader;
    
}


    auto Payment::getLastFour() -> std::string{

                        if(this->number.size() > PaymentData::MIN && this->number.size() <= PaymentData::MAX)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::substring(this->number, this->number.size() -4);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Invalid #";
    

                        }
                            
}


    auto Payment::isDefault() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isDefault_;
    
}


    auto Payment::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(PaymentData::NAME, this->name);
    
hashMap->put(PaymentData::TYPE, this->type);
    
hashMap->put(PaymentData::EXPIRATION, this->expiration);
    
hashMap->put(PaymentData::NUMBER, this->getLastFour());
    
hashMap->put(PaymentData::TENDERTYPE, this->tenderType);
    
hashMap->put(PaymentData::TRANSACTIONTYPE, this->transactionType);
    
hashMap->put(PaymentData::ABA, this->aba);
    
hashMap->put(PaymentData::ACCOUNT, this->account);
    
hashMap->put(PaymentData::ACCOUNTTYPE, this->accountType);
    
hashMap->put(PaymentData::AUTHORIZATIONCODE, this->authorizationCode);
    
hashMap->put(PaymentData::CHECKNUMBER, this->checkNumber);
    
hashMap->put(PaymentData::DRIVERSLICENSE, this->driversLicense);
    
hashMap->put(PaymentData::MAGNETICINKCHECKREADER, this->magneticInkCheckReader);
    

                        if(this->isDefault_)
                        
                                    {
                                    hashMap->put(EntryData::getInstance()->DEFAULT, EntryData::getInstance()->DEFAULT);
    

                                    }
                                
                        else {
                            hashMap->put(EntryData::getInstance()->DEFAULT, StringUtil::getInstance()->EMPTY_STRING);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto Payment::toXmlNode(Document* document) -> Node*{

    HashMap<Object*, Object*>* hashMap = this->toHashMap();;
    

    Node* node = ModDomHelper::createNameValueNodes(document, PaymentData::PAYMENT, hashMap);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


    auto Payment::toXmlDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto Payment::view() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto Payment::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto Payment::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto Payment::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_PAYMENT_CPP
