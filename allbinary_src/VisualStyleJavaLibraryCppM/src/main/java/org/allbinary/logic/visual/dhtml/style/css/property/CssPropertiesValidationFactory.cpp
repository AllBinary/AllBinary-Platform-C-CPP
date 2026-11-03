
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_CSSPROPERTIESVALIDATIONFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_CSSPROPERTIESVALIDATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/style/css/property/CssPropertiesValidationFactory.h"
        

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

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/dhtml/style/css/property/CssPropertyData.h"
#include "org/allbinary/logic/visual/dhtml/style/css/property/CssPropertyValidationFactory.h"


CssPropertiesValidationFactory::CssPropertiesValidationFactory(){
}


                //@Throws(Exception.constructor)
            
    auto CssPropertiesValidationFactory::getInstance(NodeList* nodeList) -> BasicArrayList*{

    BasicArrayList* propertiesVector = new BasicArrayListD();;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* node = nodeList->item(index);;
    

                        if(node->getNodeName()->compareTo(CssPropertyData::getInstance()->NAME) == 0)
                        
                                    {
                                    
    ValidationInterface* cssPropertyValidationInterface = dynamic_cast<ValidationInterface*>(CssPropertyValidationFactory::getInstance(node));;
    
propertiesVector->add(cssPropertyValidationInterface);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return propertiesVector;
    
}


    auto CssPropertiesValidationFactory::getInstance(HashMap<Object*, Object*>* hashMap) -> BasicArrayList*{

    BasicArrayList* styles = new BasicArrayListD();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return styles;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_CSSPROPERTIESVALIDATIONFACTORY_CPP
