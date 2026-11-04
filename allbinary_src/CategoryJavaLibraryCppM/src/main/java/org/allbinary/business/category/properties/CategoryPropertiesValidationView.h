
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESVALIDATIONVIEW_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESVALIDATIONVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
class LogUtil;
#include <org/allbinary/logic/control/validate/ValidationInterface.h>
class StringMaker;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/properties/CategoryPropertiesView.h"
class CategoryPropertiesInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryPropertiesValidationView: public CategoryPropertiesView, public virtual ValidationInterface {

    /*protected*/ public: LogUtil* logUtil;

public: CategoryPropertiesValidationView(CategoryPropertiesInterface* categoryPropertiesInterface);

                //@Throws(Exception.constructor)
            
    public: bool isValid();

                //@Throws(Exception.constructor)
            
    public: std::string validationInfo();

                //@Throws(Exception.constructor)
            
    public: Document* toValidationInfoDoc();

                //@Throws(Exception.constructor)
            
    public: Node* toValidationInfoNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESVALIDATIONVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESVALIDATIONVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESVALIDATIONVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/ValidationInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/category/properties/CategoryPropertiesView.h")
#include "org/allbinary/business/category/properties/CategoryPropertiesView.h"
#endif
#if __has_include("org/allbinary/business/category/properties/CategoryPropertiesInterface.h")
#include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"
#endif

        #endif
    
