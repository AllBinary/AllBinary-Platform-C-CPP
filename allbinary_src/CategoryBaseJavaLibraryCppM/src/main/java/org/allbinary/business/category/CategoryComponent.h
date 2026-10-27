
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYCOMPONENT_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYCOMPONENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class DomDocumentHelper;
#include <org/allbinary/logic/visual/transform/TransformInterface.h>
class TransformDocumentInterface;
class TransformInfoInterface;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/CategoryView.h"
class CategoryInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryComponent: public CategoryView, public TransformInterface {

public: CategoryComponent(CategoryInterface* categoryInterface);

    public: int32_t NO_TYPE = 0;

    public: int32_t getTypeId();

    public: TransformDocumentInterface* getTransformDocumentInterface();

                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface* getTransformInfoInterface();

    public: void setTransformDocumentInterface(TransformDocumentInterface* viewDocumentInterface);

                //@Throws(Exception.constructor)
            
    public: Document* toXmlDoc();

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYCOMPONENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYCOMPONENT_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYCOMPONENT_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/TransformInterface.h>)
#include <org/allbinary/logic/visual/transform/TransformInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>)
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include("org/allbinary/business/category/CategoryView.h")
#include "org/allbinary/business/category/CategoryView.h"
#endif
#if __has_include("org/allbinary/business/category/CategoryInterface.h")
#include "org/allbinary/business/category/CategoryInterface.h"
#endif

        #endif
    
