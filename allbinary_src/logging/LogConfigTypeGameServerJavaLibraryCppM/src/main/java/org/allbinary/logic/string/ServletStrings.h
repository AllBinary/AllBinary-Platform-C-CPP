
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
        



        #ifndef ORG_ALLBINARY_LOGIC_STRING_SERVLETSTRINGS_H
        #define ORG_ALLBINARY_LOGIC_STRING_SERVLETSTRINGS_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ServletStrings
            : public Object
         {

    private: static ServletStrings instance() { return ServletStrings(); }

    public: static ServletStrings getInstance();

    public: const std::string DOPOST = "doPost";

    public: const std::string DOGET = "doGet";

    public: const std::string REQUEST_EXCEPTION = "Request Failed";

};

            


        #endif //ORG_ALLBINARY_LOGIC_STRING_SERVLETSTRINGS_H
