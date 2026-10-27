
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Directory;
class AbPath;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InitInfo2
            : public virtual Object
         {

    private: static InitInfo2* instance_owner();
    private: static InitInfo2* instance;

    public: static InitInfo2* getInstance();


            
    public: InitInfo2();
        
    private: Directory* directory;

    public: bool isTestHtmlPathValid(AbPath* value);

    public: bool isMainPathValid(AbPath* value);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_INITINFO2_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_INIT_INITINFO2_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_INIT_INITINFO2_H_COMPLETE
        #if __has_include(<org/allbinary/logic/io/file/directory/Directory.h>)
#include <org/allbinary/logic/io/file/directory/Directory.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif

        #endif
    
