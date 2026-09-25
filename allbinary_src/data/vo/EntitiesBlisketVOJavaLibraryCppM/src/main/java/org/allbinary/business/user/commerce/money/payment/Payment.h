
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_PAYMENT_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_PAYMENT_H

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

public: Payment(HashMap<any, any> payment);

public: Payment(ServletRequest request);

public: Payment();

    public: Boolean isValid();

    public: void setTenderType(std::string value);

    public: void setTransactionType(std::string value);

    public: void setAuthorizationCode(std::string value);

    public: void setCheckType(std::string value);

    public: void setCheckNumber(std::string value);

    public: void setDriversLicense(std::string value);

    public: void setMagneticInkCheckReader(std::string value);

    public: void setAba(std::string value);

    public: void setAccountType(std::string value);

    public: void setName(std::string value);

    public: void setType(std::string value);

    public: void setExpiration(std::string value);

    public: void setNumber(std::string value);

    public: std::string getId();

    public: std::string getName();

    public: std::string getType();

    public: std::string getExpiration();

    public: std::string getEncryption();

    public: std::string getNumber();

    public: std::string getTenderType();

    public: std::string getTransactionType();

    public: std::string getAba();

    public: std::string getAccount();

    public: std::string getAccountType();

    public: std::string getAuthorizationCode();

    public: std::string getCheckNumber();

    public: std::string getCheckType();

    public: std::string getDriversLicense();

    public: std::string getMagneticInkCheckReader();

    public: std::string getLastFour();

    public: bool isDefault();

    public: HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

    public: Document toXmlDoc();

    public: std::string view();

    public: Document toValidationInfoDoc();

    public: Node toValidationInfoNode(Document document);

    public: std::string validationInfo();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_PAYMENT_H
