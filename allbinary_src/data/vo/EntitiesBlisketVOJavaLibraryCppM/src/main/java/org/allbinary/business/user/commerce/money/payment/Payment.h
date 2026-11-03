
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>
class ServletRequest;
class EntryData;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class ModDomHelper;
class StdUtil;
class SuperCrypt;
class StringUtil;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/PaymentInterface.h"
class PaymentData;
class CreditCardType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Payment
            : public virtual Object
        , public virtual PaymentInterface, public virtual DomNodeInterface {

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

    private: bool isDefault_ = false;

public: Payment(HashMap<Object*, Object*>* payment);

public: Payment(ServletRequest* request);

public: Payment();

    public: bool isValid();

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

    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

    public: Document* toXmlDoc();

    public: std::string view();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

    public: std::string validationInfo();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_PAYMENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_PAYMENT_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_PAYMENT_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/ServletRequest.h>)
#include <javax/servlet/ServletRequest.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/crypt/SuperCrypt.h>)
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/PaymentInterface.h")
#include "org/allbinary/business/user/commerce/money/payment/PaymentInterface.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/PaymentData.h")
#include "org/allbinary/business/user/commerce/money/payment/PaymentData.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/CreditCardType.h")
#include "org/allbinary/business/user/commerce/money/payment/CreditCardType.h"
#endif

        #endif
    
