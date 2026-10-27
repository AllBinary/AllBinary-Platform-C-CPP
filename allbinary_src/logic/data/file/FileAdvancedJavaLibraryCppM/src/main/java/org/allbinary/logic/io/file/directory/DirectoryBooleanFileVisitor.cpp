
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYBOOLEANFILEVISITOR_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYBOOLEANFILEVISITOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/directory/DirectoryBooleanFileVisitor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DirectoryBooleanFileVisitor::DirectoryBooleanFileVisitor(){
}


    auto DirectoryBooleanFileVisitor::visit(Object* anyType) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->visit(dynamic_cast<AbFile*>(anyType));
    
}


    auto DirectoryBooleanFileVisitor::visit(AbFile* file) -> bool{

                        if(file->isDirectory())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYBOOLEANFILEVISITOR_CPP
