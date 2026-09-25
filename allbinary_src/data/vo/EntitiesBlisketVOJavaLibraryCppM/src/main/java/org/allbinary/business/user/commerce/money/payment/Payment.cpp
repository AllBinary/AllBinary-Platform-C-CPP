
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
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
        #include "PaymentInterface.h"
#include "PaymentData.h"
#include "CreditCardType.h"

class Payment
            : public Object
        : public PaymentInterface, public DomNodeInterface {

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

public: Payment(HashMap<any, any> payment){
this->name= payment.get(PaymentData::NAME) as string;
    
this->type= payment.get(PaymentData::TYPE) as string;
    
this->expiration= payment.get(PaymentData::EXPIRATION) as string;
    
this->encryption= payment.get(EntryData::getInstance().ENCRYPTION) as string;
    
this->number= SuperCrypt(Integer(this->encryption).intValue()).decrypt(payment.get(PaymentData::NUMBER) as string) as string;
    
this->id= payment.get(PaymentData::ID) as string;
    

    std::string def = payment.get(EntryData::getInstance().DEFAULT) as string;;
    

                        if(true && def.compareTo(EntryData::getInstance().DEFAULT) == 0)
                        
                                    {
                                    this->isDefault= true;
    

                                    }
                                
                        else {
                            this->isDefault= false;
    

                        }
                            
this->tenderType= payment.get(PaymentData::TENDERTYPE) as string;
    
this->transactionType= payment.get(PaymentData::TRANSACTIONTYPE) as string;
    
this->aba= payment.get(PaymentData::ABA) as string;
    
this->account= payment.get(PaymentData::ACCOUNT) as string;
    
this->accountType= payment.get(PaymentData::ACCOUNTTYPE) as string;
    
this->authorizationCode= payment.get(PaymentData::AUTHORIZATIONCODE) as string;
    
this->checkNumber= payment.get(PaymentData::CHECKNUMBER) as string;
    
this->checkType= payment.get(PaymentData::CHECKTYPE) as string;
    
this->driversLicense= payment.get(PaymentData::DRIVERSLICENSE) as string;
    
this->magneticInkCheckReader= payment.get(PaymentData::MAGNETICINKCHECKREADER) as string;
    
}


public: Payment(ServletRequest request){
this->name= request.getParameter(PaymentData::NAME);
    
this->type= request.getParameter(PaymentData::TYPE);
    
this->expiration= request.getParameter(PaymentData::EXPIRATION);
    
this->number= request.getParameter(PaymentData::NUMBER);
    
this->tenderType= request.getParameter(PaymentData::TENDERTYPE);
    
this->transactionType= request.getParameter(PaymentData::TRANSACTIONTYPE);
    
this->aba= request.getParameter(PaymentData::ABA);
    
this->account= request.getParameter(PaymentData::ACCOUNT);
    
this->accountType= request.getParameter(PaymentData::ACCOUNTTYPE);
    
this->authorizationCode= request.getParameter(PaymentData::AUTHORIZATIONCODE);
    
this->checkNumber= request.getParameter(PaymentData::CHECKNUMBER);
    
this->checkType= request.getParameter(PaymentData::CHECKTYPE);
    
this->driversLicense= request.getParameter(PaymentData::DRIVERSLICENSE);
    
this->magneticInkCheckReader= request.getParameter(PaymentData::MAGNETICINKCHECKREADER);
    
}


public: Payment(){
}


    public: Boolean isValid(){

    StringUtil stringUtil = StringUtil::getInstance();;
    

    Boolean aFalse = Boolean::FALSE;;
    

                        if(false || this->name.compareTo(stringUtil.EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return aFalse;
    

                                    }
                                

                        if(false || this->type.compareTo(stringUtil.EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return aFalse;
    

                                    }
                                

                        if(false || this->expiration.compareTo(stringUtil.EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return aFalse;
    

                                    }
                                

                        if(false || this->number.compareTo(stringUtil.EMPTY_STRING) == 0)
                        
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


    public: HashMap<any, any> toHashMap(){

    HashMap<any, any> hashMap = StdUtil::getInstance().createHashMap();;
    
hashMap.put(PaymentData::NAME, this->name);
    
hashMap.put(PaymentData::TYPE, this->type);
    
hashMap.put(PaymentData::EXPIRATION, this->expiration);
    
hashMap.put(PaymentData::NUMBER, this->getLastFour());
    
hashMap.put(PaymentData::TENDERTYPE, this->tenderType);
    
hashMap.put(PaymentData::TRANSACTIONTYPE, this->transactionType);
    
hashMap.put(PaymentData::ABA, this->aba);
    
hashMap.put(PaymentData::ACCOUNT, this->account);
    
hashMap.put(PaymentData::ACCOUNTTYPE, this->accountType);
    
hashMap.put(PaymentData::AUTHORIZATIONCODE, this->authorizationCode);
    
hashMap.put(PaymentData::CHECKNUMBER, this->checkNumber);
    
hashMap.put(PaymentData::DRIVERSLICENSE, this->driversLicense);
    
hashMap.put(PaymentData::MAGNETICINKCHECKREADER, this->magneticInkCheckReader);
    

                        if(this->isDefault)
                        
                                    {
                                    hashMap.put(EntryData::getInstance().DEFAULT, EntryData::getInstance().DEFAULT);
    

                                    }
                                
                        else {
                            hashMap.put(EntryData::getInstance().DEFAULT, StringUtil::getInstance().EMPTY_STRING);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    HashMap<any, any> hashMap = this->toHashMap();;
    

    Node node = ModDomHelper::createNameValueNodes(document, PaymentData::PAYMENT, hashMap);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public: Document toXmlDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: std::string view(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: std::string validationInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

