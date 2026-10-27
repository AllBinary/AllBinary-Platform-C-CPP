
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/CategoryView.h"
#include "org/allbinary/business/category/CategoryInterface.h"

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
