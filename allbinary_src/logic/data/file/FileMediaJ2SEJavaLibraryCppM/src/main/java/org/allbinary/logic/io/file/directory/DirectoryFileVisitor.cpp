
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
        



            #include "java/lang/Object.h"
        
#include <java/io/File.h>

      
#include <java/io/FileFilter.h>

      
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DirectoryFileVisitor
            : public Object
        : public VisitorInterface, public FileFilter {

public: DirectoryFileVisitor(){
}


    public: bool accept(java::io::File arg0){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return visit = this->visit(arg0)visit
visit.
                    .valueOf();;
    
}


    public: Object* visit(Object* anyType){

    File file = *dynamic_cast<File*>(anyType);;
    

    int32_t index = 1;;
    

    File aFile = file.getParentFile();;
    

        while((aFile= aFile.getParentFile()) != 
                                    nullptr
                                )
        {
index++;
    
}


                        if(file.isDirectory() && index < 5)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}


};

            

