
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
        



        #ifndef ORG_ALLBINARY_STRING_COMMONLABELS_H
        #define ORG_ALLBINARY_STRING_COMMONLABELS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class JsType;
class JsMethod;
class JsProperty;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CommonLabels
            : public virtual Object
         {

    private: static CommonLabels* instance_owner();
    private: static CommonLabels* instance;

    public: static CommonLabels* getInstance();


            
    public: CommonLabels();
        
    public: const std::string WIDTH_LABEL = " Width: ";

    public: const std::string HEIGHT_LABEL = " Height: ";

    public: const std::string END_LABEL = "End: ";

    public: const std::string TOTAL_LABEL = "Total: ";

    public: const std::string INDEX_LABEL = "index: ";

    public: const std::string START_LABEL = "Start: ";

    public: const std::string COMMAND_LABEL = "Command: ";

    public: const std::string NAME_LABEL = "Name: ";

    public: const std::string START;

    public: const std::string ELAPSED = " Elapsed: ";

    public: const std::string CURRENT = " Current: ";

    public: const std::string NEXT = "Next";

    public: const std::string ITEM_LABEL = "Item: ";

    public: const std::string RESULT_ = "Result: ";

    public: const std::string COLON_SEP = ": ";

};

            


        #endif //ORG_ALLBINARY_STRING_COMMONLABELS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_STRING_COMMONLABELS_H_COMPLETE)
        #define ORG_ALLBINARY_STRING_COMMONLABELS_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include(<jsinterop/annotations/JsProperty.h>)
#include <jsinterop/annotations/JsProperty.h>
#endif

        #endif
    
