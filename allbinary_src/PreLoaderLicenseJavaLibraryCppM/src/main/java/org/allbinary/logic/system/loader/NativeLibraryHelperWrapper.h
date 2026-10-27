
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_NATIVELIBRARYHELPERWRAPPER_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_NATIVELIBRARYHELPERWRAPPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/ClassLoader.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NativeLibraryClassLoader;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NativeLibraryHelperWrapper
            : public virtual Object
         {

    private: std::string libraryName;

    private: ClassLoader* loader;

    private: Object* anyType;

public: NativeLibraryHelperWrapper(std::string libraryName);

                //@Throws(Exception.constructor)
            
    public: void load();

    public: void unload();

    public: std::string toString();

    public: std::string getLibraryName();

    public: void setLibraryName(std::string libraryName);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_NATIVELIBRARYHELPERWRAPPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_NATIVELIBRARYHELPERWRAPPER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_NATIVELIBRARYHELPERWRAPPER_H_COMPLETE
        #if __has_include(<java/lang/reflect/Constructor.h>)
#include <java/lang/reflect/Constructor.h>
#endif
#if __has_include(<java/lang/reflect/Method.h>)
#include <java/lang/reflect/Method.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/system/loader/NativeLibraryClassLoader.h")
#include "org/allbinary/logic/system/loader/NativeLibraryClassLoader.h"
#endif

        #endif
    
