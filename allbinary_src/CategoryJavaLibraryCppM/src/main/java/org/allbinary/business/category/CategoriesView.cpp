
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORIESVIEW_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORIESVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/CategoriesView.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/CategoryInterface.h"
#include "org/allbinary/business/category/CategoryView.h"


CategoriesView::CategoriesView(CategoryInterface* categoryInterface){
this->categoryInterface= categoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto CategoriesView::toXmlNode(Document* document) -> Node*{

    Node* node = (new CategoryView(this->categoryInterface))->toXmlNode(document);;
    

    std::vector<Object*> childArray = this->categoryInterface->getChildNodes()->toArray();;
    

    int32_t size = childArray.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    CategoryInterface* childCategoryInterface = dynamic_cast<CategoryInterface*>(childArray[i]);;
    

    Node* childCategoryNode = (new CategoriesView(childCategoryInterface))->toXmlNode(document);;
    
node->appendChild(childCategoryNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORIESVIEW_CPP
