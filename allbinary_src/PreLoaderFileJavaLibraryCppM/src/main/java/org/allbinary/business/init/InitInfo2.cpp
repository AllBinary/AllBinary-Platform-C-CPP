
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
        
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InitInfo2
            : public Object
         {

    private: static InitInfo2 instance() { return InitInfo2(); }

    public: static InitInfo2 getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InitInfo2::instance();
    
}


    private: const Directory directory = Directory::getInstance();

    public: bool isTestHtmlPathValid(AbPath value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directory.create(value);;
    
}


    public: bool isMainPathValid(AbPath value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->directory.create(value);;
    
}


};

            

