
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORYVIEW_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORYVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/Arrays.h>
#include <org/allbinary/business/category/CategoryView.h>
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class ThemeValidation;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class StoreThemeCategoryInterface;
class ThemeComparator;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreThemeCategoryView: public CategoryView, public DomNodeInterface {

public: StoreThemeCategoryView(StoreThemeCategoryInterface* categoryInterface);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORYVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORYVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORYVIEW_H_COMPLETE
        #if __has_include(<java/util/Arrays.h>)
#include <java/util/Arrays.h>
#endif
#if __has_include(<org/allbinary/business/category/CategoryView.h>)
#include <org/allbinary/business/category/CategoryView.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/theme/ThemeValidation.h>)
#include <org/allbinary/logic/visual/theme/ThemeValidation.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/category/store/theme/StoreThemeCategoryInterface.h")
#include "org/allbinary/business/category/store/theme/StoreThemeCategoryInterface.h"
#endif
#if __has_include("org/allbinary/business/category/store/theme/ThemeComparator.h")
#include "org/allbinary/business/category/store/theme/ThemeComparator.h"
#endif

        #endif
    
