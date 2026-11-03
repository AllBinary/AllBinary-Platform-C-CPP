
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYFILEVISITOR_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYFILEVISITOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/io/File.h>
#include <java/io/FileFilter.h>
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DirectoryFileVisitor
            : public virtual Object
        , public virtual VisitorInterface, public virtual FileFilter {

public: DirectoryFileVisitor();

    public: bool accept(java::io::File* arg0);

    public: Object* visit(Object* anyType);
    public: Object* visit(const std::string& anyType) { return visit(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Object* visit(BoxValue anyType) { return visit(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> Object* visit(const std::vector<BoxElement>& anyType) { return visit(JavaBoxes::toObject(anyType)); }

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYFILEVISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYFILEVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYFILEVISITOR_H_COMPLETE
        #if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/io/FileFilter.h>)
#include <java/io/FileFilter.h>
#endif
#if __has_include(<org/allbinary/logic/util/visitor/VisitorInterface.h>)
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>
#endif

        #endif
    
