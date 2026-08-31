
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ADDRESS_STREETADDRESS_H
        #define ORG_ALLBINARY_BUSINESS_USER_ADDRESS_STREETADDRESS_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StreetAddressData.h"

class StreetAddress
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: id: string;

    private: name: string;

    private: street: string;

    private: city: string;

    private: state: string;

    private: code: string;

    private: country: string;

    private: isDefault: bool = false;

public constructor ();

public constructor (Node node);

public constructor (StreetAddress streetAddress);

public constructor (HttpServletRequest request);

public constructor (string name, string street, string city, string state, string code, string country);

public constructor (HashMap<any, any> address);

    log();

    public setId(string id);

    public setName(string name);

    public setStreet(string value);

    public setCity(string value);

    public setState(string value);

    public setCode(string value);

    public setCountry(string value);

    public string getName();

    public string getStreet();

    public string getCity();

    public string getState();

    public string getCode();

    public string getCountry();

    public string getId();

    public bool isDefault();

    public Boolean isEmpty();

    public Boolean isValid();

    public string validationInfo();

    Document toValidationInfoDoc();

    Node toValidationInfoNode(Document document);

    public HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ADDRESS_STREETADDRESS_H
