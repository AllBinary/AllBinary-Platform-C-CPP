
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_OVERRIDESTORETRANSFORMINFOOBJECTCONFIG_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_OVERRIDESTORETRANSFORMINFOOBJECTCONFIG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/objectConfig/OverrideStoreTransformInfoObjectConfig.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/objectConfig/GenericStoreTransformInfoObjectConfig.h"


OverrideStoreTransformInfoObjectConfig::OverrideStoreTransformInfoObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) : GenericStoreTransformInfoObjectConfig(abeClientInformation, transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


OverrideStoreTransformInfoObjectConfig::OverrideStoreTransformInfoObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document) : GenericStoreTransformInfoObjectConfig(abeClientInformation, transformInfoInterface, document){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


OverrideStoreTransformInfoObjectConfig::OverrideStoreTransformInfoObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, std::string name, std::string type) : GenericStoreTransformInfoObjectConfig(abeClientInformation, transformInfoInterface, name, type){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setDocument(this->generate(this->toXmlDoc()));
    
}


                //@Throws(Exception.constructor)
            
    auto OverrideStoreTransformInfoObjectConfig::generate(Document* objectConfigDocument) -> Document*{

    Document* newObjectConfigDocument = GenericStoreTransformInfoObjectConfig::generate(objectConfigDocument);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newObjectConfigDocument;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_OVERRIDESTORETRANSFORMINFOOBJECTCONFIG_CPP
