
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_INPUTOUTPUTTYPEDATA_H
        #define ORG_ALLBINARY_LOGIC_IO_INPUTOUTPUTTYPEDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputOutputTypeData
            : public virtual Object
         {

    private: static InputOutputTypeData* instance_owner();
    private: static InputOutputTypeData* instance;

    public: static InputOutputTypeData* getInstance();

private: InputOutputTypeData();

    public: const std::string NAME = "INPUT_OUTPUT_TYPE_NAME";

    public: const std::string FILE = "INPUT_OUTPUT_TYPE_FILE";

    public: const std::string RESPONSE = "INPUT_OUTPUT_TYPE_RESPONSE";

    public: const std::string DB = "INPUT_OUTPUT_TYPE_DB";

    public: const std::string JSP = "jsp";

    public: const std::string JSP_FRAGMENT = "jspf";

    public: const std::string PHP = "php";

    public: const std::string ASP = "asp";

    public: const std::string PL = "pl";

    public: const std::string DEFAULT;

    public: const std::string DEFAULT_FRAGMENT;

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_INPUTOUTPUTTYPEDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_INPUTOUTPUTTYPEDATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_INPUTOUTPUTTYPEDATA_H_COMPLETE
        
        #endif
    
