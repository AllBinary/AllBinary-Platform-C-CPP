
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
        



            #include "java/lang/Object.h"
        
#include <java/io/FileFilter.h>

      
#include <org/allbinary/logic/io/file/visitor/IncludeFileExtensionsBooleanFileVisitor.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VisitorFileFilter.h"

class BasicFileFilterUtil
            : public Object
         {

    public: static FileFilter getInstance(std::string extension){

    BasicArrayList vector = BasicArrayListD();;
    
vector.add(extension);
    

    IncludeFileExtensionsBooleanFileVisitor includeFileExtensionsBooleanFileVisitor = IncludeFileExtensionsBooleanFileVisitor(vector);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VisitorFileFilter(includeFileExtensionsBooleanFileVisitor);
    
}


private: BasicFileFilterUtil(){
}


};

            

