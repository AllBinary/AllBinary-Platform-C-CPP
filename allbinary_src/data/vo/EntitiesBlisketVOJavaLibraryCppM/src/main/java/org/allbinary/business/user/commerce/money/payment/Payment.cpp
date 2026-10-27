
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/PaymentInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentData.h"
#include "org/allbinary/business/user/commerce/money/payment/CreditCardType.h"

class Payment
            : public Object
        , public PaymentInterface, public DomNodeInterface {

    private: std::string name;

    private: std::string expiration;

    private: std::string encryption;

    private: std::string number;

    private: std::string id;

    private: std::string type;

    private: std::string tenderType;

    private: std::string transactionType;

    private: std::string aba;

    private: std::string account;

    private: std::string accountType;

    private: std::string authorizationCode;

    private: std::string checkNumber;

    private: std::string checkType;

    private: std::string driversLicense;

    private: std::string magneticInkCheckReader;

    private: bool isDefault = false;

public: Payment(HashMap<Object*, Object*>* payment){
this->name= payment->get(PaymentData::NAME);
    
this->type= payment->get(PaymentData::TYPE);
    
this->expiration= payment->get(PaymentData::EXPIRATION);
    
this->encryption= payment->get(EntryData::getInstance()->ENCRYPTION);
    
this->number= (new SuperCrypt((int32_t(this->encryption)).intValue()))->decrypt(payment->get(PaymentData::NUMBER));
    
this->id= payment->get(PaymentData::ID);
    

    std::string def = payment->get(EntryData::getInstance()->DEFAULT);;
    

                        if(true && def.compare(EntryData::getInstance()->DEFAULT) == 0)
                        
                                    {
                                    this->isDefault= true;
    

                                    }
                                
                        else {
                            this->isDefault= false;
    

                        }
                            
this->tenderType= payment->get(PaymentData::TENDERTYPE);
    
this->transactionType= payment->get(PaymentData::TRANSACTIONTYPE);
    
this->aba= payment->get(PaymentData::ABA);
    
this->account= payment->get(PaymentData::ACCOUNT);
    
this->accountType= payment->get(PaymentData::ACCOUNTTYPE);
    
this->authorizationCode= payment->get(PaymentData::AUTHORIZATIONCODE);
    
this->checkNumber= payment->get(PaymentData::CHECKNUMBER);
    
this->checkType= payment->get(PaymentData::CHECKTYPE);
    
this->driversLicense= payment->get(PaymentData::DRIVERSLICENSE);
    
this->magneticInkCheckReader= payment->get(PaymentData::MAGNETICINKCHECKREADER);
    
}


public: Payment(ServletRequest* request){
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


public: Payment(){
}


    public: bool isValid(){

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
                                

                        if(number.size() > org.allbinary.business.user.commerce.money.payment.types.CreditCardType.MAXLEN)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return aFalse;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


    public: void setTenderType(std::string value){
this->tenderType= value;
    
}


    public: void setTransactionType(std::string value){
this->transactionType= value;
    
}


    public: void setAuthorizationCode(std::string value){
this->authorizationCode= value;
    
}


    public: void setCheckType(std::string value){
this->checkType= value;
    
}


    public: void setCheckNumber(std::string value){
this->checkNumber= value;
    
}


    public: void setDriversLicense(std::string value){
this->driversLicense= value;
    
}


    public: void setMagneticInkCheckReader(std::string value){
this->magneticInkCheckReader= value;
    
}


    public: void setAba(std::string value){
this->aba= value;
    
}


    public: void setAccountType(std::string value){
this->accountType= value;
    
}


    public: void setName(std::string value){
this->name= value;
    
}


    public: void setType(std::string value){
this->type= value;
    
}


    public: void setExpiration(std::string value){
this->expiration= value;
    
}


    public: void setNumber(std::string value){
this->number= value;
    
}


    public: std::string getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: std::string getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->type;
    
}


    public: std::string getExpiration(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->expiration;
    
}


    public: std::string getEncryption(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->encryption;
    
}


    public: std::string getNumber(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->number;
    
}


    public: std::string getTenderType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tenderType;
    
}


    public: std::string getTransactionType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->transactionType;
    
}


    public: std::string getAba(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->aba;
    
}


    public: std::string getAccount(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->account;
    
}


    public: std::string getAccountType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->accountType;
    
}


    public: std::string getAuthorizationCode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->authorizationCode;
    
}


    public: std::string getCheckNumber(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->checkNumber;
    
}


    public: std::string getCheckType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->checkType;
    
}


    public: std::string getDriversLicense(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->driversLicense;
    
}


    public: std::string getMagneticInkCheckReader(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->magneticInkCheckReader;
    
}


    public: std::string getLastFour(){

                        if(number.size() > PaymentData::MIN && number.size() <= PaymentData::MAX)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->number.substring(number.size() -4);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Invalid #";
    

                        }
                            
}


    public: bool isDefault(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isDefault;
    
}


    public: HashMap<Object*, Object*>* toHashMap(){

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
    

                        if(this->isDefault)
                        
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
            
    public: Node* toXmlNode(Document* document){

    HashMap<Object*, Object*>* hashMap = this->toHashMap();;
    

    Node* node = ModDomHelper::createNameValueNodes(document, PaymentData::PAYMENT, hashMap);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public: Document* toXmlDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: std::string view(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Document* toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Node* toValidationInfoNode(Document* document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: std::string validationInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

