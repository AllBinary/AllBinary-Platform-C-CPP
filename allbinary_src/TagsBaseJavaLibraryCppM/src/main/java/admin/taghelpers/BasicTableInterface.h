
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
        



        #ifndef ADMIN_TAGHELPERS_BASICTABLEINTERFACE_H
        #define ADMIN_TAGHELPERS_BASICTABLEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicTableInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual std::string drop() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string create() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string restore() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string backup() = 0;

};

            


        #endif //ADMIN_TAGHELPERS_BASICTABLEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_BASICTABLEINTERFACE_H_COMPLETE)
        #define ADMIN_TAGHELPERS_BASICTABLEINTERFACE_H_COMPLETE
        
        #endif
    
