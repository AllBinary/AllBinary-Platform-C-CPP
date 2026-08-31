
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/Arrays.h>

      
#include <org/allbinary/business/category/CategoryView.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/visual/theme/ThemeValidation.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreThemeCategoryInterface.h"
#include "ThemeComparator.h"

class StoreThemeCategoryView: public CategoryView: public DomNodeInterface {
        

public constructor (StoreThemeCategoryInterface categoryInterface){
            super(categoryInterface as StoreThemeCategoryInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = super.toXmlNode(document)!;;
    

    storeThemeCategoryInterface: StoreThemeCategoryInterface = this.getCategoryInterface() as StoreThemeCategoryInterface;;
    

    themeValidationArray: std::vector<ThemeValidation> = storeThemeCategoryInterface!.getThemes()!.toArray() as ThemeValidation[];;
    
Arrays.sort(themeValidationArray, new ThemeComparator());
    

    size: int32_t = themeValidationArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    themeValidation: ThemeValidation = themeValidationArray[index]! as ThemeValidation;;
    
node.appendChild(themeValidation!.toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

