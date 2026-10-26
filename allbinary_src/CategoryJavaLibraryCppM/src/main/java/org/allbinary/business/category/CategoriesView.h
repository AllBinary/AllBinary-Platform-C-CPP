
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORIESVIEW_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORIESVIEW_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryInterface.h"
#include "CategoryView.h"

class CategoriesView
            : public Object
        : public DomNodeInterface {

    private: CategoryInterface categoryInterface;

public: CategoriesView(CategoryInterface categoryInterface);

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORIESVIEW_H
