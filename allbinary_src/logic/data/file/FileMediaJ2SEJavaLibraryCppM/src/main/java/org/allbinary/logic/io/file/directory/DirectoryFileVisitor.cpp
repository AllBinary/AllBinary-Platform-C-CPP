
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
        



            #include "../../../../../../java/lang/Object.h"
        
#include <java/io/File.h>

      
#include <java/io/FileFilter.h>

      
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DirectoryFileVisitor
            : public Object
        : public VisitorInterface, public FileFilter {
        

public constructor (){

            super();
        }


    public bool accept(java.io.File arg0){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return visit = this.visit(arg0)visit as Boolean
visit.
                    .valueOf();;
    
}


    public any visit(any = {} anyType){

    file: File = anyType as File;;
    

    index: int32_t = 1;;
    

    aFile: File = file.getParentFile()!;;
    

        while((aFile= aFile!.getParentFile()) != 
                                    null
                                )
        {
index++;
    
}


                        if(file.isDirectory() && index < 5)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}


};

            

