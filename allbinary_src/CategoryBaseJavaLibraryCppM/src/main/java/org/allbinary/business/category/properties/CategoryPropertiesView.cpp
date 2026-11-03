
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESVIEW_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/properties/CategoryPropertiesView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Element.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"


CategoryPropertiesView::CategoryPropertiesView(CategoryPropertiesInterface* categoryPropertiesInterface){
this->categoryPropertiesInterface= categoryPropertiesInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto CategoryPropertiesView::toXmlNode(Document* document) -> Node*{

    Node* categoryNode = document->createElement(CategoryData::getInstance()->NAME);;
    

    Element* newCategoryNode = dynamic_cast<Element*>(categoryNode);;
    
newCategoryNode->setAttribute(CategoryData::getInstance()->LABEL, this->categoryPropertiesInterface->getValue());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return categoryNode;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESVIEW_CPP
