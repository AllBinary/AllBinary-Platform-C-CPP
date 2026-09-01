
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
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/category/CategoryView.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/visual/theme/ThemeInterface.h>

      
#include <org/allbinary/logic/visual/theme/ThemePropertiesView.h>

      
#include <org/allbinary/logic/visual/theme/ThemeValidation.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreThemeCategoryInterface.h"

class StoreThemeCategoryPathView: public CategoryView, public DomNodeInterface {

public: StoreThemeCategoryPathView(StoreThemeCategoryInterface categoryInterface){
            super(categoryInterface as StoreThemeCategoryInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = super.toXmlNode(document);;
    

    StoreThemeCategoryInterface storeThemeCategoryInterface = this->getCategoryInterface() as StoreThemeCategoryInterface;;
    

    std::vector<Object*> themeArray = storeThemeCategoryInterface.getThemes().toArray();;
    

    int32_t size = themeArray.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    ThemeValidation themeValidation = themeArray[i]! as ThemeValidation;;
    

    DomNodeInterface domNodeInterface = ThemePropertiesView(themeValidation as ThemeInterface) as DomNodeInterface;;
    
node.appendChild(domNodeInterface.toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

