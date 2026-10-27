
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
        



        #ifndef DYNAMIC_NATIVELIBRARYHELPER_H
        #define DYNAMIC_NATIVELIBRARYHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NativeLibraryHelper
            : public virtual Object
         {

    private: std::string library;

public: NativeLibraryHelper(std::string library);

    public: void load();

};

            


        #endif //DYNAMIC_NATIVELIBRARYHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(DYNAMIC_NATIVELIBRARYHELPER_H_COMPLETE)
        #define DYNAMIC_NATIVELIBRARYHELPER_H_COMPLETE
        
        #endif
    
