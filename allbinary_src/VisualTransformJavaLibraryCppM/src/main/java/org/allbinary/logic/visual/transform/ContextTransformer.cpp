
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <javax/xml/transform/URIResolver.h>

      
#include <org/allbinary/data/tree/dom/BasicUriResolver.h>

      
#include <org/allbinary/data/tree/dom/ContextUriResolver.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicTransformer.h"

class ContextTransformer: public BasicTransformer {

public: ContextTransformer(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface){
            super(abeClientInformation, transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setURIResolver(ContextUriResolver(this->getURIResolver() as BasicUriResolver) as URIResolver);
    
}


};

            

