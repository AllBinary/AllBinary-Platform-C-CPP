
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_INITINFO2_H
        #define ORG_ALLBINARY_BUSINESS_INIT_INITINFO2_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InitInfo2
            : public Object
         {

    private: static InitInfo2 instance() { return InitInfo2(); }

    public: static InitInfo2 getInstance();

    private: const Directory directory = Directory::getInstance();

    public: bool isTestHtmlPathValid(AbPath value);

    public: bool isMainPathValid(AbPath value);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_INITINFO2_H
