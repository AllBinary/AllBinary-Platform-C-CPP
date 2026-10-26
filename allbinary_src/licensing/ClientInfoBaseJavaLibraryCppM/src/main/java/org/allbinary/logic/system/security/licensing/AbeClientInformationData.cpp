
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
        
class AbeClientInformationData
            : public Object
         {

    private: static AbeClientInformationData instance() { return AbeClientInformationData(); }

    public: static AbeClientInformationData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeClientInformationData::instance();
    
}


private: AbeClientInformationData(){
}


    public: const std::string KEY = "KEY";

    public: const std::string NAME = "NAME";

    public: const std::string VERSION = "VERSION";

    public: const std::string SPECIALNAME = "SPECIALNAME";

    public: const std::string LICENSEID = "LICENSEID";

    public: const std::string LICENSE_TYPE = "LICENSETYPE";

    public: const std::string PREVIOUSLICENSEID = "PREVIOUSLICENSEID";

    public: const std::string OSNAME = "OSNAME";

    public: const std::string OSARCH = "OSARCH";

    public: const std::string OSVERSION = "OSVERSION";

    public: const std::string OS = "OS";

    public: const std::string HARDWARE = "HARDWARE";

    public: const std::string LICENSESERVERS = "LICENSESERVERS";

    public: const std::string NEWLICENSE = "NEWLICENSE";

    public: const std::string ISNEW = "ISNEW";

    public: const std::string SPECIAL = "SPECIAL";

};

            

