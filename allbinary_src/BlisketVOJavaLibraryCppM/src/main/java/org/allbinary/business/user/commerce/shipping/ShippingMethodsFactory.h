
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODSFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODSFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class BasicArrayListD;
class DynamicObjectData;
class StoreFrontInterface;
class BasicWeightShippingModuleView;
class NoShippingModuleView;
class ShippingInterface;
class DomNodeHelper;
class DomSearchHelper;
class DomDocumentHelper;
class FREEBLISKET_PATH_GLOBALS;
class URLGLOBALS;

class CryptFileReader;
class AbPath;
class AbPathData;
class StringMaker;
class AbeFactory;
class AbeClientInformationInterface;
class TransformInfoObjectConfigData;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ShippingMethodsData;
class ShippingMethodData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ShippingMethodsFactory
            : public virtual Object
         {

    private: static inline const std::string SHIPPINGMETHODSFILEPATHSTRING;

                    static int32_t initResult;
                static int32_t init();
            
    private: static inline const std::string SHIPPINGMETHODSFILENAME = "shippingMethods.xml";

    private: ShippingInterface* defaultShippingMethodInterface;

    private: Document* document;

    private: BasicArrayList* shippingVector;

public: ShippingMethodsFactory(AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getInstance();

    public: ShippingInterface* getDefaultInstance();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODSFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODSFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODSFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/DynamicObjectData.h>)
#include <org/allbinary/business/DynamicObjectData.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/shipping/modules/BasicWeightShippingModuleView.h>)
#include <org/allbinary/business/user/commerce/shipping/modules/BasicWeightShippingModuleView.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/shipping/modules/NoShippingModuleView.h>)
#include <org/allbinary/business/user/commerce/shipping/modules/NoShippingModuleView.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>)
#include <org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>
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
#if __has_include(<org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>)
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif

#if __has_include(<org/allbinary/logic/control/crypt/file/CryptFileReader.h>)
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/loader/AbeFactory.h>)
#include <org/allbinary/logic/system/loader/AbeFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>
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
#if __has_include("org/allbinary/business/user/commerce/shipping/ShippingMethodsData.h")
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodsData.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/shipping/ShippingMethodData.h")
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodData.h"
#endif

        #endif
    
