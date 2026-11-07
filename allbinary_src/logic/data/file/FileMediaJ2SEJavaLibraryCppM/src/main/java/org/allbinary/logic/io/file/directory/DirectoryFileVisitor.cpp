
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYFILEVISITOR_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYFILEVISITOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/directory/DirectoryFileVisitor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/io/File.h>

      
#include <java/io/FileFilter.h>

      
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DirectoryFileVisitor::DirectoryFileVisitor(){
}


    auto DirectoryFileVisitor::accept(java::io::File* arg0) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return (JavaBoxes::unbox<bool>(this->visit(arg0))).;;
    
}


    auto DirectoryFileVisitor::visit(Object* anyType) -> Object*{

    File* file = dynamic_cast<File*>(anyType);;
    

    int32_t index = 1;;
    

    File* aFile = file->getParentFile();;
    

        while((aFile= aFile->getParentFile()) != 
                                    nullptr
                                )
        {
index++;
    
}


                        if(file->isDirectory() && index < 5)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(Boolean::TRUE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(Boolean::FALSE);
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYFILEVISITOR_CPP
