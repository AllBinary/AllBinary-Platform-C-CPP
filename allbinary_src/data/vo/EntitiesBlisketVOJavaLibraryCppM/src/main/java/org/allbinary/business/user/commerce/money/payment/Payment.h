
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
        

    private: name: string;

    private: expiration: string;

    private: encryption: string;

    private: number: string;

    private: id: string;

    private: type: string;

    private: tenderType: string;

    private: transactionType: string;

    private: aba: string;

    private: account: string;

    private: accountType: string;

    private: authorizationCode: string;

    private: checkNumber: string;

    private: checkType: string;

    private: driversLicense: string;

    private: magneticInkCheckReader: string;

    private: isDefault: bool = false;

public constructor (HashMap<any, any> payment);

public constructor (ServletRequest request);

public constructor ();

    public Boolean isValid();

    public setTenderType(string value);

    public setTransactionType(string value);

    public setAuthorizationCode(string value);

    public setCheckType(string value);

    public setCheckNumber(string value);

    public setDriversLicense(string value);

    public setMagneticInkCheckReader(string value);

    public setAba(string value);

    public setAccountType(string value);

    public setName(string value);

    public setType(string value);

    public setExpiration(string value);

    public setNumber(string value);

    public string getId();

    public string getName();

    public string getType();

    public string getExpiration();

    public string getEncryption();

    public string getNumber();

    public string getTenderType();

    public string getTransactionType();

    public string getAba();

    public string getAccount();

    public string getAccountType();

    public string getAuthorizationCode();

    public string getCheckNumber();

    public string getCheckType();

    public string getDriversLicense();

    public string getMagneticInkCheckReader();

    public string getLastFour();

    public bool isDefault();

    public HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

    public Document toXmlDoc();

    public string view();

    public Document toValidationInfoDoc();

    public Node toValidationInfoNode(Document document);

    public string validationInfo();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_PAYMENT_H
