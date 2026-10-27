
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINFOCUSTOMURITRANSFORMER_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINFOCUSTOMURITRANSFORMER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/TransformInfoCustomUriTransformer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/xml/transform/URIResolver.h>

      
#include <org/allbinary/data/tree/dom/BasicUriResolver.h>

      
#include <org/allbinary/data/tree/dom/CustomUriResolver.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/BasicTransformer.h"


TransformInfoCustomUriTransformer::TransformInfoCustomUriTransformer(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) : BasicTransformer(abeClientInformation, transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface = dynamic_cast<TransformInfoObjectConfigInterface*>(TransformInfoObjectConfigAndManipulatorFactory::getInstance()->getInstance(abeClientInformation, transformInfoInterface));;
    
this->setURIResolver(dynamic_cast<URIResolver*>(new CustomUriResolver(transformInfoObjectConfigInterface->getImportUriPath(), dynamic_cast<BasicUriResolver*>(this->getURIResolver()))));
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINFOCUSTOMURITRANSFORMER_CPP
