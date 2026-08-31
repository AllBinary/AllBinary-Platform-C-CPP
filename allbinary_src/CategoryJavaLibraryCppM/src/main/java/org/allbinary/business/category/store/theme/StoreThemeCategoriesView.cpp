
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
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
        

    private: categoryInterface: StoreThemeCategoryInterface;

public constructor (StoreThemeCategoryInterface categoryInterface){

            super();
        this.categoryInterface= categoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = new StoreThemeCategoryView(this.categoryInterface).toXmlNode(document)!;;
    

    childArray: std::vector<any> = this.categoryInterface!.getChildNodes()!.toArray()!;;
    

    size: int32_t = childArray!.length
                ;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    childCategoryInterface: CategoryInterface = childArray[i]! as CategoryInterface;;
    

    childCategoryNode: Node = new StoreThemeCategoriesView(childCategoryInterface as StoreThemeCategoryInterface).toXmlNode(document)!;;
    
node.appendChild(childCategoryNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

