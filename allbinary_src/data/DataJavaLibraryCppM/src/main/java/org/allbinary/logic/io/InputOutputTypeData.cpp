
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputOutputTypeData
            : public Object
         {

    private: static InputOutputTypeData instance() { return InputOutputTypeData(); }

    public: static InputOutputTypeData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputOutputTypeData::instance();
    
}


private: InputOutputTypeData(){
}


    public: const std::string NAME = "INPUT_OUTPUT_TYPE_NAME";

    public: const std::string FILE = "INPUT_OUTPUT_TYPE_FILE";

    public: const std::string RESPONSE = "INPUT_OUTPUT_TYPE_RESPONSE";

    public: const std::string DB = "INPUT_OUTPUT_TYPE_DB";

    public: const std::string JSP = "jsp";

    public: const std::string JSP_FRAGMENT = "jspf";

    public: const std::string PHP = "php";

    public: const std::string ASP = "asp";

    public: const std::string PL = "pl";

    public: const std::string DEFAULT = this->JSP;

    public: const std::string DEFAULT_FRAGMENT = this->JSP_FRAGMENT;

};

            

