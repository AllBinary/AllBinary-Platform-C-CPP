
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
        
class XslData
            : public Object
         {

    private: static XslData instance() { return XslData(); }

    public: static XslData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return XslData::instance();
    
}


private: XslData(){
}


    public: std::string NAME = "XSL_NAME";

    public: std::string ROOT_IMPORT_URI = "ROOT_IMPORT_URI";

};

            

