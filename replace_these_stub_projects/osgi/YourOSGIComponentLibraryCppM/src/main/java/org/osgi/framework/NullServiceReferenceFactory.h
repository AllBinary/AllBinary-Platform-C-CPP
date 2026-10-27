
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/osgi/framework/NullServiceReference.h"

class NullServiceReferenceFactory
            : public Object
         {

    private: static NullServiceReferenceFactory* instance() { static std::unique_ptr<NullServiceReferenceFactory> value(new NullServiceReferenceFactory()); return value.get(); }

    public: static NullServiceReferenceFactory* getInstance();

    public: NullServiceReference* NULL_SERVICE_REFERENCE = new NullServiceReference();

};

            


        #endif //ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCEFACTORY_H
