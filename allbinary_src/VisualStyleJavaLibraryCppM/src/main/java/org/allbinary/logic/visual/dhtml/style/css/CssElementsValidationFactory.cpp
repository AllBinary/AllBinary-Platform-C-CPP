
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_CSSELEMENTSVALIDATIONFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_CSSELEMENTSVALIDATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/style/css/CssElementsValidationFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/dhtml/style/css/CssElementValidationFactory.h"


CssElementsValidationFactory::CssElementsValidationFactory(){
}


                //@Throws(Exception.constructor)
            
    auto CssElementsValidationFactory::getInstance(BasicArrayList* cssElementStyleNodeList) -> BasicArrayList*{

    BasicArrayList* styles = new BasicArrayListD();;
    

    int32_t size = cssElementStyleNodeList->size();;
    

    Node* cssElementStyleNode;;
    

    ValidationInterface* cssValidationInterface;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
cssElementStyleNode= dynamic_cast<Node*>(cssElementStyleNodeList->get(index));
    
cssValidationInterface= dynamic_cast<ValidationInterface*>(CssElementValidationFactory::getInstance(cssElementStyleNode));
    
styles->add(cssValidationInterface);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return styles;
    
}


    auto CssElementsValidationFactory::getInstance(HashMap<Object*, Object*>* hashMap) -> BasicArrayList*{

    BasicArrayList* styles = new BasicArrayListD();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return styles;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_CSSELEMENTSVALIDATIONFACTORY_CPP
