
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_THREAD_THREADPOOLSTRINGS_H
        #define ORG_ALLBINARY_THREAD_THREADPOOLSTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ThreadPoolStrings
            : public virtual Object
         {

    private: static ThreadPoolStrings* instance_owner();
    private: static ThreadPoolStrings* instance;

    public: static ThreadPoolStrings* getInstance();


            
    public: ThreadPoolStrings();
        
    public: const std::string ADD_TASK = "addTask";

    public: const std::string START_TASK = "Started Task: ";

    public: const std::string COMPLETE_TASK = "Completed Task: ";

};

            


        #endif //ORG_ALLBINARY_THREAD_THREADPOOLSTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_THREAD_THREADPOOLSTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_THREAD_THREADPOOLSTRINGS_H_COMPLETE
        
        #endif
    
