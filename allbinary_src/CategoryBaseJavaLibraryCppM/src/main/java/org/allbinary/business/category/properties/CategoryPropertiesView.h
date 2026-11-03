
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESVIEW_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class CategoryData;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class Document;
class Element;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CategoryPropertiesInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryPropertiesView
            : public virtual Object
        , public virtual DomNodeInterface {

    /*protected*/ public: CategoryPropertiesInterface* categoryPropertiesInterface;

public: CategoryPropertiesView(CategoryPropertiesInterface* categoryPropertiesInterface);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/business/category/CategoryData.h>)
#include <org/allbinary/business/category/CategoryData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Element.h>)
#include <org/w3c/dom/Element.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/category/properties/CategoryPropertiesInterface.h")
#include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"
#endif

        #endif
    
