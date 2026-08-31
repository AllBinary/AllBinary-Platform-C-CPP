
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCEFACTORY_H
        #define ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCEFACTORY_H

            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullServiceReference.h"

class NullServiceReferenceFactory
            : public Object
         {
        

    private: static const instance: NullServiceReferenceFactory = new NullServiceReferenceFactory();

    public static NullServiceReferenceFactory getInstance();

    public NULL_SERVICE_REFERENCE: NullServiceReference = new NullServiceReference();

};

            


        #endif //ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCEFACTORY_H
