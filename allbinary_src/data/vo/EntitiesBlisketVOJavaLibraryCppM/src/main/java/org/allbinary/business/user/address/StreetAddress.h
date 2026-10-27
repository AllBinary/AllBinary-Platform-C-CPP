
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
#include <java/util/Set.h>
class HttpServletRequest;
class DomNodeHelper;
class DomSearchHelper;
class ModDomHelper;
class StdUtil;
class LogUtil;
class StringMaker;
class StringUtil;
class StringValidationUtil;
class CommonStrings;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class StreetAddressData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StreetAddress
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string id;

    private: std::string name;

    private: std::string street;

    private: std::string city;

    private: std::string state;

    private: std::string code;

    private: std::string country;

    private: bool isDefault_ = false;

public: StreetAddress();

public: StreetAddress(Node* node);

public: StreetAddress(StreetAddress* streetAddress);

public: StreetAddress(HttpServletRequest* request);

public: StreetAddress(std::string name, std::string street, std::string city, std::string state, std::string code, std::string country);

public: StreetAddress(HashMap<Object*, Object*>* address);

    private: void log();

    public: void setId(std::string id);

    public: void setName(std::string name);

    public: void setStreet(std::string value);

    public: void setCity(std::string value);

    public: void setState(std::string value);

    public: void setCode(std::string value);

    public: void setCountry(std::string value);

    public: std::string getName();

    public: std::string getStreet();

    public: std::string getCity();

    public: std::string getState();

    public: std::string getCode();

    public: std::string getCountry();

    public: std::string getId();

    public: bool isDefault();

    public: bool isEmpty();

    public: bool isValid();

    public: std::string validationInfo();

    private: Document* toValidationInfoDoc();

    private: Node* toValidationInfoNode(Document* document);

    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ADDRESS_STREETADDRESS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_ADDRESS_STREETADDRESS_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_ADDRESS_STREETADDRESS_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/user/address/StreetAddressData.h")
#include "org/allbinary/business/user/address/StreetAddressData.h"
#endif

        #endif
    
