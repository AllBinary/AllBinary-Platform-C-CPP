
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CssProperty.h"

class CssPropertyView
            : public Object
        : public DomNodeInterface {

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: CssProperty cssProperty;

public: CssPropertyView(std::string name){
this->cssProperty= CssProperty(name);
    
}


public: CssPropertyView(Node node){
this->cssProperty= CssProperty(node);
    
}


    public: CssProperty getProperty(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cssProperty;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cssProperty.toXmlNode(document);;
    
}


};

            

