
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINFOCUSTOMURITRANSFORMER_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINFOCUSTOMURITRANSFORMER_H

            #include "../../../../../java/lang/Exception.h"
        
#include <javax/xml/transform/URIResolver.h>

      
#include <org/allbinary/data/tree/dom/BasicUriResolver.h>

      
#include <org/allbinary/data/tree/dom/CustomUriResolver.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicTransformer.h"

class TransformInfoCustomUriTransformer: public BasicTransformer {
        

public constructor (AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMINFOCUSTOMURITRANSFORMER_H
