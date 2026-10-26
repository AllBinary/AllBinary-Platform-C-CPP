
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
        
class LogoData
            : public Object
         {

    private: static LogoData instance() { return LogoData(); }

    public: static LogoData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LogoData::instance();
    
}


private: LogoData(){
}


    public: const std::string NAME = "LOGO_NAME";

    public: const std::string IMAGEPATH = "LOGO_IMAGE_PATH";

    public: const std::string IMAGEFILENAME = "LOGO_IMAGE_FILE_NAME";

    public: const std::string IMAGE = "LOGO_IMAGE";

};

            

