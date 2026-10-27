
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILTER_VISITORFILEFILTER_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILTER_VISITORFILEFILTER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/filter/VisitorFileFilter.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/io/File.h>

      
#include <java/io/FileFilter.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileWrapperUtil.h>

      
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

VisitorFileFilter::VisitorFileFilter(VisitorInterface* booleanVisitorInterface){
this->booleanVisitorInterface= booleanVisitorInterface;
    
}


    auto VisitorFileFilter::accept(File* file) -> bool{

    AbFile* abFile = FileWrapperUtil::wrapFile(file);;
    

    bool isFileAcceptable = visit = this->booleanVisitorInterface->visit(abFile)visit
visit.
                    .valueOf();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isFileAcceptable || file->isDirectory();
    
}


    auto VisitorFileFilter::accept(AbFile* file) -> bool{

    bool isFileAcceptable = visit = this->booleanVisitorInterface->visit(file)visit
visit.
                    .valueOf();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isFileAcceptable || file->isDirectory();
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILTER_VISITORFILEFILTER_CPP
