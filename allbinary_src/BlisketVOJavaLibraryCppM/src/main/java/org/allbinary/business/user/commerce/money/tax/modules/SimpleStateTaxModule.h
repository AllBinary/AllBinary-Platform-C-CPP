
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_MODULES_SIMPLESTATETAXMODULE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_MODULES_SIMPLESTATETAXMODULE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
            #include "java/lang/Float.h"
        
class StoreFrontInterface;
class StreetAddress;
class StreetAddressData;
class TaxData;
class DomNodeHelper;
class DomSearchHelper;
class DomDocumentHelper;
class XmlDocumentHelper;
class FREEBLISKET_PATH_GLOBALS;
class URLGLOBALS;
class LogUtil;
class CryptFileReader;
class AbPath;
class StringMaker;
class StringValidationUtil;
class TransformInfoObjectConfigData;
class CommonPhoneStrings;
class CommonStrings;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/tax/modules/TaxModuleInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SimpleStateTaxModule
            : public virtual Object
        , public virtual TaxModuleInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: StreetAddress* streetAddress;

    private: StoreFrontInterface* storeFrontInterface;

    private: const std::string ALL;

    private: const std::string STATETAXPATH = "/generic/taxes/";

    private: const std::string STATETAXFILE = "stateTaxation.xml";

    private: Document* document;

public: SimpleStateTaxModule();

                //@Throws(Exception.constructor)
            
    public: float getTaxRate(StreetAddress* streetAddress, StoreFrontInterface* storeFrontInterface);

    public: bool isValid(StreetAddress* streetAddress, StoreFrontInterface* storeFrontInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_MODULES_SIMPLESTATETAXMODULE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_MODULES_SIMPLESTATETAXMODULE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_MODULES_SIMPLESTATETAXMODULE_H_COMPLETE
        #if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/address/StreetAddress.h>)
#include <org/allbinary/business/user/address/StreetAddress.h>
#endif
#if __has_include(<org/allbinary/business/user/address/StreetAddressData.h>)
#include <org/allbinary/business/user/address/StreetAddressData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/tax/components/TaxData.h>)
#include <org/allbinary/business/user/commerce/money/tax/components/TaxData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>)
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/crypt/file/CryptFileReader.h>)
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
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
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/money/tax/modules/TaxModuleInterface.h")
#include "org/allbinary/business/user/commerce/money/tax/modules/TaxModuleInterface.h"
#endif

        #endif
    
