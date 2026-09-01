
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_FORWARD_FORWARDDATA_H
        #define ORG_ALLBINARY_BUSINESS_FORWARD_FORWARDDATA_H

            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ForwardData
            : public Object
         {

    private: static ForwardData instance() { return ForwardData(); }

    public: static ForwardData getInstance();

private: ForwardData();

    public: const std::string PAGE = "FORWARD_PAGE";

    public: const std::string NAME = "FORWARD_NAME";

    public: const std::string VALUE = "FORWARD_VALUE";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_FORWARD_FORWARDDATA_H
