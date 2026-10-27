
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NullServiceReference;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullServiceReferenceFactory
            : public virtual Object
         {

    private: static NullServiceReferenceFactory* instance_owner();
    private: static NullServiceReferenceFactory* instance;

    public: static NullServiceReferenceFactory* getInstance();


            
    public: NullServiceReferenceFactory();
        
    public: NullServiceReference* NULL_SERVICE_REFERENCE;

};

            


        #endif //ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCEFACTORY_H_COMPLETE)
        #define ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCEFACTORY_H_COMPLETE
        #if __has_include("org/osgi/framework/NullServiceReference.h")
#include "org/osgi/framework/NullServiceReference.h"
#endif

        #endif
    
