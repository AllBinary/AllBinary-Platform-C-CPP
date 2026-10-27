
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
        



        #ifndef ADMIN_TAGHELPERS_MODIFYTABLEINTERFACE_H
        #define ADMIN_TAGHELPERS_MODIFYTABLEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ModifyTableInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual std::string insert() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string delete_() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string update() = 0;

};

            


        #endif //ADMIN_TAGHELPERS_MODIFYTABLEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_MODIFYTABLEINTERFACE_H_COMPLETE)
        #define ADMIN_TAGHELPERS_MODIFYTABLEINTERFACE_H_COMPLETE
        
        #endif
    
