
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANFACTORY_H
        #define ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Boolean.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BooleanFactory
            : public virtual Object
         {

    private: static BooleanFactory* instance_owner();
    private: static BooleanFactory* instance;

    public: static BooleanFactory* getInstance();


            
    public: BooleanFactory();
        
    public: bool TRUE;

    public: bool FALSE;

    public: const std::string TRUE_STRING;

    public: const std::string FALSE_STRING;

    public: const std::string YES = "yes";

    public: const std::string NO = "no";

    public: std::string toStringb(bool bool_);

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANFACTORY_H_COMPLETE
        
        #endif
    
