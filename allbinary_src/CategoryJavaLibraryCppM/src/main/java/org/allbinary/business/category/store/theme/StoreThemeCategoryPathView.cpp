
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORYPATHVIEW_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORYPATHVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/store/theme/StoreThemeCategoryPathView.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/category/CategoryView.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/visual/theme/ThemeInterface.h>

      
#include <org/allbinary/logic/visual/theme/ThemePropertiesView.h>

      
#include <org/allbinary/logic/visual/theme/ThemeValidation.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/store/theme/StoreThemeCategoryInterface.h"


StoreThemeCategoryPathView::StoreThemeCategoryPathView(StoreThemeCategoryInterface* categoryInterface) : CategoryView(dynamic_cast<StoreThemeCategoryInterface*>(categoryInterface)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto StoreThemeCategoryPathView::toXmlNode(Document* document) -> Node*{

    Node* node = CategoryView::toXmlNode(document);;
    

    StoreThemeCategoryInterface* storeThemeCategoryInterface = dynamic_cast<StoreThemeCategoryInterface*>(this->getCategoryInterface());;
    

    std::vector<Object*> themeArray = storeThemeCategoryInterface->getThemes()->toArray();;
    

    int32_t size = themeArray.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    ThemeValidation* themeValidation = dynamic_cast<ThemeValidation*>(themeArray[i]);;
    

    DomNodeInterface* domNodeInterface = dynamic_cast<DomNodeInterface*>(new ThemePropertiesView(dynamic_cast<ThemeInterface*>(themeValidation)));;
    
node->appendChild(domNodeInterface->toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORYPATHVIEW_CPP
