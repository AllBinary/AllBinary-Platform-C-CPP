
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
        



            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericStoreTransformInfoObjectConfig.h"

class OverrideStoreTransformInfoObjectConfig: public GenericStoreTransformInfoObjectConfig {

public: OverrideStoreTransformInfoObjectConfig(Object abeClientInformation, Object transformInfoInterface){
            super(abeClientInformation, transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: OverrideStoreTransformInfoObjectConfig(Object abeClientInformation, Object transformInfoInterface, Object document){
            super(abeClientInformation, transformInfoInterface, document);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


public: OverrideStoreTransformInfoObjectConfig(Object abeClientInformation, Object transformInfoInterface, std::string name, std::string type){
            super(abeClientInformation, transformInfoInterface, name, type);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


                //@Throws(Exception.constructor)
            
    protected: Document generate(Document objectConfigDocument){

    Document newObjectConfigDocument = super.generate(objectConfigDocument);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newObjectConfigDocument;
    
}


};

            

