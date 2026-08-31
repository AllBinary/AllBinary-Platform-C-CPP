
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

            #include "../../../../../../java/lang/Object.h"
        
#include <java/io/File.h>

      
#include <java/io/FileFilter.h>

      
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DirectoryFileVisitor
            : public Object
        : public VisitorInterface, public FileFilter {
        

public constructor ();

    public bool accept(java.io.File arg0);

    public any visit(any = {} anyType);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_DIRECTORY_DIRECTORYFILEVISITOR_H
