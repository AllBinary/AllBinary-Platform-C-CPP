
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPSETNOTIFIER_H
        #define ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPSETNOTIFIER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/net/URL.h>
class BasicArrayList;
class BasicArrayListD;
class HelpSet;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class JavaHelpSetNotifier
            : public virtual Object
         {

    private: static BasicArrayList* vector;

    private: static BasicArrayList* get();

    public: static bool isNotified(HelpSet* helpSet);

private: JavaHelpSetNotifier();

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPSETNOTIFIER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPSETNOTIFIER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_JAVA_HELP_JAVAHELPSETNOTIFIER_H_COMPLETE
        #if __has_include(<java/net/URL.h>)
#include <java/net/URL.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<javax/help/HelpSet.h>)
#include <javax/help/HelpSet.h>
#endif

        #endif
    
