
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_STYLE_CSS_TEMPLATE_RETAIL_EDITCSSSTYLEVALIDATION_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_STYLE_CSS_TEMPLATE_RETAIL_EDITCSSSTYLEVALIDATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/template/customizer/includes/style/css/template/retail/EditCssStyleValidation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/allbinary/logic/visual/dhtml/style/StyleData.h>

      
#include <org/allbinary/logic/visual/dhtml/style/StylesData.h>

      
#include <org/allbinary/logic/visual/dhtml/style/color/ColorsView.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/template/customizer/includes/style/css/template/retail/CssStyleValidation.h"


EditCssStyleValidation::EditCssStyleValidation(){
}


EditCssStyleValidation::EditCssStyleValidation(Document* document) : CssStyleValidation(document){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


EditCssStyleValidation::EditCssStyleValidation(HashMap<Object*, Object*>* hashMap) : CssStyleValidation(hashMap){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto EditCssStyleValidation::isValid() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CssStyleValidation::isValid();;
    
}


    auto EditCssStyleValidation::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CssStyleValidation::validationInfo();;
    
}


    auto EditCssStyleValidation::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto EditCssStyleValidation::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto EditCssStyleValidation::toXmlNode(Document* document) -> Node*{

    Node* node = document->createElement(StylesData::getInstance()->NAME);;
    

    Node* styleNode = document->createElement(StyleData::getInstance()->NAME);;
    
node->appendChild(styleNode);
    
styleNode->appendChild((new ColorsView())->toXmlNode(document));
    

    int32_t size = this->cssStyleElementVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    DomNodeInterface* styleDomNodeInterface = dynamic_cast<DomNodeInterface*>(cssStyleElementVector.get(i));;
    
styleNode->appendChild(styleDomNodeInterface->toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_STYLE_CSS_TEMPLATE_RETAIL_EDITCSSSTYLEVALIDATION_CPP
