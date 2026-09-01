
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
        



            #include "../../../../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/allbinary/logic/visual/dhtml/style/StyleData.h>

      
#include <org/allbinary/logic/visual/dhtml/style/StylesData.h>

      
#include <org/allbinary/logic/visual/dhtml/style/color/ColorsView.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CssStyleValidation.h"

class EditCssStyleValidation: public CssStyleValidation, public ValidationInterface, public DomNodeInterface {

public: EditCssStyleValidation(){
}


public: EditCssStyleValidation(Document document){
            super(document);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: EditCssStyleValidation(HashMap<any, any> hashMap){
            super(hashMap);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: Boolean isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.isValid();;
    
}


    public: std::string validationInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.validationInfo();;
    
}


    public: Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = document.createElement(StylesData::getInstance().NAME);;
    

    Node styleNode = document.createElement(StyleData::getInstance().NAME);;
    
node.appendChild(styleNode);
    
styleNode.appendChild(ColorsView().toXmlNode(document));
    

    int32_t size = this->cssStyleElementVector.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    DomNodeInterface styleDomNodeInterface = cssStyleElementVector.get(i) as DomNodeInterface;;
    
styleNode.appendChild(styleDomNodeInterface.toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

