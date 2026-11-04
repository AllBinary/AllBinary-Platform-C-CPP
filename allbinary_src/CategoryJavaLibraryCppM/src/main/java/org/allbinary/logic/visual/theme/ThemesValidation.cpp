
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMESVALIDATION_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMESVALIDATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/theme/ThemesValidation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/control/validate/Validation.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/theme/ThemesData.h"


ThemesValidation::ThemesValidation(){
this->themeVector= new BasicArrayListD();
    
}


ThemesValidation::ThemesValidation(Node* node){
}


ThemesValidation::ThemesValidation(HashMap<Object*, Object*>* hashMap){
}


    auto ThemesValidation::isValid() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    
}


    auto ThemesValidation::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto ThemesValidation::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto ThemesValidation::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto ThemesValidation::toXmlNode(Document* document) -> Node*{

    Node* node = document->createElement(ThemesData::getInstance()->NAME);;
    

    int32_t size = this->themeVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    DomNodeInterface* themeDomNodeInterface = dynamic_cast<DomNodeInterface*>(this->themeVector->get(i));;
    
node->appendChild(themeDomNodeInterface->toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMESVALIDATION_CPP
