
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILTER_VISITORFILEFILTER_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILTER_VISITORFILEFILTER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/io/File.h>
#include <java/io/FileFilter.h>
class AbFile;
class FileWrapperUtil;
class VisitorInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VisitorFileFilter
            : public virtual Object
        , public FileFilter {

    private: VisitorInterface* booleanVisitorInterface;

public: VisitorFileFilter(VisitorInterface* booleanVisitorInterface);

    public: bool accept(File* file);

    public: bool accept(AbFile* file);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILTER_VISITORFILEFILTER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_FILTER_VISITORFILEFILTER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILTER_VISITORFILEFILTER_H_COMPLETE
        #if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/io/FileFilter.h>)
#include <java/io/FileFilter.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FileWrapperUtil.h>)
#include <org/allbinary/logic/io/file/FileWrapperUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/visitor/VisitorInterface.h>)
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>
#endif

        #endif
    
