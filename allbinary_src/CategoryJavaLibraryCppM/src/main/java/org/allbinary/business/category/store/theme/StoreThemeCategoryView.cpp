
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
        
            #include "java/lang/Exception.h"
        
#include <java/util/Arrays.h>

      
#include <org/allbinary/business/category/CategoryView.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/visual/theme/ThemeValidation.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreThemeCategoryInterface.h"
#include "ThemeComparator.h"

class StoreThemeCategoryView: public CategoryView, public DomNodeInterface {

public: StoreThemeCategoryView(StoreThemeCategoryInterface categoryInterface) : CategoryView(categoryInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = super.toXmlNode(document);;
    

    StoreThemeCategoryInterface storeThemeCategoryInterface = this->getCategoryInterface();;
    

    std::vector<ThemeValidation> themeValidationArray = storeThemeCategoryInterface.getThemes().toArray() as ThemeValidation[];;
    
Arrays::sort(themeValidationArray, ThemeComparator());
    

    int32_t size = themeValidationArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    ThemeValidation themeValidation = themeValidationArray[index];;
    
node.appendChild(themeValidation.toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

