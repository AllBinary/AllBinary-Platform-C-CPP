
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreThemeCategoryInterface.h"
#include "StoreThemeCategoryView.h"

class StoreThemeCategoriesView
            : public Object
        : public DomNodeInterface {

    private: StoreThemeCategoryInterface categoryInterface;

public: StoreThemeCategoriesView(StoreThemeCategoryInterface categoryInterface){
this->categoryInterface= categoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = StoreThemeCategoryView(this->categoryInterface).toXmlNode(document);;
    

    std::vector<Object*> childArray = this->categoryInterface.getChildNodes().toArray();;
    

    int32_t size = childArray.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    CategoryInterface childCategoryInterface = childArray[i];;
    

    Node childCategoryNode = StoreThemeCategoriesView(childCategoryInterface).toXmlNode(document);;
    
node.appendChild(childCategoryNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

